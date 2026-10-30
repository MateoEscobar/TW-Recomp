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

// Function: sub_004096D0
// Address: 0x4096d0 - 0x409790
void sub_004096D0_0x4096d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004096D0_0x4096d0");
#endif

    switch (ctx->pc) {
        case 0x4096f4u: goto label_4096f4;
        case 0x409700u: goto label_409700;
        case 0x40971cu: goto label_40971c;
        case 0x409728u: goto label_409728;
        case 0x409730u: goto label_409730;
        case 0x409738u: goto label_409738;
        case 0x409748u: goto label_409748;
        case 0x409758u: goto label_409758;
        case 0x409760u: goto label_409760;
        case 0x40976cu: goto label_40976c;
        default: break;
    }

    ctx->pc = 0x4096d0u;

    // 0x4096d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4096d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4096d4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x4096d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x4096d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4096d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4096dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4096dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4096e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4096e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4096e4: 0x24517f98  addiu       $s1, $v0, 0x7F98
    ctx->pc = 0x4096e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 32664));
    // 0x4096e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4096e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4096ec: 0xc102866  jal         func_40A198
    ctx->pc = 0x4096ECu;
    SET_GPR_U32(ctx, 31, 0x4096F4u);
    ctx->pc = 0x4096F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4096ECu;
    // 0x4096f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x4096ECu, 0x4096F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4096F4u;
label_4096f4:
    // 0x4096f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4096f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4096f8: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x4096F8u;
    SET_GPR_U32(ctx, 31, 0x409700u);
    ctx->pc = 0x4096FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4096F8u;
    // 0x4096fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x4096F8u, 0x409700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409700u;
label_409700:
    // 0x409700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x409700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x409704: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x409704u;
    {
        const bool branch_taken_0x409704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x409704) {
            ctx->pc = 0x409708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x409704u;
            // 0x409708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x409764u;
            goto label_409764;
        }
    }
    ctx->pc = 0x40970Cu;
    // 0x40970c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x40970cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x409710: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x409710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x409714: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x409714u;
    SET_GPR_U32(ctx, 31, 0x40971Cu);
    ctx->pc = 0x409718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409714u;
    // 0x409718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x409714u, 0x40971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40971Cu;
label_40971c:
    // 0x40971c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409720: 0xc10284a  jal         func_40A128
    ctx->pc = 0x409720u;
    SET_GPR_U32(ctx, 31, 0x409728u);
    ctx->pc = 0x409724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409720u;
    // 0x409724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x409720u, 0x409728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409728u;
label_409728:
    // 0x409728: 0xc102fb6  jal         func_40BED8
    ctx->pc = 0x409728u;
    SET_GPR_U32(ctx, 31, 0x409730u);
    ctx->pc = 0x40972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409728u;
    // 0x40972c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BED8u, 0x409728u, 0x409730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409730u;
label_409730:
    // 0x409730: 0xc102a2c  jal         func_40A8B0
    ctx->pc = 0x409730u;
    SET_GPR_U32(ctx, 31, 0x409738u);
    ctx->pc = 0x409734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409730u;
    // 0x409734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A8B0u, 0x409730u, 0x409738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409738u;
label_409738:
    // 0x409738: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x40973c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40973cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409740: 0xc0c8eb4  jal         func_323AD0
    ctx->pc = 0x409740u;
    SET_GPR_U32(ctx, 31, 0x409748u);
    ctx->pc = 0x409744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409740u;
    // 0x409744: 0x24a57fa0  addiu       $a1, $a1, 0x7FA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323AD0u, 0x409740u, 0x409748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409748u;
label_409748:
    // 0x409748: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x409748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x40974c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40974cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409750: 0xc10284a  jal         func_40A128
    ctx->pc = 0x409750u;
    SET_GPR_U32(ctx, 31, 0x409758u);
    ctx->pc = 0x409754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409750u;
    // 0x409754: 0x24a57fa8  addiu       $a1, $a1, 0x7FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A128u, 0x409750u, 0x409758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409758u;
label_409758:
    // 0x409758: 0xc1023a6  jal         func_408E98
    ctx->pc = 0x409758u;
    SET_GPR_U32(ctx, 31, 0x409760u);
    ctx->pc = 0x40975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409758u;
    // 0x40975c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408E98u, 0x409758u, 0x409760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409760u;
label_409760:
    // 0x409760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_409764:
    // 0x409764: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x409764u;
    SET_GPR_U32(ctx, 31, 0x40976Cu);
    ctx->pc = 0x409768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409764u;
    // 0x409768: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x409764u, 0x40976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40976Cu;
label_40976c:
    // 0x40976c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40976cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x409770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x409774: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x409774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40977c: 0x3e00008  jr          $ra
    ctx->pc = 0x40977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40977Cu;
        // 0x409780: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40977Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409784u;
    // 0x409784: 0x0  nop
    ctx->pc = 0x409784u;
    // NOP
    // 0x409788: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x409788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x40978c: 0x0  nop
    ctx->pc = 0x40978cu;
    // NOP
    ctx->pc = 0x409790u;
}
