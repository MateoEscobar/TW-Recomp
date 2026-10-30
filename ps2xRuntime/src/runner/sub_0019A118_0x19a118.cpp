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

// Function: sub_0019A118
// Address: 0x19a118 - 0x19a1b8
void sub_0019A118_0x19a118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A118_0x19a118");
#endif

    switch (ctx->pc) {
        case 0x19a148u: goto label_19a148;
        case 0x19a16cu: goto label_19a16c;
        case 0x19a17cu: goto label_19a17c;
        default: break;
    }

    ctx->pc = 0x19a118u;

    // 0x19a118: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19a118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19a11c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x19a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x19a120: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19a120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19a124: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x19a124u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x19a128: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x19a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x19a12c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a12cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a130: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19a130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19a134: 0x249500f4  addiu       $s5, $a0, 0xF4
    ctx->pc = 0x19a134u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 244));
    // 0x19a138: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x19a13c: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x19a13cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x19a140: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19a140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19a144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19a148:
    // 0x19a148: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x19a148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19a14c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x19a14cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x19a150: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x19a150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x19a154: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x19a154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a158: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a15c: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x19A15Cu;
    {
        const bool branch_taken_0x19a15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x19A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A15Cu;
        // 0x19a160: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a15c) {
            ctx->pc = 0x19A17Cu;
            goto label_19a17c;
        }
    }
    ctx->pc = 0x19A164u;
    // 0x19a164: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x19A164u;
    SET_GPR_U32(ctx, 31, 0x19A16Cu);
    ctx->pc = 0x19A168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A164u;
    // 0x19a168: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x19A164u, 0x19A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A16Cu;
label_19a16c:
    // 0x19a16c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A16Cu;
    {
        const bool branch_taken_0x19a16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A16Cu;
        // 0x19a170: 0x8e64cd4c  lw          $a0, -0x32B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a16c) {
            ctx->pc = 0x19A17Cu;
            goto label_19a17c;
        }
    }
    ctx->pc = 0x19A174u;
    // 0x19a174: 0xc062be2  jal         func_18AF88
    ctx->pc = 0x19A174u;
    SET_GPR_U32(ctx, 31, 0x19A17Cu);
    ctx->pc = 0x19A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A174u;
    // 0x19a178: 0x96050000  lhu         $a1, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x19A174u, 0x19A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A17Cu;
label_19a17c:
    // 0x19a17c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x19a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19a180: 0x2b22021  addu        $a0, $s5, $s2
    ctx->pc = 0x19a180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x19a184: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19a184u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a188: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x19a188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a18c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x19A18Cu;
    {
        const bool branch_taken_0x19a18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A18Cu;
        // 0x19a190: 0xac940000  sw          $s4, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a18c) {
            ctx->pc = 0x19A148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19a148;
        }
    }
    ctx->pc = 0x19A194u;
    // 0x19a194: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19a194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a198: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19a198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a19c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19a19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a1a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19a1a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a1a4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19a1a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a1a8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x19a1a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a1ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a1b0: 0x3e00008  jr          $ra
    ctx->pc = 0x19A1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A1B0u;
        // 0x19a1b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A1B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A1B8u;
}
