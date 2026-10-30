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

// Function: sub_002368D0
// Address: 0x2368d0 - 0x236978
void sub_002368D0_0x2368d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002368D0_0x2368d0");
#endif

    switch (ctx->pc) {
        case 0x2368d0u: goto label_2368d0;
        case 0x2368d4u: goto label_2368d4;
        case 0x2368d8u: goto label_2368d8;
        case 0x2368dcu: goto label_2368dc;
        case 0x2368e0u: goto label_2368e0;
        case 0x2368e4u: goto label_2368e4;
        case 0x2368e8u: goto label_2368e8;
        case 0x2368ecu: goto label_2368ec;
        case 0x2368f0u: goto label_2368f0;
        case 0x2368f4u: goto label_2368f4;
        case 0x2368f8u: goto label_2368f8;
        case 0x2368fcu: goto label_2368fc;
        case 0x236900u: goto label_236900;
        case 0x236904u: goto label_236904;
        case 0x236908u: goto label_236908;
        case 0x23690cu: goto label_23690c;
        case 0x236910u: goto label_236910;
        case 0x236914u: goto label_236914;
        case 0x236918u: goto label_236918;
        case 0x23691cu: goto label_23691c;
        case 0x236920u: goto label_236920;
        case 0x236924u: goto label_236924;
        case 0x236928u: goto label_236928;
        case 0x23692cu: goto label_23692c;
        case 0x236930u: goto label_236930;
        case 0x236934u: goto label_236934;
        case 0x236938u: goto label_236938;
        case 0x23693cu: goto label_23693c;
        case 0x236940u: goto label_236940;
        case 0x236944u: goto label_236944;
        case 0x236948u: goto label_236948;
        case 0x23694cu: goto label_23694c;
        case 0x236950u: goto label_236950;
        case 0x236954u: goto label_236954;
        case 0x236958u: goto label_236958;
        case 0x23695cu: goto label_23695c;
        case 0x236960u: goto label_236960;
        case 0x236964u: goto label_236964;
        case 0x236968u: goto label_236968;
        case 0x23696cu: goto label_23696c;
        case 0x236970u: goto label_236970;
        case 0x236974u: goto label_236974;
        default: break;
    }

    ctx->pc = 0x2368d0u;

label_2368d0:
    // 0x2368d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2368d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2368d4:
    // 0x2368d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2368d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2368d8:
    // 0x2368d8: 0x8c420280  lw          $v0, 0x280($v0)
    ctx->pc = 0x2368d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_2368dc:
    // 0x2368dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2368dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2368e0:
    // 0x2368e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2368e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2368e4:
    // 0x2368e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2368e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2368e8:
    // 0x2368e8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2368ec:
    if (ctx->pc == 0x2368ECu) {
        ctx->pc = 0x2368ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368E8u;
        // 0x2368ec: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2368F0u;
        goto label_2368f0;
    }
    ctx->pc = 0x2368E8u;
    {
        const bool branch_taken_0x2368e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2368ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2368E8u;
        // 0x2368ec: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2368e8) {
            ctx->pc = 0x236968u;
            goto label_236968;
        }
    }
    ctx->pc = 0x2368F0u;
label_2368f0:
    // 0x2368f0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2368f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2368f4:
    // 0x2368f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2368f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2368f8:
    // 0x2368f8: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x2368f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_2368fc:
    // 0x2368fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2368fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236900:
    // 0x236900: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x236900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_236904:
    // 0x236904: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x236904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_236908:
    // 0x236908: 0x40f809  jalr        $v0
label_23690c:
    if (ctx->pc == 0x23690Cu) {
        ctx->pc = 0x23690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236908u;
        // 0x23690c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236910u;
        goto label_236910;
    }
    ctx->pc = 0x236908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x236910u);
        ctx->pc = 0x23690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236908u;
        // 0x23690c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236908u, 0x236910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236910u;
label_236910:
    // 0x236910: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x236910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236914:
    // 0x236914: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x236914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_236918:
    // 0x236918: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x236918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23691c:
    // 0x23691c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x23691cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_236920:
    // 0x236920: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x236920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_236924:
    // 0x236924: 0x60f809  jalr        $v1
label_236928:
    if (ctx->pc == 0x236928u) {
        ctx->pc = 0x236928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236924u;
        // 0x236928: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23692Cu;
        goto label_23692c;
    }
    ctx->pc = 0x236924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x23692Cu);
        ctx->pc = 0x236928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236924u;
        // 0x236928: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236924u, 0x23692Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23692Cu;
label_23692c:
    // 0x23692c: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x23692cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_236930:
    // 0x236930: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x236930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_236934:
    // 0x236934: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x236934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_236938:
    // 0x236938: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x236938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_23693c:
    // 0x23693c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x23693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_236940:
    // 0x236940: 0x60f809  jalr        $v1
label_236944:
    if (ctx->pc == 0x236944u) {
        ctx->pc = 0x236944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236940u;
        // 0x236944: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236948u;
        goto label_236948;
    }
    ctx->pc = 0x236940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236948u);
        ctx->pc = 0x236944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236940u;
        // 0x236944: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236940u, 0x236948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236948u;
label_236948:
    // 0x236948: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x236948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_23694c:
    // 0x23694c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23694cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_236950:
    // 0x236950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x236950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236954:
    // 0x236954: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x236954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_236958:
    // 0x236958: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x236958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_23695c:
    // 0x23695c: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x23695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_236960:
    // 0x236960: 0x60f809  jalr        $v1
label_236964:
    if (ctx->pc == 0x236964u) {
        ctx->pc = 0x236964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236960u;
        // 0x236964: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236968u;
        goto label_236968;
    }
    ctx->pc = 0x236960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x236968u);
        ctx->pc = 0x236964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236960u;
        // 0x236964: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236960u, 0x236968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x236968u;
label_236968:
    // 0x236968: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x236968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23696c:
    // 0x23696c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23696cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236970:
    // 0x236970: 0x3e00008  jr          $ra
label_236974:
    if (ctx->pc == 0x236974u) {
        ctx->pc = 0x236974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236970u;
        // 0x236974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236978u;
        goto label_fallthrough_0x236970;
    }
    ctx->pc = 0x236970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236970u;
        // 0x236974: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x236970:
    ctx->pc = 0x236978u;
}
