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

// Function: sub_001458D8
// Address: 0x1458d8 - 0x145940
void sub_001458D8_0x1458d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001458D8_0x1458d8");
#endif

    switch (ctx->pc) {
        case 0x1458d8u: goto label_1458d8;
        case 0x1458dcu: goto label_1458dc;
        case 0x1458e0u: goto label_1458e0;
        case 0x1458e4u: goto label_1458e4;
        case 0x1458e8u: goto label_1458e8;
        case 0x1458ecu: goto label_1458ec;
        case 0x1458f0u: goto label_1458f0;
        case 0x1458f4u: goto label_1458f4;
        case 0x1458f8u: goto label_1458f8;
        case 0x1458fcu: goto label_1458fc;
        case 0x145900u: goto label_145900;
        case 0x145904u: goto label_145904;
        case 0x145908u: goto label_145908;
        case 0x14590cu: goto label_14590c;
        case 0x145910u: goto label_145910;
        case 0x145914u: goto label_145914;
        case 0x145918u: goto label_145918;
        case 0x14591cu: goto label_14591c;
        case 0x145920u: goto label_145920;
        case 0x145924u: goto label_145924;
        case 0x145928u: goto label_145928;
        case 0x14592cu: goto label_14592c;
        case 0x145930u: goto label_145930;
        case 0x145934u: goto label_145934;
        case 0x145938u: goto label_145938;
        case 0x14593cu: goto label_14593c;
        default: break;
    }

    ctx->pc = 0x1458d8u;

label_1458d8:
    // 0x1458d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1458d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1458dc:
    // 0x1458dc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1458dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1458e0:
    // 0x1458e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1458e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1458e4:
    // 0x1458e4: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1458e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1458e8:
    // 0x1458e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1458e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1458ec:
    // 0x1458ec: 0xae04b728  sw          $a0, -0x48D8($s0)
    ctx->pc = 0x1458ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948648), GPR_U32(ctx, 4));
label_1458f0:
    // 0x1458f0: 0x2602b728  addiu       $v0, $s0, -0x48D8
    ctx->pc = 0x1458f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948648));
label_1458f4:
    // 0x1458f4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1458f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1458f8:
    // 0x1458f8: 0x8cc5b8b8  lw          $a1, -0x4748($a2)
    ctx->pc = 0x1458f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294949048)));
label_1458fc:
    // 0x1458fc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1458fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_145900:
    // 0x145900: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x145900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_145904:
    // 0x145904: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x145904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_145908:
    // 0x145908: 0x40f809  jalr        $v0
label_14590c:
    if (ctx->pc == 0x14590Cu) {
        ctx->pc = 0x14590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145908u;
        // 0x14590c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145910u;
        goto label_145910;
    }
    ctx->pc = 0x145908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145910u);
        ctx->pc = 0x14590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145908u;
        // 0x14590c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145908u, 0x145910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145910u;
label_145910:
    // 0x145910: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x145910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_145914:
    // 0x145914: 0xc051632  jal         func_1458C8
label_145918:
    if (ctx->pc == 0x145918u) {
        ctx->pc = 0x145918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145914u;
        // 0x145918: 0xac62c7d8  sw          $v0, -0x3828($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14591Cu;
        goto label_14591c;
    }
    ctx->pc = 0x145914u;
    SET_GPR_U32(ctx, 31, 0x14591Cu);
    ctx->pc = 0x145918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145914u;
    // 0x145918: 0xac62c7d8  sw          $v0, -0x3828($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952920), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1458C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1458C8u, 0x145914u, 0x14591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14591Cu;
label_14591c:
    // 0x14591c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_145920:
    if (ctx->pc == 0x145920u) {
        ctx->pc = 0x145920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14591Cu;
        // 0x145920: 0x8e02b728  lw          $v0, -0x48D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145924u;
        goto label_145924;
    }
    ctx->pc = 0x14591Cu;
    {
        const bool branch_taken_0x14591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14591Cu;
        // 0x145920: 0x8e02b728  lw          $v0, -0x48D8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14591c) {
            ctx->pc = 0x14592Cu;
            goto label_14592c;
        }
    }
    ctx->pc = 0x145924u;
label_145924:
    // 0x145924: 0x40f809  jalr        $v0
label_145928:
    if (ctx->pc == 0x145928u) {
        ctx->pc = 0x14592Cu;
        goto label_14592c;
    }
    ctx->pc = 0x145924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14592Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145924u, 0x14592Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14592Cu;
label_14592c:
    // 0x14592c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14592cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_145930:
    // 0x145930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_145934:
    // 0x145934: 0x3e00008  jr          $ra
label_145938:
    if (ctx->pc == 0x145938u) {
        ctx->pc = 0x145938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145934u;
        // 0x145938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14593Cu;
        goto label_14593c;
    }
    ctx->pc = 0x145934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145934u;
        // 0x145938: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14593Cu;
label_14593c:
    // 0x14593c: 0x0  nop
    ctx->pc = 0x14593cu;
    // NOP
    ctx->pc = 0x145940u;
}
