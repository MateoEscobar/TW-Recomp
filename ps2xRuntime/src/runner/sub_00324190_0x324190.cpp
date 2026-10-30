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

// Function: sub_00324190
// Address: 0x324190 - 0x324220
void sub_00324190_0x324190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324190_0x324190");
#endif

    switch (ctx->pc) {
        case 0x3241acu: goto label_3241ac;
        case 0x324200u: goto label_324200;
        default: break;
    }

    ctx->pc = 0x324190u;

    // 0x324190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x324194: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x324194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x324198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x324198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x32419c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32419cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3241a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3241a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3241a4: 0xc0cc9a8  jal         func_3326A0
    ctx->pc = 0x3241A4u;
    SET_GPR_U32(ctx, 31, 0x3241ACu);
    ctx->pc = 0x3241A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3241A4u;
    // 0x3241a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3326A0u, 0x3241A4u, 0x3241ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3241ACu;
label_3241ac:
    // 0x3241ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3241acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3241b0: 0x24448000  addiu       $a0, $v0, -0x8000
    ctx->pc = 0x3241b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x3241b4: 0x8c837ff0  lw          $v1, 0x7FF0($a0)
    ctx->pc = 0x3241b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32752)));
    // 0x3241b8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3241B8u;
    {
        const bool branch_taken_0x3241b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3241BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241B8u;
        // 0x3241bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3241b8) {
            ctx->pc = 0x3241D4u;
            goto label_3241d4;
        }
    }
    ctx->pc = 0x3241C0u;
    // 0x3241c0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3241C0u;
    {
        const bool branch_taken_0x3241c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3241C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241C0u;
        // 0x3241c4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3241c0) {
            ctx->pc = 0x3241E0u;
            goto label_3241e0;
        }
    }
    ctx->pc = 0x3241C8u;
    // 0x3241c8: 0x8c827ff8  lw          $v0, 0x7FF8($a0)
    ctx->pc = 0x3241c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32760)));
    // 0x3241cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3241CCu;
    {
        const bool branch_taken_0x3241cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3241D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241CCu;
        // 0x3241d0: 0xa4500004  sh          $s0, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3241cc) {
            ctx->pc = 0x324200u;
            goto label_324200;
        }
    }
    ctx->pc = 0x3241D4u;
label_3241d4:
    // 0x3241d4: 0x8c827ff8  lw          $v0, 0x7FF8($a0)
    ctx->pc = 0x3241d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32760)));
    // 0x3241d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3241D8u;
    {
        const bool branch_taken_0x3241d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3241DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3241D8u;
        // 0x3241dc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3241d8) {
            ctx->pc = 0x324200u;
            goto label_324200;
        }
    }
    ctx->pc = 0x3241E0u;
label_3241e0:
    // 0x3241e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3241e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3241e4: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x3241e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x3241e8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3241e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3241ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3241ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3241f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3241f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3241f4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3241f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3241f8: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x3241F8u;
    SET_GPR_U32(ctx, 31, 0x324200u);
    ctx->pc = 0x3241FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3241F8u;
    // 0x3241fc: 0x24a54810  addiu       $a1, $a1, 0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x3241F8u, 0x324200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324200u;
label_324200:
    // 0x324200: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x324200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x324204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32420c: 0x3e00008  jr          $ra
    ctx->pc = 0x32420Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32420Cu;
        // 0x324210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32420Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324214u;
    // 0x324214: 0x0  nop
    ctx->pc = 0x324214u;
    // NOP
    // 0x324218: 0x0  nop
    ctx->pc = 0x324218u;
    // NOP
    // 0x32421c: 0x0  nop
    ctx->pc = 0x32421cu;
    // NOP
    ctx->pc = 0x324220u;
}
