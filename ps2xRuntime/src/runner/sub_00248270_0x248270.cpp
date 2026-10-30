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

// Function: sub_00248270
// Address: 0x248270 - 0x2482e0
void sub_00248270_0x248270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248270_0x248270");
#endif

    switch (ctx->pc) {
        case 0x248270u: goto label_248270;
        case 0x248274u: goto label_248274;
        case 0x248278u: goto label_248278;
        case 0x24827cu: goto label_24827c;
        case 0x248280u: goto label_248280;
        case 0x248284u: goto label_248284;
        case 0x248288u: goto label_248288;
        case 0x24828cu: goto label_24828c;
        case 0x248290u: goto label_248290;
        case 0x248294u: goto label_248294;
        case 0x248298u: goto label_248298;
        case 0x24829cu: goto label_24829c;
        case 0x2482a0u: goto label_2482a0;
        case 0x2482a4u: goto label_2482a4;
        case 0x2482a8u: goto label_2482a8;
        case 0x2482acu: goto label_2482ac;
        case 0x2482b0u: goto label_2482b0;
        case 0x2482b4u: goto label_2482b4;
        case 0x2482b8u: goto label_2482b8;
        case 0x2482bcu: goto label_2482bc;
        case 0x2482c0u: goto label_2482c0;
        case 0x2482c4u: goto label_2482c4;
        case 0x2482c8u: goto label_2482c8;
        case 0x2482ccu: goto label_2482cc;
        case 0x2482d0u: goto label_2482d0;
        case 0x2482d4u: goto label_2482d4;
        case 0x2482d8u: goto label_2482d8;
        case 0x2482dcu: goto label_2482dc;
        default: break;
    }

    ctx->pc = 0x248270u;

label_248270:
    // 0x248270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_248274:
    // 0x248274: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x248274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_248278:
    // 0x248278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24827c:
    // 0x24827c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24827cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248280:
    // 0x248280: 0x8e0801a0  lw          $t0, 0x1A0($s0)
    ctx->pc = 0x248280u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_248284:
    // 0x248284: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
label_248288:
    if (ctx->pc == 0x248288u) {
        ctx->pc = 0x248288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248284u;
        // 0x248288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24828Cu;
        goto label_24828c;
    }
    ctx->pc = 0x248284u;
    {
        const bool branch_taken_0x248284 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x248288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248284u;
        // 0x248288: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248284) {
            ctx->pc = 0x2482C0u;
            goto label_2482c0;
        }
    }
    ctx->pc = 0x24828Cu;
label_24828c:
    // 0x24828c: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x24828cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
label_248290:
    // 0x248290: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x248290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_248294:
    // 0x248294: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x248294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248298:
    // 0x248298: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x248298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24829c:
    // 0x24829c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2482a0:
    // 0x2482a0: 0x40f809  jalr        $v0
label_2482a4:
    if (ctx->pc == 0x2482A4u) {
        ctx->pc = 0x2482A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482A0u;
        // 0x2482a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2482A8u;
        goto label_2482a8;
    }
    ctx->pc = 0x2482A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2482A8u);
        ctx->pc = 0x2482A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482A0u;
        // 0x2482a4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2482A0u, 0x2482A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2482A8u;
label_2482a8:
    // 0x2482a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2482a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2482ac:
    // 0x2482ac: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2482b0:
    if (ctx->pc == 0x2482B0u) {
        ctx->pc = 0x2482B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482ACu;
        // 0x2482b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2482B4u;
        goto label_2482b4;
    }
    ctx->pc = 0x2482ACu;
    {
        const bool branch_taken_0x2482ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2482B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482ACu;
        // 0x2482b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482ac) {
            ctx->pc = 0x2482C4u;
            goto label_2482c4;
        }
    }
    ctx->pc = 0x2482B4u;
label_2482b4:
    // 0x2482b4: 0x94620032  lhu         $v0, 0x32($v1)
    ctx->pc = 0x2482b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 50)));
label_2482b8:
    // 0x2482b8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2482b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
label_2482bc:
    // 0x2482bc: 0xa4620032  sh          $v0, 0x32($v1)
    ctx->pc = 0x2482bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 50), (uint16_t)GPR_U32(ctx, 2));
label_2482c0:
    // 0x2482c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2482c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2482c4:
    // 0x2482c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2482c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2482c8:
    // 0x2482c8: 0xc08700c  jal         func_21C030
label_2482cc:
    if (ctx->pc == 0x2482CCu) {
        ctx->pc = 0x2482CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482C8u;
        // 0x2482cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2482D0u;
        goto label_2482d0;
    }
    ctx->pc = 0x2482C8u;
    SET_GPR_U32(ctx, 31, 0x2482D0u);
    ctx->pc = 0x2482CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482C8u;
    // 0x2482cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C030u, 0x2482C8u, 0x2482D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482D0u;
label_2482d0:
    // 0x2482d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2482d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2482d4:
    // 0x2482d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2482d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2482d8:
    // 0x2482d8: 0x3e00008  jr          $ra
label_2482dc:
    if (ctx->pc == 0x2482DCu) {
        ctx->pc = 0x2482DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482D8u;
        // 0x2482dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2482E0u;
        goto label_fallthrough_0x2482d8;
    }
    ctx->pc = 0x2482D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2482DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482D8u;
        // 0x2482dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2482D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2482d8:
    ctx->pc = 0x2482E0u;
}
