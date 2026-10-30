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

// Function: sub_0032D470
// Address: 0x32d470 - 0x32d508
void sub_0032D470_0x32d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D470_0x32d470");
#endif

    switch (ctx->pc) {
        case 0x32d494u: goto label_32d494;
        case 0x32d4acu: goto label_32d4ac;
        case 0x32d4d8u: goto label_32d4d8;
        case 0x32d4e4u: goto label_32d4e4;
        case 0x32d4f0u: goto label_32d4f0;
        default: break;
    }

    ctx->pc = 0x32d470u;

    // 0x32d470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32d470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32d474: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32d474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x32d478: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32d478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32d47c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32d47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d480: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32d480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32d484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32d484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d488: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x32d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32d48c: 0xc0cb41e  jal         func_32D078
    ctx->pc = 0x32D48Cu;
    SET_GPR_U32(ctx, 31, 0x32D494u);
    ctx->pc = 0x32D490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D48Cu;
    // 0x32d490: 0x8e320028  lw          $s2, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D078u, 0x32D48Cu, 0x32D494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D494u;
label_32d494:
    // 0x32d494: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x32d494u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x32d498: 0x8645001e  lh          $a1, 0x1E($s2)
    ctx->pc = 0x32d498u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x32d49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d4a0: 0x24e75cf0  addiu       $a3, $a3, 0x5CF0
    ctx->pc = 0x32d4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23792));
    // 0x32d4a4: 0xc0ca88a  jal         func_32A228
    ctx->pc = 0x32D4A4u;
    SET_GPR_U32(ctx, 31, 0x32D4ACu);
    ctx->pc = 0x32D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D4A4u;
    // 0x32d4a8: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A228u, 0x32D4A4u, 0x32D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D4ACu;
label_32d4ac:
    // 0x32d4ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x32d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32d4b0: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x32d4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
    // 0x32d4b4: 0xa4820020  sh          $v0, 0x20($a0)
    ctx->pc = 0x32d4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x32d4b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x32d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32d4bc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32D4BCu;
    {
        const bool branch_taken_0x32d4bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x32D4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D4BCu;
        // 0x32d4c0: 0xa4700022  sh          $s0, 0x22($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d4bc) {
            ctx->pc = 0x32D4E4u;
            goto label_32d4e4;
        }
    }
    ctx->pc = 0x32D4C4u;
    // 0x32d4c4: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x32d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x32d4c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d4cc: 0x24a55d00  addiu       $a1, $a1, 0x5D00
    ctx->pc = 0x32d4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23808));
    // 0x32d4d0: 0xc0cb44e  jal         func_32D138
    ctx->pc = 0x32D4D0u;
    SET_GPR_U32(ctx, 31, 0x32D4D8u);
    ctx->pc = 0x32D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D4D0u;
    // 0x32d4d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D138u, 0x32D4D0u, 0x32D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D4D8u;
label_32d4d8:
    // 0x32d4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d4dc: 0xc0cb41e  jal         func_32D078
    ctx->pc = 0x32D4DCu;
    SET_GPR_U32(ctx, 31, 0x32D4E4u);
    ctx->pc = 0x32D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D4DCu;
    // 0x32d4e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D078u, 0x32D4DCu, 0x32D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D4E4u;
label_32d4e4:
    // 0x32d4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d4e8: 0xc0c99e2  jal         func_326788
    ctx->pc = 0x32D4E8u;
    SET_GPR_U32(ctx, 31, 0x32D4F0u);
    ctx->pc = 0x32D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D4E8u;
    // 0x32d4ec: 0x8485001e  lh          $a1, 0x1E($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326788u, 0x32D4E8u, 0x32D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D4F0u;
label_32d4f0:
    // 0x32d4f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x32d4f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32d4f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x32d4f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32d4f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x32d4f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d4fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32d4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d500: 0x3e00008  jr          $ra
    ctx->pc = 0x32D500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D500u;
        // 0x32d504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D508u;
}
