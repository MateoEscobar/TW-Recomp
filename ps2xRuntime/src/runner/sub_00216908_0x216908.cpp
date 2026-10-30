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

// Function: sub_00216908
// Address: 0x216908 - 0x2169a8
void sub_00216908_0x216908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216908_0x216908");
#endif

    switch (ctx->pc) {
        case 0x216908u: goto label_216908;
        case 0x21690cu: goto label_21690c;
        case 0x216910u: goto label_216910;
        case 0x216914u: goto label_216914;
        case 0x216918u: goto label_216918;
        case 0x21691cu: goto label_21691c;
        case 0x216920u: goto label_216920;
        case 0x216924u: goto label_216924;
        case 0x216928u: goto label_216928;
        case 0x21692cu: goto label_21692c;
        case 0x216930u: goto label_216930;
        case 0x216934u: goto label_216934;
        case 0x216938u: goto label_216938;
        case 0x21693cu: goto label_21693c;
        case 0x216940u: goto label_216940;
        case 0x216944u: goto label_216944;
        case 0x216948u: goto label_216948;
        case 0x21694cu: goto label_21694c;
        case 0x216950u: goto label_216950;
        case 0x216954u: goto label_216954;
        case 0x216958u: goto label_216958;
        case 0x21695cu: goto label_21695c;
        case 0x216960u: goto label_216960;
        case 0x216964u: goto label_216964;
        case 0x216968u: goto label_216968;
        case 0x21696cu: goto label_21696c;
        case 0x216970u: goto label_216970;
        case 0x216974u: goto label_216974;
        case 0x216978u: goto label_216978;
        case 0x21697cu: goto label_21697c;
        case 0x216980u: goto label_216980;
        case 0x216984u: goto label_216984;
        case 0x216988u: goto label_216988;
        case 0x21698cu: goto label_21698c;
        case 0x216990u: goto label_216990;
        case 0x216994u: goto label_216994;
        case 0x216998u: goto label_216998;
        case 0x21699cu: goto label_21699c;
        case 0x2169a0u: goto label_2169a0;
        case 0x2169a4u: goto label_2169a4;
        default: break;
    }

    ctx->pc = 0x216908u;

label_216908:
    // 0x216908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21690c:
    // 0x21690c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_216910:
    // 0x216910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x216910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_216914:
    // 0x216914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_216918:
    // 0x216918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21691c:
    // 0x21691c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x21691cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_216920:
    // 0x216920: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_216924:
    if (ctx->pc == 0x216924u) {
        ctx->pc = 0x216924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216920u;
        // 0x216924: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216928u;
        goto label_216928;
    }
    ctx->pc = 0x216920u;
    {
        const bool branch_taken_0x216920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216920u;
        // 0x216924: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216920) {
            ctx->pc = 0x216990u;
            goto label_216990;
        }
    }
    ctx->pc = 0x216928u;
label_216928:
    // 0x216928: 0xc06a3aa  jal         func_1A8EA8
label_21692c:
    if (ctx->pc == 0x21692Cu) {
        ctx->pc = 0x21692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216928u;
        // 0x21692c: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216930u;
        goto label_216930;
    }
    ctx->pc = 0x216928u;
    SET_GPR_U32(ctx, 31, 0x216930u);
    ctx->pc = 0x21692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216928u;
    // 0x21692c: 0x8e050064  lw          $a1, 0x64($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x216928u, 0x216930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216930u;
label_216930:
    // 0x216930: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_216934:
    if (ctx->pc == 0x216934u) {
        ctx->pc = 0x216934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216930u;
        // 0x216934: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216938u;
        goto label_216938;
    }
    ctx->pc = 0x216930u;
    {
        const bool branch_taken_0x216930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216930u;
        // 0x216934: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216930) {
            ctx->pc = 0x216994u;
            goto label_216994;
        }
    }
    ctx->pc = 0x216938u;
label_216938:
    // 0x216938: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x216938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_21693c:
    // 0x21693c: 0xc06a3aa  jal         func_1A8EA8
label_216940:
    if (ctx->pc == 0x216940u) {
        ctx->pc = 0x216940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21693Cu;
        // 0x216940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216944u;
        goto label_216944;
    }
    ctx->pc = 0x21693Cu;
    SET_GPR_U32(ctx, 31, 0x216944u);
    ctx->pc = 0x216940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21693Cu;
    // 0x216940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x21693Cu, 0x216944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216944u;
label_216944:
    // 0x216944: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_216948:
    if (ctx->pc == 0x216948u) {
        ctx->pc = 0x216948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216944u;
        // 0x216948: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21694Cu;
        goto label_21694c;
    }
    ctx->pc = 0x216944u;
    {
        const bool branch_taken_0x216944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216944u;
        // 0x216948: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216944) {
            ctx->pc = 0x216994u;
            goto label_216994;
        }
    }
    ctx->pc = 0x21694Cu;
label_21694c:
    // 0x21694c: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x21694cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_216950:
    // 0x216950: 0xc06a3aa  jal         func_1A8EA8
label_216954:
    if (ctx->pc == 0x216954u) {
        ctx->pc = 0x216954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216950u;
        // 0x216954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216958u;
        goto label_216958;
    }
    ctx->pc = 0x216950u;
    SET_GPR_U32(ctx, 31, 0x216958u);
    ctx->pc = 0x216954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216950u;
    // 0x216954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x216950u, 0x216958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216958u;
label_216958:
    // 0x216958: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_21695c:
    if (ctx->pc == 0x21695Cu) {
        ctx->pc = 0x21695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216958u;
        // 0x21695c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216960u;
        goto label_216960;
    }
    ctx->pc = 0x216958u;
    {
        const bool branch_taken_0x216958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216958u;
        // 0x21695c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216958) {
            ctx->pc = 0x216994u;
            goto label_216994;
        }
    }
    ctx->pc = 0x216960u;
label_216960:
    // 0x216960: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x216960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_216964:
    // 0x216964: 0xc06a3aa  jal         func_1A8EA8
label_216968:
    if (ctx->pc == 0x216968u) {
        ctx->pc = 0x216968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216964u;
        // 0x216968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21696Cu;
        goto label_21696c;
    }
    ctx->pc = 0x216964u;
    SET_GPR_U32(ctx, 31, 0x21696Cu);
    ctx->pc = 0x216968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216964u;
    // 0x216968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x216964u, 0x21696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21696Cu;
label_21696c:
    // 0x21696c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_216970:
    if (ctx->pc == 0x216970u) {
        ctx->pc = 0x216970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21696Cu;
        // 0x216970: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216974u;
        goto label_216974;
    }
    ctx->pc = 0x21696Cu;
    {
        const bool branch_taken_0x21696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21696Cu;
        // 0x216970: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21696c) {
            ctx->pc = 0x216994u;
            goto label_216994;
        }
    }
    ctx->pc = 0x216974u;
label_216974:
    // 0x216974: 0x8e050088  lw          $a1, 0x88($s0)
    ctx->pc = 0x216974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_216978:
    // 0x216978: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x216978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_21697c:
    // 0x21697c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x21697cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_216980:
    // 0x216980: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x216980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_216984:
    // 0x216984: 0x40f809  jalr        $v0
label_216988:
    if (ctx->pc == 0x216988u) {
        ctx->pc = 0x216988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216984u;
        // 0x216988: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21698Cu;
        goto label_21698c;
    }
    ctx->pc = 0x216984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21698Cu);
        ctx->pc = 0x216988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216984u;
        // 0x216988: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216984u, 0x21698Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21698Cu;
label_21698c:
    // 0x21698c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x21698cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_216990:
    // 0x216990: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x216990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_216994:
    // 0x216994: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x216994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_216998:
    // 0x216998: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x216998u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21699c:
    // 0x21699c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21699cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2169a0:
    // 0x2169a0: 0x3e00008  jr          $ra
label_2169a4:
    if (ctx->pc == 0x2169A4u) {
        ctx->pc = 0x2169A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169A0u;
        // 0x2169a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2169A8u;
        goto label_fallthrough_0x2169a0;
    }
    ctx->pc = 0x2169A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2169A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2169A0u;
        // 0x2169a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2169A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2169a0:
    ctx->pc = 0x2169A8u;
}
