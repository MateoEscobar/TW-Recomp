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

// Function: sub_002061C0
// Address: 0x2061c0 - 0x206238
void sub_002061C0_0x2061c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002061C0_0x2061c0");
#endif

    switch (ctx->pc) {
        case 0x2061c0u: goto label_2061c0;
        case 0x2061c4u: goto label_2061c4;
        case 0x2061c8u: goto label_2061c8;
        case 0x2061ccu: goto label_2061cc;
        case 0x2061d0u: goto label_2061d0;
        case 0x2061d4u: goto label_2061d4;
        case 0x2061d8u: goto label_2061d8;
        case 0x2061dcu: goto label_2061dc;
        case 0x2061e0u: goto label_2061e0;
        case 0x2061e4u: goto label_2061e4;
        case 0x2061e8u: goto label_2061e8;
        case 0x2061ecu: goto label_2061ec;
        case 0x2061f0u: goto label_2061f0;
        case 0x2061f4u: goto label_2061f4;
        case 0x2061f8u: goto label_2061f8;
        case 0x2061fcu: goto label_2061fc;
        case 0x206200u: goto label_206200;
        case 0x206204u: goto label_206204;
        case 0x206208u: goto label_206208;
        case 0x20620cu: goto label_20620c;
        case 0x206210u: goto label_206210;
        case 0x206214u: goto label_206214;
        case 0x206218u: goto label_206218;
        case 0x20621cu: goto label_20621c;
        case 0x206220u: goto label_206220;
        case 0x206224u: goto label_206224;
        case 0x206228u: goto label_206228;
        case 0x20622cu: goto label_20622c;
        case 0x206230u: goto label_206230;
        case 0x206234u: goto label_206234;
        default: break;
    }

    ctx->pc = 0x2061c0u;

label_2061c0:
    // 0x2061c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2061c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2061c4:
    // 0x2061c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2061c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2061c8:
    // 0x2061c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2061c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2061cc:
    // 0x2061cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2061ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2061d0:
    // 0x2061d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2061d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2061d4:
    // 0x2061d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2061d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2061d8:
    // 0x2061d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2061dc:
    if (ctx->pc == 0x2061DCu) {
        ctx->pc = 0x2061DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061D8u;
        // 0x2061dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061E0u;
        goto label_2061e0;
    }
    ctx->pc = 0x2061D8u;
    {
        const bool branch_taken_0x2061d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061D8u;
        // 0x2061dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061d8) {
            ctx->pc = 0x20621Cu;
            goto label_20621c;
        }
    }
    ctx->pc = 0x2061E0u;
label_2061e0:
    // 0x2061e0: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x2061e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2061e4:
    // 0x2061e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2061e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2061e8:
    // 0x2061e8: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2061e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2061ec:
    // 0x2061ec: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x2061ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2061f0:
    // 0x2061f0: 0x40f809  jalr        $v0
label_2061f4:
    if (ctx->pc == 0x2061F4u) {
        ctx->pc = 0x2061F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061F0u;
        // 0x2061f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2061F8u;
        goto label_2061f8;
    }
    ctx->pc = 0x2061F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2061F8u);
        ctx->pc = 0x2061F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061F0u;
        // 0x2061f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2061F0u, 0x2061F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2061F8u;
label_2061f8:
    // 0x2061f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2061fc:
    if (ctx->pc == 0x2061FCu) {
        ctx->pc = 0x2061FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061F8u;
        // 0x2061fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206200u;
        goto label_206200;
    }
    ctx->pc = 0x2061F8u;
    {
        const bool branch_taken_0x2061f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2061FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2061F8u;
        // 0x2061fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2061f8) {
            ctx->pc = 0x206220u;
            goto label_206220;
        }
    }
    ctx->pc = 0x206200u;
label_206200:
    // 0x206200: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x206200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_206204:
    // 0x206204: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x206204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206208:
    // 0x206208: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x206208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20620c:
    // 0x20620c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_206210:
    // 0x206210: 0x40f809  jalr        $v0
label_206214:
    if (ctx->pc == 0x206214u) {
        ctx->pc = 0x206214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206210u;
        // 0x206214: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206218u;
        goto label_206218;
    }
    ctx->pc = 0x206210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206218u);
        ctx->pc = 0x206214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206210u;
        // 0x206214: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206210u, 0x206218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206218u;
label_206218:
    // 0x206218: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x206218u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20621c:
    // 0x20621c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x20621cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206220:
    // 0x206220: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x206220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_206224:
    // 0x206224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206228:
    // 0x206228: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20622c:
    // 0x20622c: 0x3e00008  jr          $ra
label_206230:
    if (ctx->pc == 0x206230u) {
        ctx->pc = 0x206230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20622Cu;
        // 0x206230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206234u;
        goto label_206234;
    }
    ctx->pc = 0x20622Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20622Cu;
        // 0x206230: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20622Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206234u;
label_206234:
    // 0x206234: 0x0  nop
    ctx->pc = 0x206234u;
    // NOP
    ctx->pc = 0x206238u;
}
