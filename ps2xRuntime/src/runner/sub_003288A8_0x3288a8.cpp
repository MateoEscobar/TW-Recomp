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

// Function: sub_003288A8
// Address: 0x3288a8 - 0x328938
void sub_003288A8_0x3288a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003288A8_0x3288a8");
#endif

    switch (ctx->pc) {
        case 0x3288e0u: goto label_3288e0;
        case 0x328918u: goto label_328918;
        default: break;
    }

    ctx->pc = 0x3288a8u;

    // 0x3288a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3288a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3288ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3288acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3288b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3288b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3288b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3288b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3288b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3288b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3288bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3288bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3288c0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x3288c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3288c4: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x3288c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3288c8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3288c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3288cc: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3288CCu;
    {
        const bool branch_taken_0x3288cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3288D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288CCu;
        // 0x3288d0: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288cc) {
            ctx->pc = 0x3288FCu;
            goto label_3288fc;
        }
    }
    ctx->pc = 0x3288D4u;
    // 0x3288d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3288d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3288d8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3288d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3288dc: 0x0  nop
    ctx->pc = 0x3288dcu;
    // NOP
label_3288e0:
    // 0x3288e0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x3288e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3288e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3288e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3288e8: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x3288e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3288ec: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x3288ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x3288f0: 0xfca20018  sd          $v0, 0x18($a1)
    ctx->pc = 0x3288f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 2));
    // 0x3288f4: 0x1486fffa  bne         $a0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3288F4u;
    {
        const bool branch_taken_0x3288f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x3288F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3288F4u;
        // 0x3288f8: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3288f4) {
            ctx->pc = 0x3288E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3288e0;
        }
    }
    ctx->pc = 0x3288FCu;
label_3288fc:
    // 0x3288fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3288fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328900: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328904: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328904u;
    {
        const bool branch_taken_0x328904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x328904) {
            ctx->pc = 0x328908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328904u;
            // 0x328908: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32891Cu;
            goto label_32891c;
        }
    }
    ctx->pc = 0x32890Cu;
    // 0x32890c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32890cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328910: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x328910u;
    SET_GPR_U32(ctx, 31, 0x328918u);
    ctx->pc = 0x328914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328910u;
    // 0x328914: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x328910u, 0x328918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328918u;
label_328918:
    // 0x328918: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x328918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_32891c:
    // 0x32891c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32891cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328920: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x328920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x328924: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x328924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x328928: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x328928u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32892c: 0x3e00008  jr          $ra
    ctx->pc = 0x32892Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32892Cu;
        // 0x328930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32892Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328934u;
    // 0x328934: 0x0  nop
    ctx->pc = 0x328934u;
    // NOP
    ctx->pc = 0x328938u;
}
