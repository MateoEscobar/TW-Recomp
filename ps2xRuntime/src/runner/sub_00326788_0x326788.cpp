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

// Function: sub_00326788
// Address: 0x326788 - 0x3267f8
void sub_00326788_0x326788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326788_0x326788");
#endif

    switch (ctx->pc) {
        case 0x3267d8u: goto label_3267d8;
        default: break;
    }

    ctx->pc = 0x326788u;

    // 0x326788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32678c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x32678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x326790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326798: 0x9602001c  lhu         $v0, 0x1C($s0)
    ctx->pc = 0x326798u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x32679c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x32679cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3267a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3267a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3267a4: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x3267a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x3267a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3267a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3267ac: 0x84830024  lh          $v1, 0x24($a0)
    ctx->pc = 0x3267acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3267b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3267b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3267b4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3267b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3267b8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3267B8u;
    {
        const bool branch_taken_0x3267b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3267BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267B8u;
        // 0x3267bc: 0x284200fb  slti        $v0, $v0, 0xFB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3267b8) {
            ctx->pc = 0x3267E4u;
            goto label_3267e4;
        }
    }
    ctx->pc = 0x3267C0u;
    // 0x3267c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3267C0u;
    {
        const bool branch_taken_0x3267c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3267c0) {
            ctx->pc = 0x3267C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3267C0u;
            // 0x3267c4: 0x9603001c  lhu         $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3267DCu;
            goto label_3267dc;
        }
    }
    ctx->pc = 0x3267C8u;
    // 0x3267c8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3267c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3267cc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3267ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3267d0: 0xc0c9968  jal         func_3265A0
    ctx->pc = 0x3267D0u;
    SET_GPR_U32(ctx, 31, 0x3267D8u);
    ctx->pc = 0x3267D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3267D0u;
    // 0x3267d4: 0x24a54ea0  addiu       $a1, $a1, 0x4EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3265A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3265A0u, 0x3267D0u, 0x3267D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3267D8u;
label_3267d8:
    // 0x3267d8: 0x9603001c  lhu         $v1, 0x1C($s0)
    ctx->pc = 0x3267d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 28)));
label_3267dc:
    // 0x3267dc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3267dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3267e0: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x3267e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
label_3267e4:
    // 0x3267e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3267e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3267e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3267e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3267ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3267ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3267F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3267ECu;
        // 0x3267f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3267ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3267F4u;
    // 0x3267f4: 0x0  nop
    ctx->pc = 0x3267f4u;
    // NOP
    ctx->pc = 0x3267f8u;
}
