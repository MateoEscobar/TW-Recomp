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

// Function: sub_0037CA78
// Address: 0x37ca78 - 0x37cb20
void sub_0037CA78_0x37ca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CA78_0x37ca78");
#endif

    switch (ctx->pc) {
        case 0x37caa0u: goto label_37caa0;
        case 0x37caa8u: goto label_37caa8;
        case 0x37cabcu: goto label_37cabc;
        case 0x37cac4u: goto label_37cac4;
        case 0x37cad0u: goto label_37cad0;
        case 0x37cae0u: goto label_37cae0;
        case 0x37caf8u: goto label_37caf8;
        case 0x37cb04u: goto label_37cb04;
        default: break;
    }

    ctx->pc = 0x37ca78u;

    // 0x37ca78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37ca78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37ca7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ca80: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37ca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37ca84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37ca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37ca88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ca88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37ca8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37ca94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ca98: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CA98u;
    SET_GPR_U32(ctx, 31, 0x37CAA0u);
    ctx->pc = 0x37CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA98u;
    // 0x37ca9c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CA98u, 0x37CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CAA0u;
label_37caa0:
    // 0x37caa0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CAA0u;
    SET_GPR_U32(ctx, 31, 0x37CAA8u);
    ctx->pc = 0x37CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAA0u;
    // 0x37caa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CAA0u, 0x37CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CAA8u;
label_37caa8:
    // 0x37caa8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37caa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37caac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37caacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cab0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x37cab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cab4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CAB4u;
    SET_GPR_U32(ctx, 31, 0x37CABCu);
    ctx->pc = 0x37CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAB4u;
    // 0x37cab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CAB4u, 0x37CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CABCu;
label_37cabc:
    // 0x37cabc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CABCu;
    SET_GPR_U32(ctx, 31, 0x37CAC4u);
    ctx->pc = 0x37CAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CABCu;
    // 0x37cac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CABCu, 0x37CAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CAC4u;
label_37cac4:
    // 0x37cac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37cac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cac8: 0xc1089a8  jal         func_4226A0
    ctx->pc = 0x37CAC8u;
    SET_GPR_U32(ctx, 31, 0x37CAD0u);
    ctx->pc = 0x37CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAC8u;
    // 0x37cacc: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4226A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4226A0u, 0x37CAC8u, 0x37CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CAD0u;
label_37cad0:
    // 0x37cad0: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x37cad0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37cad4: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x37cad4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x37cad8: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37CAD8u;
    SET_GPR_U32(ctx, 31, 0x37CAE0u);
    ctx->pc = 0x37CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAD8u;
    // 0x37cadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37CAD8u, 0x37CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CAE0u;
label_37cae0:
    // 0x37cae0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37CAE0u;
    {
        const bool branch_taken_0x37cae0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CAE0u;
        // 0x37cae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cae0) {
            ctx->pc = 0x37CAFCu;
            goto label_37cafc;
        }
    }
    ctx->pc = 0x37CAE8u;
    // 0x37cae8: 0x340581e0  ori         $a1, $zero, 0x81E0
    ctx->pc = 0x37cae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x37caec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37caecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37caf0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37CAF0u;
    SET_GPR_U32(ctx, 31, 0x37CAF8u);
    ctx->pc = 0x37CAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAF0u;
    // 0x37caf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37CAF0u, 0x37CAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CAF8u;
label_37caf8:
    // 0x37caf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37caf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37cafc:
    // 0x37cafc: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37CAFCu;
    SET_GPR_U32(ctx, 31, 0x37CB04u);
    ctx->pc = 0x37CB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CAFCu;
    // 0x37cb00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37CAFCu, 0x37CB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB04u;
label_37cb04:
    // 0x37cb04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37cb04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37cb08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37cb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cb0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37cb0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cb10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37cb10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37cb14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cb18: 0x3e00008  jr          $ra
    ctx->pc = 0x37CB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB18u;
        // 0x37cb1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CB20u;
}
