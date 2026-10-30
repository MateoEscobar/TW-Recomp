#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00429E58
// Address: 0x429e58 - 0x429f50
void sub_00429E58_0x429e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429E58_0x429e58");
#endif

    switch (ctx->pc) {
        case 0x429e70u: goto label_429e70;
        case 0x429f40u: goto label_429f40;
        default: break;
    }

    ctx->pc = 0x429e58u;

    // 0x429e58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x429e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x429e5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x429e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x429e60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x429e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x429e64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x429e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x429e68: 0xc131184  jal         func_4C4610
    ctx->pc = 0x429E68u;
    SET_GPR_U32(ctx, 31, 0x429E70u);
    ctx->pc = 0x429E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429E68u;
    // 0x429e6c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C4610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C4610u, 0x429E68u, 0x429E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429E70u;
label_429e70:
    // 0x429e70: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x429e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x429e74: 0x24042710  addiu       $a0, $zero, 0x2710
    ctx->pc = 0x429e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x429e78: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x429e78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x429e7c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x429e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x429e80: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x429e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x429e84: 0x51c00001  beql        $t6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x429E84u;
    {
        const bool branch_taken_0x429e84 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x429e84) {
            ctx->pc = 0x429E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x429E84u;
            // 0x429e88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x429E8Cu;
            goto label_429e8c;
        }
    }
    ctx->pc = 0x429E8Cu;
label_429e8c:
    // 0x429e8c: 0x8ca25460  lw          $v0, 0x5460($a1)
    ctx->pc = 0x429e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 21600)));
    // 0x429e90: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x429e90u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x429e94: 0x3044001f  andi        $a0, $v0, 0x1F
    ctx->pc = 0x429e94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x429e98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x429e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x429e9c: 0x3812  mflo        $a3
    ctx->pc = 0x429e9cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x429ea0: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x429EA0u;
    {
        const bool branch_taken_0x429ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x429EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429EA0u;
        // 0x429ea4: 0xaca25460  sw          $v0, 0x5460($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 21600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x429ea0) {
            ctx->pc = 0x429F40u;
            goto label_429f40;
        }
    }
    ctx->pc = 0x429EA8u;
    // 0x429ea8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x429ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x429eac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x429eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x429eb0: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x429eb0u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x429eb4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x429EB4u;
    {
        const bool branch_taken_0x429eb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x429eb4) {
            ctx->pc = 0x429EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x429EB4u;
            // 0x429eb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x429EBCu;
            goto label_429ebc;
        }
    }
    ctx->pc = 0x429EBCu;
label_429ebc:
    // 0x429ebc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x429ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x429ec0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x429ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x429ec4: 0x8fa90024  lw          $t1, 0x24($sp)
    ctx->pc = 0x429ec4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x429ec8: 0x8faa0028  lw          $t2, 0x28($sp)
    ctx->pc = 0x429ec8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x429ecc: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x429eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x429ed0: 0x8fad0040  lw          $t5, 0x40($sp)
    ctx->pc = 0x429ed0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x429ed4: 0x2484bc88  addiu       $a0, $a0, -0x4378
    ctx->pc = 0x429ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950024));
    // 0x429ed8: 0x8fab0038  lw          $t3, 0x38($sp)
    ctx->pc = 0x429ed8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x429edc: 0x8fac003c  lw          $t4, 0x3C($sp)
    ctx->pc = 0x429edcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x429ee0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x429ee0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x429ee4: 0x3012  mflo        $a2
    ctx->pc = 0x429ee4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x429ee8: 0x3810  mfhi        $a3
    ctx->pc = 0x429ee8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x429eec: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x429eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x429ef0: 0x1234818  mult        $t1, $t1, $v1
    ctx->pc = 0x429ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x429ef4: 0x1435018  mult        $t2, $t2, $v1
    ctx->pc = 0x429ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x429ef8: 0x1635818  mult        $t3, $t3, $v1
    ctx->pc = 0x429ef8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x429efc: 0x1a32818  mult        $a1, $t5, $v1
    ctx->pc = 0x429efcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x429f00: 0x4e001b  divu        $zero, $v0, $t6
    ctx->pc = 0x429f00u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x429f04: 0xa36821  addu        $t5, $a1, $v1
    ctx->pc = 0x429f04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x429f08: 0x1012  mflo        $v0
    ctx->pc = 0x429f08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x429f0c: 0x12e001b  divu        $zero, $t1, $t6
    ctx->pc = 0x429f0cu;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x429f10: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x429f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x429f14: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x429f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x429f18: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x429f18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x429f1c: 0x4812  mflo        $t1
    ctx->pc = 0x429f1cu;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x429f20: 0x14e001b  divu        $zero, $t2, $t6
    ctx->pc = 0x429f20u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x429f24: 0x5012  mflo        $t2
    ctx->pc = 0x429f24u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x429f28: 0x16e001b  divu        $zero, $t3, $t6
    ctx->pc = 0x429f28u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x429f2c: 0x5812  mflo        $t3
    ctx->pc = 0x429f2cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x429f30: 0x1ac001b  divu        $zero, $t5, $t4
    ctx->pc = 0x429f30u;
    { uint32_t divisor = GPR_U32(ctx, 12); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 13) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,13); } }
    // 0x429f34: 0x6812  mflo        $t5
    ctx->pc = 0x429f34u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x429f38: 0xc10c978  jal         func_4325E0
    ctx->pc = 0x429F38u;
    SET_GPR_U32(ctx, 31, 0x429F40u);
    ctx->pc = 0x429F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x429F38u;
    // 0x429f3c: 0xafad0008  sw          $t5, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4325E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4325E0u, 0x429F38u, 0x429F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x429F40u;
label_429f40:
    // 0x429f40: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x429f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x429f44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x429f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x429f48: 0x3e00008  jr          $ra
    ctx->pc = 0x429F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429F48u;
        // 0x429f4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x429F50u;
}
