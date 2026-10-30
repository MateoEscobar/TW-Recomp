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

// Function: sub_00227B98
// Address: 0x227b98 - 0x227c28
void sub_00227B98_0x227b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227B98_0x227b98");
#endif

    switch (ctx->pc) {
        case 0x227bb0u: goto label_227bb0;
        case 0x227c14u: goto label_227c14;
        default: break;
    }

    ctx->pc = 0x227b98u;

    // 0x227b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x227b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x227b9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x227b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x227ba0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x227ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x227ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227ba8: 0xc089988  jal         func_226620
    ctx->pc = 0x227BA8u;
    SET_GPR_U32(ctx, 31, 0x227BB0u);
    ctx->pc = 0x227BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BA8u;
    // 0x227bac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x227BA8u, 0x227BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BB0u;
label_227bb0:
    // 0x227bb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x227bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x227bb4: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x227bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x227bb8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x227bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x227bbc: 0x3c030056  lui         $v1, 0x56
    ctx->pc = 0x227bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)86 << 16));
    // 0x227bc0: 0x2466a468  addiu       $a2, $v1, -0x5B98
    ctx->pc = 0x227bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943848));
    // 0x227bc4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x227bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x227bc8: 0x84c30002  lh          $v1, 0x2($a2)
    ctx->pc = 0x227bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x55A46Au));
    // 0x227bcc: 0x24420108  addiu       $v0, $v0, 0x108
    ctx->pc = 0x227bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 264));
    // 0x227bd0: 0xaca200f4  sw          $v0, 0xF4($a1)
    ctx->pc = 0x227bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 2));
    // 0x227bd4: 0x860401be  lh          $a0, 0x1BE($s0)
    ctx->pc = 0x227bd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x227bd8: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x227BD8u;
    {
        const bool branch_taken_0x227bd8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x227bd8) {
            ctx->pc = 0x227BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227BD8u;
            // 0x227bdc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227C18u;
            goto label_227c18;
        }
    }
    ctx->pc = 0x227BE0u;
    // 0x227be0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x227be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227be4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227BE4u;
    {
        const bool branch_taken_0x227be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x227BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BE4u;
        // 0x227be8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227be4) {
            ctx->pc = 0x227BFCu;
            goto label_227bfc;
        }
    }
    ctx->pc = 0x227BECu;
    // 0x227bec: 0x84c30004  lh          $v1, 0x4($a2)
    ctx->pc = 0x227becu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x227bf0: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x227bf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x227bf4: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227BF4u;
    {
        const bool branch_taken_0x227bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x227BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227BF4u;
        // 0x227bf8: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227bf4) {
            ctx->pc = 0x227C0Cu;
            goto label_227c0c;
        }
    }
    ctx->pc = 0x227BFCu;
label_227bfc:
    // 0x227bfc: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x227bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x227c00: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x227c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
    // 0x227c04: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227C04u;
    {
        const bool branch_taken_0x227c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227c04) {
            ctx->pc = 0x227C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227C04u;
            // 0x227c08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227C18u;
            goto label_227c18;
        }
    }
    ctx->pc = 0x227C0Cu;
label_227c0c:
    // 0x227c0c: 0xc088420  jal         func_221080
    ctx->pc = 0x227C0Cu;
    SET_GPR_U32(ctx, 31, 0x227C14u);
    ctx->pc = 0x227C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C0Cu;
    // 0x227c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221080u, 0x227C0Cu, 0x227C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C14u;
label_227c14:
    // 0x227c14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_227c18:
    // 0x227c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x227C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C1Cu;
        // 0x227c20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227C24u;
    // 0x227c24: 0x0  nop
    ctx->pc = 0x227c24u;
    // NOP
    ctx->pc = 0x227c28u;
}
