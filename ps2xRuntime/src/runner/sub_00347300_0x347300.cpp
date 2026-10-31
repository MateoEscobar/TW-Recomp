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

// Function: sub_00347300
// Address: 0x347300 - 0x3473b8
void sub_00347300_0x347300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347300_0x347300");
#endif

    switch (ctx->pc) {
        case 0x347318u: goto label_347318;
        case 0x347330u: goto label_347330;
        case 0x347360u: goto label_347360;
        default: break;
    }

    ctx->pc = 0x347300u;

    // 0x347300: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x347300u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347304: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x347304u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347308: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x347308u;
    {
        const bool branch_taken_0x347308 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x34730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347308u;
        // 0x34730c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347308) {
            ctx->pc = 0x3473B0u;
            goto label_3473b0;
        }
    }
    ctx->pc = 0x347310u;
    // 0x347310: 0x240b00b0  addiu       $t3, $zero, 0xB0
    ctx->pc = 0x347310u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x347314: 0x0  nop
    ctx->pc = 0x347314u;
    // NOP
label_347318:
    // 0x347318: 0x10b1018  mult        $v0, $t0, $t3
    ctx->pc = 0x347318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x34731c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x34731cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347320: 0x250a0001  addiu       $t2, $t0, 0x1
    ctx->pc = 0x347320u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x347324: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x347324u;
    {
        const bool branch_taken_0x347324 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x347328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347324u;
        // 0x347328: 0x4c2021  addu        $a0, $v0, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347324) {
            ctx->pc = 0x347390u;
            goto label_347390;
        }
    }
    ctx->pc = 0x34732Cu;
    // 0x34732c: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x34732cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_347330:
    // 0x347330: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x347330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x347334: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x347334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x347338: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x347338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34733c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x34733cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x347340: 0x0  nop
    ctx->pc = 0x347340u;
    // NOP
    // 0x347344: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x347344u;
    {
        const bool branch_taken_0x347344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x347348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347344u;
        // 0x347348: 0x107102b  sltu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x347344) {
            ctx->pc = 0x347380u;
            goto label_347380;
        }
    }
    ctx->pc = 0x34734Cu;
    // 0x34734c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x34734Cu;
    {
        const bool branch_taken_0x34734c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34734Cu;
        // 0x347350: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34734c) {
            ctx->pc = 0x347390u;
            goto label_347390;
        }
    }
    ctx->pc = 0x347354u;
    // 0x347354: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x347354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x347358: 0x492021  addu        $a0, $v0, $t1
    ctx->pc = 0x347358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x34735c: 0x0  nop
    ctx->pc = 0x34735cu;
    // NOP
label_347360:
    // 0x347360: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x347360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x347364: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x347364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x347368: 0x105182b  sltu        $v1, $t0, $a1
    ctx->pc = 0x347368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x34736c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x34736cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x347370: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x347370u;
    {
        const bool branch_taken_0x347370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x347374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347370u;
        // 0x347374: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347370) {
            ctx->pc = 0x347360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347360;
        }
    }
    ctx->pc = 0x347378u;
    // 0x347378: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x347378u;
    {
        const bool branch_taken_0x347378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347378u;
        // 0x34737c: 0x10b1818  mult        $v1, $t0, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x347378) {
            ctx->pc = 0x347394u;
            goto label_347394;
        }
    }
    ctx->pc = 0x347380u;
label_347380:
    // 0x347380: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x347380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x347384: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x347384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x347388: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x347388u;
    {
        const bool branch_taken_0x347388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347388u;
        // 0x34738c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347388) {
            ctx->pc = 0x347330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347330;
        }
    }
    ctx->pc = 0x347390u;
label_347390:
    // 0x347390: 0x10b1818  mult        $v1, $t0, $t3
    ctx->pc = 0x347390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_347394:
    // 0x347394: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x347394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347398: 0x106202b  sltu        $a0, $t0, $a2
    ctx->pc = 0x347398u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x34739c: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x34739cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3473a0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3473a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3473a4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x3473a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x3473a8: 0x1480ffdb  bnez        $a0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3473A8u;
    {
        const bool branch_taken_0x3473a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3473ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473A8u;
        // 0x3473ac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473a8) {
            ctx->pc = 0x347318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_347318;
        }
    }
    ctx->pc = 0x3473B0u;
label_3473b0:
    // 0x3473b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3473B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3473B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3473B8u;
}
