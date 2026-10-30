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

// Function: sub_003F2BC8
// Address: 0x3f2bc8 - 0x3f2c40
void sub_003F2BC8_0x3f2bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2BC8_0x3f2bc8");
#endif

    switch (ctx->pc) {
        case 0x3f2be8u: goto label_3f2be8;
        case 0x3f2c10u: goto label_3f2c10;
        case 0x3f2c2cu: goto label_3f2c2c;
        default: break;
    }

    ctx->pc = 0x3f2bc8u;

    // 0x3f2bc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f2bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f2bcc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f2bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f2bd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f2bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f2bd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f2bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f2bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f2bdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f2bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2be0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F2BE0u;
    SET_GPR_U32(ctx, 31, 0x3F2BE8u);
    ctx->pc = 0x3F2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2BE0u;
    // 0x3f2be4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F2BE0u, 0x3F2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2BE8u;
label_3f2be8:
    // 0x3f2be8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3F2BE8u;
    {
        const bool branch_taken_0x3f2be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f2be8) {
            ctx->pc = 0x3F2BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F2BE8u;
            // 0x3f2bec: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F2C18u;
            goto label_3f2c18;
        }
    }
    ctx->pc = 0x3F2BF0u;
    // 0x3f2bf0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x3f2bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3f2bf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f2bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3f2bf8: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3f2bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x3f2bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2c00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3f2c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3f2c04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2c08: 0xc0fc8fe  jal         func_3F23F8
    ctx->pc = 0x3F2C08u;
    SET_GPR_U32(ctx, 31, 0x3F2C10u);
    ctx->pc = 0x3F2C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2C08u;
    // 0x3f2c0c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F23F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F23F8u, 0x3F2C08u, 0x3F2C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2C10u;
label_3f2c10:
    // 0x3f2c10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3F2C10u;
    {
        const bool branch_taken_0x3f2c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C10u;
        // 0x3f2c14: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f2c10) {
            ctx->pc = 0x3F2C30u;
            goto label_3f2c30;
        }
    }
    ctx->pc = 0x3F2C18u;
label_3f2c18:
    // 0x3f2c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f2c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f2c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f2c20: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3f2c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x3f2c24: 0xc0fc9a6  jal         func_3F2698
    ctx->pc = 0x3F2C24u;
    SET_GPR_U32(ctx, 31, 0x3F2C2Cu);
    ctx->pc = 0x3F2C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F2C24u;
    // 0x3f2c28: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F2698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F2698u, 0x3F2C24u, 0x3F2C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F2C2Cu;
label_3f2c2c:
    // 0x3f2c2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f2c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f2c30:
    // 0x3f2c30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f2c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f2c34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f2c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f2c38: 0x3e00008  jr          $ra
    ctx->pc = 0x3F2C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F2C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F2C38u;
        // 0x3f2c3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F2C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F2C40u;
}
