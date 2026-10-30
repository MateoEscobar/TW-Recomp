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

// Function: sub_00227A90
// Address: 0x227a90 - 0x227b30
void sub_00227A90_0x227a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227A90_0x227a90");
#endif

    switch (ctx->pc) {
        case 0x227aacu: goto label_227aac;
        case 0x227ab8u: goto label_227ab8;
        case 0x227b1cu: goto label_227b1c;
        default: break;
    }

    ctx->pc = 0x227a90u;

    // 0x227a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227a94: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x227a94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x227a98: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x227a98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x227a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227aa4: 0xc089988  jal         func_226620
    ctx->pc = 0x227AA4u;
    SET_GPR_U32(ctx, 31, 0x227AACu);
    ctx->pc = 0x227AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AA4u;
    // 0x227aa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x227AA4u, 0x227AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AACu;
label_227aac:
    // 0x227aac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ab0: 0xc094fde  jal         func_253F78
    ctx->pc = 0x227AB0u;
    SET_GPR_U32(ctx, 31, 0x227AB8u);
    ctx->pc = 0x227AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227AB0u;
    // 0x227ab4: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x227AB0u, 0x227AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227AB8u;
label_227ab8:
    // 0x227ab8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x227ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x227abc: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x227abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x227ac0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x227ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x227ac4: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x227ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x227ac8: 0x2466a460  addiu       $a2, $v1, -0x5BA0
    ctx->pc = 0x227ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943840));
    // 0x227acc: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x227accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x227ad0: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x227ad0u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x55A462u));
    // 0x227ad4: 0x24420108  addiu       $v0, $v0, 0x108
    ctx->pc = 0x227ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x227ad8: 0xaca200f8  sw          $v0, 0xF8($a1)
    ctx->pc = 0x227ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 2));
    // 0x227adc: 0x860401be  lh          $a0, 0x1BE($s0)
    ctx->pc = 0x227adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x227ae0: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x227AE0u;
    {
        const bool branch_taken_0x227ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x227ae0) {
            ctx->pc = 0x227AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227AE0u;
            // 0x227ae4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227B20u;
            goto label_227b20;
        }
    }
    ctx->pc = 0x227AE8u;
    // 0x227ae8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x227ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227aec: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227AECu;
    {
        const bool branch_taken_0x227aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x227AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AECu;
        // 0x227af0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227aec) {
            ctx->pc = 0x227B04u;
            goto label_227b04;
        }
    }
    ctx->pc = 0x227AF4u;
    // 0x227af4: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x227af4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x227af8: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x227af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x227afc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227AFCu;
    {
        const bool branch_taken_0x227afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x227B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227AFCu;
        // 0x227b00: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227afc) {
            ctx->pc = 0x227B14u;
            goto label_227b14;
        }
    }
    ctx->pc = 0x227B04u;
label_227b04:
    // 0x227b04: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x227b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x227b08: 0x24424770  addiu       $v0, $v0, 0x4770
    ctx->pc = 0x227b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18288));
    // 0x227b0c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227B0Cu;
    {
        const bool branch_taken_0x227b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227b0c) {
            ctx->pc = 0x227B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227B0Cu;
            // 0x227b10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227B20u;
            goto label_227b20;
        }
    }
    ctx->pc = 0x227B14u;
label_227b14:
    // 0x227b14: 0xc088420  jal         func_221080
    ctx->pc = 0x227B14u;
    SET_GPR_U32(ctx, 31, 0x227B1Cu);
    ctx->pc = 0x227B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227B14u;
    // 0x227b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x227B14u, 0x227B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227B1Cu;
label_227b1c:
    // 0x227b1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227b20:
    // 0x227b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227b24: 0x3e00008  jr          $ra
    ctx->pc = 0x227B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227B24u;
        // 0x227b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227B2Cu;
    // 0x227b2c: 0x0  nop
    ctx->pc = 0x227b2cu;
    // NOP
    ctx->pc = 0x227b30u;
}
