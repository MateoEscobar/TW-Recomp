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

// Function: sub_00409940
// Address: 0x409940 - 0x4099e8
void sub_00409940_0x409940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409940_0x409940");
#endif

    switch (ctx->pc) {
        case 0x409958u: goto label_409958;
        case 0x409968u: goto label_409968;
        case 0x409978u: goto label_409978;
        case 0x409994u: goto label_409994;
        case 0x4099a0u: goto label_4099a0;
        case 0x4099acu: goto label_4099ac;
        case 0x4099bcu: goto label_4099bc;
        case 0x4099ccu: goto label_4099cc;
        default: break;
    }

    ctx->pc = 0x409940u;

    // 0x409940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x409940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x409944: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x409944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x409948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x409948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40994c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40994cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x409950: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x409950u;
    SET_GPR_U32(ctx, 31, 0x409958u);
    ctx->pc = 0x409954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409950u;
    // 0x409954: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x409950u, 0x409958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409958u;
label_409958:
    // 0x409958: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x409958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40995c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409960: 0xc0c8d6e  jal         func_3235B8
    ctx->pc = 0x409960u;
    SET_GPR_U32(ctx, 31, 0x409968u);
    ctx->pc = 0x409964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409960u;
    // 0x409964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235B8u, 0x409960u, 0x409968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409968u;
label_409968:
    // 0x409968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x409968u;
    {
        const bool branch_taken_0x409968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409968u;
        // 0x40996c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409968) {
            ctx->pc = 0x409988u;
            goto label_409988;
        }
    }
    ctx->pc = 0x409970u;
    // 0x409970: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x409970u;
    SET_GPR_U32(ctx, 31, 0x409978u);
    ctx->pc = 0x409974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409970u;
    // 0x409974: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x409970u, 0x409978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409978u;
label_409978:
    // 0x409978: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x409978u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40997c: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x40997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x409980: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x409980u;
    {
        const bool branch_taken_0x409980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x409980) {
            ctx->pc = 0x4099C4u;
            goto label_4099c4;
        }
    }
    ctx->pc = 0x409988u;
label_409988:
    // 0x409988: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x409988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40998c: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40998Cu;
    SET_GPR_U32(ctx, 31, 0x409994u);
    ctx->pc = 0x409990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40998Cu;
    // 0x409990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40998Cu, 0x409994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409994u;
label_409994:
    // 0x409994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409998: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x409998u;
    SET_GPR_U32(ctx, 31, 0x4099A0u);
    ctx->pc = 0x40999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409998u;
    // 0x40999c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x409998u, 0x4099A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4099A0u;
label_4099a0:
    // 0x4099a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4099a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4099a4: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x4099A4u;
    SET_GPR_U32(ctx, 31, 0x4099ACu);
    ctx->pc = 0x4099A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4099A4u;
    // 0x4099a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x4099A4u, 0x4099ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4099ACu;
label_4099ac:
    // 0x4099ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4099acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4099b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4099b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4099b4: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x4099B4u;
    SET_GPR_U32(ctx, 31, 0x4099BCu);
    ctx->pc = 0x4099B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4099B4u;
    // 0x4099b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x4099B4u, 0x4099BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4099BCu;
label_4099bc:
    // 0x4099bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4099BCu;
    {
        const bool branch_taken_0x4099bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4099C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4099BCu;
        // 0x4099c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4099bc) {
            ctx->pc = 0x4099D0u;
            goto label_4099d0;
        }
    }
    ctx->pc = 0x4099C4u;
label_4099c4:
    // 0x4099c4: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x4099C4u;
    SET_GPR_U32(ctx, 31, 0x4099CCu);
    ctx->pc = 0x4099C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4099C4u;
    // 0x4099c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x4099C4u, 0x4099CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4099CCu;
label_4099cc:
    // 0x4099cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4099ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4099d0:
    // 0x4099d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4099d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4099d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4099d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4099d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4099d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4099dc: 0x3e00008  jr          $ra
    ctx->pc = 0x4099DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4099E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4099DCu;
        // 0x4099e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4099DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4099E4u;
    // 0x4099e4: 0x0  nop
    ctx->pc = 0x4099e4u;
    // NOP
    ctx->pc = 0x4099e8u;
}
