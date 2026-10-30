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

// Function: sub_0037B1E8
// Address: 0x37b1e8 - 0x37b268
void sub_0037B1E8_0x37b1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B1E8_0x37b1e8");
#endif

    switch (ctx->pc) {
        case 0x37b20cu: goto label_37b20c;
        case 0x37b214u: goto label_37b214;
        case 0x37b21cu: goto label_37b21c;
        case 0x37b228u: goto label_37b228;
        case 0x37b240u: goto label_37b240;
        case 0x37b24cu: goto label_37b24c;
        default: break;
    }

    ctx->pc = 0x37b1e8u;

    // 0x37b1e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b1ec: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b1f0: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b1f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b1f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b1f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b1fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b204: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B204u;
    SET_GPR_U32(ctx, 31, 0x37B20Cu);
    ctx->pc = 0x37B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B204u;
    // 0x37b208: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B204u, 0x37B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B20Cu;
label_37b20c:
    // 0x37b20c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B20Cu;
    SET_GPR_U32(ctx, 31, 0x37B214u);
    ctx->pc = 0x37B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B20Cu;
    // 0x37b210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B20Cu, 0x37B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B214u;
label_37b214:
    // 0x37b214: 0xc107b7c  jal         func_41EDF0
    ctx->pc = 0x37B214u;
    SET_GPR_U32(ctx, 31, 0x37B21Cu);
    ctx->pc = 0x37B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B214u;
    // 0x37b218: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EDF0u, 0x37B214u, 0x37B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B21Cu;
label_37b21c:
    // 0x37b21c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37b21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b220: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37B220u;
    SET_GPR_U32(ctx, 31, 0x37B228u);
    ctx->pc = 0x37B224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B220u;
    // 0x37b224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37B220u, 0x37B228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B228u;
label_37b228:
    // 0x37b228: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B228u;
    {
        const bool branch_taken_0x37b228 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B228u;
        // 0x37b22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b228) {
            ctx->pc = 0x37B244u;
            goto label_37b244;
        }
    }
    ctx->pc = 0x37B230u;
    // 0x37b230: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37b230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37b234: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37b234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37b238: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37B238u;
    SET_GPR_U32(ctx, 31, 0x37B240u);
    ctx->pc = 0x37B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B238u;
    // 0x37b23c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37B238u, 0x37B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B240u;
label_37b240:
    // 0x37b240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37b244:
    // 0x37b244: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37B244u;
    SET_GPR_U32(ctx, 31, 0x37B24Cu);
    ctx->pc = 0x37B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B244u;
    // 0x37b248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37B244u, 0x37B24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B24Cu;
label_37b24c:
    // 0x37b24c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b25c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B25Cu;
        // 0x37b260: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B264u;
    // 0x37b264: 0x0  nop
    ctx->pc = 0x37b264u;
    // NOP
    ctx->pc = 0x37b268u;
}
