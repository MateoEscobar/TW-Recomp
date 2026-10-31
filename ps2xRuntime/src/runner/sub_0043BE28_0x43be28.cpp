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

// Function: sub_0043BE28
// Address: 0x43be28 - 0x43be80
void sub_0043BE28_0x43be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BE28_0x43be28");
#endif

    switch (ctx->pc) {
        case 0x43be28u: goto label_43be28;
        case 0x43be2cu: goto label_43be2c;
        case 0x43be30u: goto label_43be30;
        case 0x43be34u: goto label_43be34;
        case 0x43be38u: goto label_43be38;
        case 0x43be3cu: goto label_43be3c;
        case 0x43be40u: goto label_43be40;
        case 0x43be44u: goto label_43be44;
        case 0x43be48u: goto label_43be48;
        case 0x43be4cu: goto label_43be4c;
        case 0x43be50u: goto label_43be50;
        case 0x43be54u: goto label_43be54;
        case 0x43be58u: goto label_43be58;
        case 0x43be5cu: goto label_43be5c;
        case 0x43be60u: goto label_43be60;
        case 0x43be64u: goto label_43be64;
        case 0x43be68u: goto label_43be68;
        case 0x43be6cu: goto label_43be6c;
        case 0x43be70u: goto label_43be70;
        case 0x43be74u: goto label_43be74;
        case 0x43be78u: goto label_43be78;
        case 0x43be7cu: goto label_43be7c;
        default: break;
    }

    ctx->pc = 0x43be28u;

label_43be28:
    // 0x43be28: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x43be28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_43be2c:
    // 0x43be2c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x43be2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_43be30:
    // 0x43be30: 0x8c45f488  lw          $a1, -0xB78($v0)
    ctx->pc = 0x43be30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964360)));
label_43be34:
    // 0x43be34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_43be38:
    // 0x43be38: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_43be3c:
    if (ctx->pc == 0x43BE3Cu) {
        ctx->pc = 0x43BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE38u;
        // 0x43be3c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43BE40u;
        goto label_43be40;
    }
    ctx->pc = 0x43BE38u;
    {
        const bool branch_taken_0x43be38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE38u;
        // 0x43be3c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43be38) {
            ctx->pc = 0x43BE6Cu;
            goto label_43be6c;
        }
    }
    ctx->pc = 0x43BE40u;
label_43be40:
    // 0x43be40: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x43be40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_43be44:
    // 0x43be44: 0x8c437224  lw          $v1, 0x7224($v0)
    ctx->pc = 0x43be44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29220)));
label_43be48:
    // 0x43be48: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_43be4c:
    if (ctx->pc == 0x43BE4Cu) {
        ctx->pc = 0x43BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE48u;
        // 0x43be4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43BE50u;
        goto label_43be50;
    }
    ctx->pc = 0x43BE48u;
    {
        const bool branch_taken_0x43be48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE48u;
        // 0x43be4c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43be48) {
            ctx->pc = 0x43BE70u;
            goto label_43be70;
        }
    }
    ctx->pc = 0x43BE50u;
label_43be50:
    // 0x43be50: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x43be50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_43be54:
    // 0x43be54: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x43be54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_43be58:
    // 0x43be58: 0x8c5cf48c  lw          $gp, -0xB74($v0)
    ctx->pc = 0x43be58u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964364)));
label_43be5c:
    // 0x43be5c: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x43be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_43be60:
    // 0x43be60: 0xa0f809  jalr        $a1
label_43be64:
    if (ctx->pc == 0x43BE64u) {
        ctx->pc = 0x43BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE60u;
        // 0x43be64: 0x8c64f490  lw          $a0, -0xB70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43BE68u;
        goto label_43be68;
    }
    ctx->pc = 0x43BE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x43BE68u);
        ctx->pc = 0x43BE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE60u;
        // 0x43be64: 0x8c64f490  lw          $a0, -0xB70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964368)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BE60u, 0x43BE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x43BE68u;
label_43be68:
    // 0x43be68: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x43be68u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43be6c:
    // 0x43be6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43be6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_43be70:
    // 0x43be70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x43be70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_43be74:
    // 0x43be74: 0x3e00008  jr          $ra
label_43be78:
    if (ctx->pc == 0x43BE78u) {
        ctx->pc = 0x43BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE74u;
        // 0x43be78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x43BE7Cu;
        goto label_43be7c;
    }
    ctx->pc = 0x43BE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BE74u;
        // 0x43be78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BE7Cu;
label_43be7c:
    // 0x43be7c: 0x0  nop
    ctx->pc = 0x43be7cu;
    // NOP
    ctx->pc = 0x43be80u;
}
