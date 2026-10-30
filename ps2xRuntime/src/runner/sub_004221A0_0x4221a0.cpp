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

// Function: sub_004221A0
// Address: 0x4221a0 - 0x422208
void sub_004221A0_0x4221a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004221A0_0x4221a0");
#endif

    switch (ctx->pc) {
        case 0x4221a0u: goto label_4221a0;
        case 0x4221a4u: goto label_4221a4;
        case 0x4221a8u: goto label_4221a8;
        case 0x4221acu: goto label_4221ac;
        case 0x4221b0u: goto label_4221b0;
        case 0x4221b4u: goto label_4221b4;
        case 0x4221b8u: goto label_4221b8;
        case 0x4221bcu: goto label_4221bc;
        case 0x4221c0u: goto label_4221c0;
        case 0x4221c4u: goto label_4221c4;
        case 0x4221c8u: goto label_4221c8;
        case 0x4221ccu: goto label_4221cc;
        case 0x4221d0u: goto label_4221d0;
        case 0x4221d4u: goto label_4221d4;
        case 0x4221d8u: goto label_4221d8;
        case 0x4221dcu: goto label_4221dc;
        case 0x4221e0u: goto label_4221e0;
        case 0x4221e4u: goto label_4221e4;
        case 0x4221e8u: goto label_4221e8;
        case 0x4221ecu: goto label_4221ec;
        case 0x4221f0u: goto label_4221f0;
        case 0x4221f4u: goto label_4221f4;
        case 0x4221f8u: goto label_4221f8;
        case 0x4221fcu: goto label_4221fc;
        case 0x422200u: goto label_422200;
        case 0x422204u: goto label_422204;
        default: break;
    }

    ctx->pc = 0x4221a0u;

label_4221a0:
    // 0x4221a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4221a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4221a4:
    // 0x4221a4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4221a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4221a8:
    // 0x4221a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4221a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4221ac:
    // 0x4221ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4221acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4221b0:
    // 0x4221b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4221b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4221b4:
    // 0x4221b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4221b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4221b8:
    // 0x4221b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4221b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4221bc:
    // 0x4221bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4221bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4221c0:
    // 0x4221c0: 0x8e430128  lw          $v1, 0x128($s2)
    ctx->pc = 0x4221c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_4221c4:
    // 0x4221c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4221c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4221c8:
    // 0x4221c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4221c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_4221cc:
    // 0x4221cc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x4221ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_4221d0:
    // 0x4221d0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x4221d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_4221d4:
    // 0x4221d4: 0x40f809  jalr        $v0
label_4221d8:
    if (ctx->pc == 0x4221D8u) {
        ctx->pc = 0x4221D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4221D4u;
        // 0x4221d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4221DCu;
        goto label_4221dc;
    }
    ctx->pc = 0x4221D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4221DCu);
        ctx->pc = 0x4221D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4221D4u;
        // 0x4221d8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4221D4u, 0x4221DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4221DCu;
label_4221dc:
    // 0x4221dc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x4221dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4221e0:
    // 0x4221e0: 0x2e040006  sltiu       $a0, $s0, 0x6
    ctx->pc = 0x4221e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_4221e4:
    // 0x4221e4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_4221e8:
    if (ctx->pc == 0x4221E8u) {
        ctx->pc = 0x4221E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4221E4u;
        // 0x4221e8: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4221ECu;
        goto label_4221ec;
    }
    ctx->pc = 0x4221E4u;
    {
        const bool branch_taken_0x4221e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4221E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4221E4u;
        // 0x4221e8: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4221e4) {
            ctx->pc = 0x4221C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4221c0;
        }
    }
    ctx->pc = 0x4221ECu;
label_4221ec:
    // 0x4221ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4221ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4221f0:
    // 0x4221f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4221f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4221f4:
    // 0x4221f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4221f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4221f8:
    // 0x4221f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4221f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4221fc:
    // 0x4221fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4221fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_422200:
    // 0x422200: 0x3e00008  jr          $ra
label_422204:
    if (ctx->pc == 0x422204u) {
        ctx->pc = 0x422204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422200u;
        // 0x422204: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x422208u;
        goto label_fallthrough_0x422200;
    }
    ctx->pc = 0x422200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422200u;
        // 0x422204: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x422200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x422200:
    ctx->pc = 0x422208u;
}
