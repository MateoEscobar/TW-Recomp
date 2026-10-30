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

// Function: sub_001F78E8
// Address: 0x1f78e8 - 0x1f7b68
void sub_001F78E8_0x1f78e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F78E8_0x1f78e8");
#endif

    switch (ctx->pc) {
        case 0x1f78e8u: goto label_1f78e8;
        case 0x1f78ecu: goto label_1f78ec;
        case 0x1f78f0u: goto label_1f78f0;
        case 0x1f78f4u: goto label_1f78f4;
        case 0x1f78f8u: goto label_1f78f8;
        case 0x1f78fcu: goto label_1f78fc;
        case 0x1f7900u: goto label_1f7900;
        case 0x1f7904u: goto label_1f7904;
        case 0x1f7908u: goto label_1f7908;
        case 0x1f790cu: goto label_1f790c;
        case 0x1f7910u: goto label_1f7910;
        case 0x1f7914u: goto label_1f7914;
        case 0x1f7918u: goto label_1f7918;
        case 0x1f791cu: goto label_1f791c;
        case 0x1f7920u: goto label_1f7920;
        case 0x1f7924u: goto label_1f7924;
        case 0x1f7928u: goto label_1f7928;
        case 0x1f792cu: goto label_1f792c;
        case 0x1f7930u: goto label_1f7930;
        case 0x1f7934u: goto label_1f7934;
        case 0x1f7938u: goto label_1f7938;
        case 0x1f793cu: goto label_1f793c;
        case 0x1f7940u: goto label_1f7940;
        case 0x1f7944u: goto label_1f7944;
        case 0x1f7948u: goto label_1f7948;
        case 0x1f794cu: goto label_1f794c;
        case 0x1f7950u: goto label_1f7950;
        case 0x1f7954u: goto label_1f7954;
        case 0x1f7958u: goto label_1f7958;
        case 0x1f795cu: goto label_1f795c;
        case 0x1f7960u: goto label_1f7960;
        case 0x1f7964u: goto label_1f7964;
        case 0x1f7968u: goto label_1f7968;
        case 0x1f796cu: goto label_1f796c;
        case 0x1f7970u: goto label_1f7970;
        case 0x1f7974u: goto label_1f7974;
        case 0x1f7978u: goto label_1f7978;
        case 0x1f797cu: goto label_1f797c;
        case 0x1f7980u: goto label_1f7980;
        case 0x1f7984u: goto label_1f7984;
        case 0x1f7988u: goto label_1f7988;
        case 0x1f798cu: goto label_1f798c;
        case 0x1f7990u: goto label_1f7990;
        case 0x1f7994u: goto label_1f7994;
        case 0x1f7998u: goto label_1f7998;
        case 0x1f799cu: goto label_1f799c;
        case 0x1f79a0u: goto label_1f79a0;
        case 0x1f79a4u: goto label_1f79a4;
        case 0x1f79a8u: goto label_1f79a8;
        case 0x1f79acu: goto label_1f79ac;
        case 0x1f79b0u: goto label_1f79b0;
        case 0x1f79b4u: goto label_1f79b4;
        case 0x1f79b8u: goto label_1f79b8;
        case 0x1f79bcu: goto label_1f79bc;
        case 0x1f79c0u: goto label_1f79c0;
        case 0x1f79c4u: goto label_1f79c4;
        case 0x1f79c8u: goto label_1f79c8;
        case 0x1f79ccu: goto label_1f79cc;
        case 0x1f79d0u: goto label_1f79d0;
        case 0x1f79d4u: goto label_1f79d4;
        case 0x1f79d8u: goto label_1f79d8;
        case 0x1f79dcu: goto label_1f79dc;
        case 0x1f79e0u: goto label_1f79e0;
        case 0x1f79e4u: goto label_1f79e4;
        case 0x1f79e8u: goto label_1f79e8;
        case 0x1f79ecu: goto label_1f79ec;
        case 0x1f79f0u: goto label_1f79f0;
        case 0x1f79f4u: goto label_1f79f4;
        case 0x1f79f8u: goto label_1f79f8;
        case 0x1f79fcu: goto label_1f79fc;
        case 0x1f7a00u: goto label_1f7a00;
        case 0x1f7a04u: goto label_1f7a04;
        case 0x1f7a08u: goto label_1f7a08;
        case 0x1f7a0cu: goto label_1f7a0c;
        case 0x1f7a10u: goto label_1f7a10;
        case 0x1f7a14u: goto label_1f7a14;
        case 0x1f7a18u: goto label_1f7a18;
        case 0x1f7a1cu: goto label_1f7a1c;
        case 0x1f7a20u: goto label_1f7a20;
        case 0x1f7a24u: goto label_1f7a24;
        case 0x1f7a28u: goto label_1f7a28;
        case 0x1f7a2cu: goto label_1f7a2c;
        case 0x1f7a30u: goto label_1f7a30;
        case 0x1f7a34u: goto label_1f7a34;
        case 0x1f7a38u: goto label_1f7a38;
        case 0x1f7a3cu: goto label_1f7a3c;
        case 0x1f7a40u: goto label_1f7a40;
        case 0x1f7a44u: goto label_1f7a44;
        case 0x1f7a48u: goto label_1f7a48;
        case 0x1f7a4cu: goto label_1f7a4c;
        case 0x1f7a50u: goto label_1f7a50;
        case 0x1f7a54u: goto label_1f7a54;
        case 0x1f7a58u: goto label_1f7a58;
        case 0x1f7a5cu: goto label_1f7a5c;
        case 0x1f7a60u: goto label_1f7a60;
        case 0x1f7a64u: goto label_1f7a64;
        case 0x1f7a68u: goto label_1f7a68;
        case 0x1f7a6cu: goto label_1f7a6c;
        case 0x1f7a70u: goto label_1f7a70;
        case 0x1f7a74u: goto label_1f7a74;
        case 0x1f7a78u: goto label_1f7a78;
        case 0x1f7a7cu: goto label_1f7a7c;
        case 0x1f7a80u: goto label_1f7a80;
        case 0x1f7a84u: goto label_1f7a84;
        case 0x1f7a88u: goto label_1f7a88;
        case 0x1f7a8cu: goto label_1f7a8c;
        case 0x1f7a90u: goto label_1f7a90;
        case 0x1f7a94u: goto label_1f7a94;
        case 0x1f7a98u: goto label_1f7a98;
        case 0x1f7a9cu: goto label_1f7a9c;
        case 0x1f7aa0u: goto label_1f7aa0;
        case 0x1f7aa4u: goto label_1f7aa4;
        case 0x1f7aa8u: goto label_1f7aa8;
        case 0x1f7aacu: goto label_1f7aac;
        case 0x1f7ab0u: goto label_1f7ab0;
        case 0x1f7ab4u: goto label_1f7ab4;
        case 0x1f7ab8u: goto label_1f7ab8;
        case 0x1f7abcu: goto label_1f7abc;
        case 0x1f7ac0u: goto label_1f7ac0;
        case 0x1f7ac4u: goto label_1f7ac4;
        case 0x1f7ac8u: goto label_1f7ac8;
        case 0x1f7accu: goto label_1f7acc;
        case 0x1f7ad0u: goto label_1f7ad0;
        case 0x1f7ad4u: goto label_1f7ad4;
        case 0x1f7ad8u: goto label_1f7ad8;
        case 0x1f7adcu: goto label_1f7adc;
        case 0x1f7ae0u: goto label_1f7ae0;
        case 0x1f7ae4u: goto label_1f7ae4;
        case 0x1f7ae8u: goto label_1f7ae8;
        case 0x1f7aecu: goto label_1f7aec;
        case 0x1f7af0u: goto label_1f7af0;
        case 0x1f7af4u: goto label_1f7af4;
        case 0x1f7af8u: goto label_1f7af8;
        case 0x1f7afcu: goto label_1f7afc;
        case 0x1f7b00u: goto label_1f7b00;
        case 0x1f7b04u: goto label_1f7b04;
        case 0x1f7b08u: goto label_1f7b08;
        case 0x1f7b0cu: goto label_1f7b0c;
        case 0x1f7b10u: goto label_1f7b10;
        case 0x1f7b14u: goto label_1f7b14;
        case 0x1f7b18u: goto label_1f7b18;
        case 0x1f7b1cu: goto label_1f7b1c;
        case 0x1f7b20u: goto label_1f7b20;
        case 0x1f7b24u: goto label_1f7b24;
        case 0x1f7b28u: goto label_1f7b28;
        case 0x1f7b2cu: goto label_1f7b2c;
        case 0x1f7b30u: goto label_1f7b30;
        case 0x1f7b34u: goto label_1f7b34;
        case 0x1f7b38u: goto label_1f7b38;
        case 0x1f7b3cu: goto label_1f7b3c;
        case 0x1f7b40u: goto label_1f7b40;
        case 0x1f7b44u: goto label_1f7b44;
        case 0x1f7b48u: goto label_1f7b48;
        case 0x1f7b4cu: goto label_1f7b4c;
        case 0x1f7b50u: goto label_1f7b50;
        case 0x1f7b54u: goto label_1f7b54;
        case 0x1f7b58u: goto label_1f7b58;
        case 0x1f7b5cu: goto label_1f7b5c;
        case 0x1f7b60u: goto label_1f7b60;
        case 0x1f7b64u: goto label_1f7b64;
        default: break;
    }

    ctx->pc = 0x1f78e8u;

label_1f78e8:
    // 0x1f78e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f78e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1f78ec:
    // 0x1f78ec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f78ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1f78f0:
    // 0x1f78f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f78f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1f78f4:
    // 0x1f78f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f78f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f78f8:
    // 0x1f78f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f78fc:
    // 0x1f78fc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f78fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1f7900:
    // 0x1f7900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f7904:
    // 0x1f7904: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1f7904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f7908:
    // 0x1f7908: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f7908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f790c:
    // 0x1f790c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f7910:
    // 0x1f7910: 0x40f809  jalr        $v0
label_1f7914:
    if (ctx->pc == 0x1F7914u) {
        ctx->pc = 0x1F7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7910u;
        // 0x1f7914: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7918u;
        goto label_1f7918;
    }
    ctx->pc = 0x1F7910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7918u);
        ctx->pc = 0x1F7914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7910u;
        // 0x1f7914: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7910u, 0x1F7918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7918u;
label_1f7918:
    // 0x1f7918: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_1f791c:
    if (ctx->pc == 0x1F791Cu) {
        ctx->pc = 0x1F791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7918u;
        // 0x1f791c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7920u;
        goto label_1f7920;
    }
    ctx->pc = 0x1F7918u;
    {
        const bool branch_taken_0x1f7918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7918u;
        // 0x1f791c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7918) {
            ctx->pc = 0x1F7B50u;
            goto label_1f7b50;
        }
    }
    ctx->pc = 0x1F7920u;
label_1f7920:
    // 0x1f7920: 0xc07f88a  jal         func_1FE228
label_1f7924:
    if (ctx->pc == 0x1F7924u) {
        ctx->pc = 0x1F7928u;
        goto label_1f7928;
    }
    ctx->pc = 0x1F7920u;
    SET_GPR_U32(ctx, 31, 0x1F7928u);
    ctx->pc = 0x1FE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE228u, 0x1F7920u, 0x1F7928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7928u;
label_1f7928:
    // 0x1f7928: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
label_1f792c:
    if (ctx->pc == 0x1F792Cu) {
        ctx->pc = 0x1F792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7928u;
        // 0x1f792c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7930u;
        goto label_1f7930;
    }
    ctx->pc = 0x1F7928u;
    {
        const bool branch_taken_0x1f7928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7928u;
        // 0x1f792c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7928) {
            ctx->pc = 0x1F7B50u;
            goto label_1f7b50;
        }
    }
    ctx->pc = 0x1F7930u;
label_1f7930:
    // 0x1f7930: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1f7934:
    // 0x1f7934: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f7934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7938:
    // 0x1f7938: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f7938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f793c:
    // 0x1f793c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f7940:
    // 0x1f7940: 0x40f809  jalr        $v0
label_1f7944:
    if (ctx->pc == 0x1F7944u) {
        ctx->pc = 0x1F7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7940u;
        // 0x1f7944: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7948u;
        goto label_1f7948;
    }
    ctx->pc = 0x1F7940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7948u);
        ctx->pc = 0x1F7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7940u;
        // 0x1f7944: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7940u, 0x1F7948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7948u;
label_1f7948:
    // 0x1f7948: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1f794c:
    if (ctx->pc == 0x1F794Cu) {
        ctx->pc = 0x1F794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7948u;
        // 0x1f794c: 0x8e2500b4  lw          $a1, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7950u;
        goto label_1f7950;
    }
    ctx->pc = 0x1F7948u;
    {
        const bool branch_taken_0x1f7948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7948) {
            ctx->pc = 0x1F794Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7948u;
            // 0x1f794c: 0x8e2500b4  lw          $a1, 0xB4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F796Cu;
            goto label_1f796c;
        }
    }
    ctx->pc = 0x1F7950u;
label_1f7950:
    // 0x1f7950: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x1f7950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1f7954:
    // 0x1f7954: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7958:
    // 0x1f7958: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f795c:
    // 0x1f795c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f795cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f7960:
    // 0x1f7960: 0x60f809  jalr        $v1
label_1f7964:
    if (ctx->pc == 0x1F7964u) {
        ctx->pc = 0x1F7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7960u;
        // 0x1f7964: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7968u;
        goto label_1f7968;
    }
    ctx->pc = 0x1F7960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7968u);
        ctx->pc = 0x1F7964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7960u;
        // 0x1f7964: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7960u, 0x1F7968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7968u;
label_1f7968:
    // 0x1f7968: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x1f7968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f796c:
    // 0x1f796c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7970:
    // 0x1f7970: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f7970u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f7974:
    // 0x1f7974: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f7978:
    // 0x1f7978: 0x40f809  jalr        $v0
label_1f797c:
    if (ctx->pc == 0x1F797Cu) {
        ctx->pc = 0x1F797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7978u;
        // 0x1f797c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7980u;
        goto label_1f7980;
    }
    ctx->pc = 0x1F7978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7980u);
        ctx->pc = 0x1F797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7978u;
        // 0x1f797c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7978u, 0x1F7980u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7980u;
label_1f7980:
    // 0x1f7980: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1f7984:
    if (ctx->pc == 0x1F7984u) {
        ctx->pc = 0x1F7988u;
        goto label_1f7988;
    }
    ctx->pc = 0x1F7980u;
    {
        const bool branch_taken_0x1f7980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7980) {
            ctx->pc = 0x1F79B8u;
            goto label_1f79b8;
        }
    }
    ctx->pc = 0x1F7988u;
label_1f7988:
    // 0x1f7988: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x1f7988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f798c:
    // 0x1f798c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f798cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7990:
    // 0x1f7990: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7990u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f7994:
    // 0x1f7994: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f7994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f7998:
    // 0x1f7998: 0x60f809  jalr        $v1
label_1f799c:
    if (ctx->pc == 0x1F799Cu) {
        ctx->pc = 0x1F799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7998u;
        // 0x1f799c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F79A0u;
        goto label_1f79a0;
    }
    ctx->pc = 0x1F7998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F79A0u);
        ctx->pc = 0x1F799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7998u;
        // 0x1f799c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7998u, 0x1F79A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F79A0u;
label_1f79a0:
    // 0x1f79a0: 0x8e2500b4  lw          $a1, 0xB4($s1)
    ctx->pc = 0x1f79a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_1f79a4:
    // 0x1f79a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f79a8:
    // 0x1f79a8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1f79a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1f79ac:
    // 0x1f79ac: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1f79acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1f79b0:
    // 0x1f79b0: 0x60f809  jalr        $v1
label_1f79b4:
    if (ctx->pc == 0x1F79B4u) {
        ctx->pc = 0x1F79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79B0u;
        // 0x1f79b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F79B8u;
        goto label_1f79b8;
    }
    ctx->pc = 0x1F79B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F79B8u);
        ctx->pc = 0x1F79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79B0u;
        // 0x1f79b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F79B0u, 0x1F79B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F79B8u;
label_1f79b8:
    // 0x1f79b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1f79bc:
    // 0x1f79bc: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x1f79bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1f79c0:
    // 0x1f79c0: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1f79c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1f79c4:
    // 0x1f79c4: 0x14620062  bne         $v1, $v0, . + 4 + (0x62 << 2)
label_1f79c8:
    if (ctx->pc == 0x1F79C8u) {
        ctx->pc = 0x1F79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79C4u;
        // 0x1f79c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F79CCu;
        goto label_1f79cc;
    }
    ctx->pc = 0x1F79C4u;
    {
        const bool branch_taken_0x1f79c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79C4u;
        // 0x1f79c8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79c4) {
            ctx->pc = 0x1F7B50u;
            goto label_1f7b50;
        }
    }
    ctx->pc = 0x1F79CCu;
label_1f79cc:
    // 0x1f79cc: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x1f79ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_1f79d0:
    // 0x1f79d0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f79d4:
    // 0x1f79d4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f79d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f79d8:
    // 0x1f79d8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f79dc:
    // 0x1f79dc: 0x60f809  jalr        $v1
label_1f79e0:
    if (ctx->pc == 0x1F79E0u) {
        ctx->pc = 0x1F79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79DCu;
        // 0x1f79e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F79E4u;
        goto label_1f79e4;
    }
    ctx->pc = 0x1F79DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F79E4u);
        ctx->pc = 0x1F79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79DCu;
        // 0x1f79e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F79DCu, 0x1F79E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F79E4u;
label_1f79e4:
    // 0x1f79e4: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x1f79e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_1f79e8:
    // 0x1f79e8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f79e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f79ec:
    // 0x1f79ec: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f79ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f79f0:
    // 0x1f79f0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f79f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f79f4:
    // 0x1f79f4: 0x40f809  jalr        $v0
label_1f79f8:
    if (ctx->pc == 0x1F79F8u) {
        ctx->pc = 0x1F79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79F4u;
        // 0x1f79f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F79FCu;
        goto label_1f79fc;
    }
    ctx->pc = 0x1F79F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F79FCu);
        ctx->pc = 0x1F79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79F4u;
        // 0x1f79f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F79F4u, 0x1F79FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F79FCu;
label_1f79fc:
    // 0x1f79fc: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x1f79fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1f7a00:
    // 0x1f7a00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1f7a00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7a04:
    // 0x1f7a04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7a08:
    // 0x1f7a08: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7a08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f7a0c:
    // 0x1f7a0c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f7a10:
    // 0x1f7a10: 0x60f809  jalr        $v1
label_1f7a14:
    if (ctx->pc == 0x1F7A14u) {
        ctx->pc = 0x1F7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A10u;
        // 0x1f7a14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7A18u;
        goto label_1f7a18;
    }
    ctx->pc = 0x1F7A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7A18u);
        ctx->pc = 0x1F7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A10u;
        // 0x1f7a14: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7A10u, 0x1F7A18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7A18u;
label_1f7a18:
    // 0x1f7a18: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1f7a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f7a1c:
    // 0x1f7a1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f7a20:
    // 0x1f7a20: 0x8c47b8b8  lw          $a3, -0x4748($v0)
    ctx->pc = 0x1f7a20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1f7a24:
    // 0x1f7a24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f7a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7a28:
    // 0x1f7a28: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1f7a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f7a2c:
    // 0x1f7a2c: 0x84620090  lh          $v0, 0x90($v1)
    ctx->pc = 0x1f7a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1f7a30:
    // 0x1f7a30: 0x24720090  addiu       $s2, $v1, 0x90
    ctx->pc = 0x1f7a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
label_1f7a34:
    // 0x1f7a34: 0x84a40030  lh          $a0, 0x30($a1)
    ctx->pc = 0x1f7a34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 48)));
label_1f7a38:
    // 0x1f7a38: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x1f7a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1f7a3c:
    // 0x1f7a3c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1f7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1f7a40:
    // 0x1f7a40: 0x40f809  jalr        $v0
label_1f7a44:
    if (ctx->pc == 0x1F7A44u) {
        ctx->pc = 0x1F7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A40u;
        // 0x1f7a44: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7A48u;
        goto label_1f7a48;
    }
    ctx->pc = 0x1F7A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7A48u);
        ctx->pc = 0x1F7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A40u;
        // 0x1f7a44: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7A40u, 0x1F7A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7A48u;
label_1f7a48:
    // 0x1f7a48: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1f7a4c:
    if (ctx->pc == 0x1F7A4Cu) {
        ctx->pc = 0x1F7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A48u;
        // 0x1f7a4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7A50u;
        goto label_1f7a50;
    }
    ctx->pc = 0x1F7A48u;
    {
        const bool branch_taken_0x1f7a48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F7A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A48u;
        // 0x1f7a4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a48) {
            ctx->pc = 0x1F7A64u;
            goto label_1f7a64;
        }
    }
    ctx->pc = 0x1F7A50u;
label_1f7a50:
    // 0x1f7a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7a54:
    // 0x1f7a54: 0x0  nop
    ctx->pc = 0x1f7a54u;
    // NOP
label_1f7a58:
    // 0x1f7a58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f7a5c:
    // 0x1f7a5c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1f7a60:
    if (ctx->pc == 0x1F7A60u) {
        ctx->pc = 0x1F7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A5Cu;
        // 0x1f7a60: 0xc62c0098  lwc1        $f12, 0x98($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7A64u;
        goto label_1f7a64;
    }
    ctx->pc = 0x1F7A5Cu;
    {
        const bool branch_taken_0x1f7a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A5Cu;
        // 0x1f7a60: 0xc62c0098  lwc1        $f12, 0x98($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a5c) {
            ctx->pc = 0x1F7A80u;
            goto label_1f7a80;
        }
    }
    ctx->pc = 0x1F7A64u;
label_1f7a64:
    // 0x1f7a64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f7a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1f7a68:
    // 0x1f7a68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f7a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f7a6c:
    // 0x1f7a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f7a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f7a70:
    // 0x1f7a70: 0x0  nop
    ctx->pc = 0x1f7a70u;
    // NOP
label_1f7a74:
    // 0x1f7a74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f7a78:
    // 0x1f7a78: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f7a78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1f7a7c:
    // 0x1f7a7c: 0xc62c0098  lwc1        $f12, 0x98($s1)
    ctx->pc = 0x1f7a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f7a80:
    // 0x1f7a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f7a84:
    // 0x1f7a84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f7a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f7a88:
    // 0x1f7a88: 0x263000a0  addiu       $s0, $s1, 0xA0
    ctx->pc = 0x1f7a88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_1f7a8c:
    // 0x1f7a8c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1f7a8cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1f7a90:
    // 0x1f7a90: 0x40f809  jalr        $v0
label_1f7a94:
    if (ctx->pc == 0x1F7A94u) {
        ctx->pc = 0x1F7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A90u;
        // 0x1f7a94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7A98u;
        goto label_1f7a98;
    }
    ctx->pc = 0x1F7A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F7A98u);
        ctx->pc = 0x1F7A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A90u;
        // 0x1f7a94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7A90u, 0x1F7A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7A98u;
label_1f7a98:
    // 0x1f7a98: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x1f7a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1f7a9c:
    // 0x1f7a9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7aa0:
    // 0x1f7aa0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7aa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f7aa4:
    // 0x1f7aa4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f7aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f7aa8:
    // 0x1f7aa8: 0x60f809  jalr        $v1
label_1f7aac:
    if (ctx->pc == 0x1F7AACu) {
        ctx->pc = 0x1F7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AA8u;
        // 0x1f7aac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7AB0u;
        goto label_1f7ab0;
    }
    ctx->pc = 0x1F7AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7AB0u);
        ctx->pc = 0x1F7AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AA8u;
        // 0x1f7aac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7AA8u, 0x1F7AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7AB0u;
label_1f7ab0:
    // 0x1f7ab0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1f7ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f7ab4:
    // 0x1f7ab4: 0x0  nop
    ctx->pc = 0x1f7ab4u;
    // NOP
label_1f7ab8:
    // 0x1f7ab8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f7ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f7abc:
    // 0x1f7abc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f7abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f7ac0:
    // 0x1f7ac0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f7ac4:
    // 0x1f7ac4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f7ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f7ac8:
    // 0x1f7ac8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1f7ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f7acc:
    // 0x1f7acc: 0x60f809  jalr        $v1
label_1f7ad0:
    if (ctx->pc == 0x1F7AD0u) {
        ctx->pc = 0x1F7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ACCu;
        // 0x1f7ad0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7AD4u;
        goto label_1f7ad4;
    }
    ctx->pc = 0x1F7ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7AD4u);
        ctx->pc = 0x1F7AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7ACCu;
        // 0x1f7ad0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7ACCu, 0x1F7AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7AD4u;
label_1f7ad4:
    // 0x1f7ad4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f7ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f7ad8:
    // 0x1f7ad8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f7adc:
    // 0x1f7adc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7ae0:
    // 0x1f7ae0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f7ae4:
    // 0x1f7ae4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f7ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f7ae8:
    // 0x1f7ae8: 0x60f809  jalr        $v1
label_1f7aec:
    if (ctx->pc == 0x1F7AECu) {
        ctx->pc = 0x1F7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AE8u;
        // 0x1f7aec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7AF0u;
        goto label_1f7af0;
    }
    ctx->pc = 0x1F7AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7AF0u);
        ctx->pc = 0x1F7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AE8u;
        // 0x1f7aec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7AE8u, 0x1F7AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7AF0u;
label_1f7af0:
    // 0x1f7af0: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x1f7af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1f7af4:
    // 0x1f7af4: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_1f7af8:
    if (ctx->pc == 0x1F7AF8u) {
        ctx->pc = 0x1F7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7AF4u;
        // 0x1f7af8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7AFCu;
        goto label_1f7afc;
    }
    ctx->pc = 0x1F7AF4u;
    {
        const bool branch_taken_0x1f7af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7af4) {
            ctx->pc = 0x1F7AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7AF4u;
            // 0x1f7af8: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7ab8;
        }
    }
    ctx->pc = 0x1F7AFCu;
label_1f7afc:
    // 0x1f7afc: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x1f7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_1f7b00:
    // 0x1f7b00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1f7b04:
    if (ctx->pc == 0x1F7B04u) {
        ctx->pc = 0x1F7B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B00u;
        // 0x1f7b04: 0x8e2200ac  lw          $v0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B08u;
        goto label_1f7b08;
    }
    ctx->pc = 0x1F7B00u;
    {
        const bool branch_taken_0x1f7b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b00) {
            ctx->pc = 0x1F7B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B00u;
            // 0x1f7b04: 0x8e2200ac  lw          $v0, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B18u;
            goto label_1f7b18;
        }
    }
    ctx->pc = 0x1F7B08u;
label_1f7b08:
    // 0x1f7b08: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x1f7b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_1f7b0c:
    // 0x1f7b0c: 0xc07dc32  jal         func_1F70C8
label_1f7b10:
    if (ctx->pc == 0x1F7B10u) {
        ctx->pc = 0x1F7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B0Cu;
        // 0x1f7b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B14u;
        goto label_1f7b14;
    }
    ctx->pc = 0x1F7B0Cu;
    SET_GPR_U32(ctx, 31, 0x1F7B14u);
    ctx->pc = 0x1F7B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B0Cu;
    // 0x1f7b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F70C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F70C8u, 0x1F7B0Cu, 0x1F7B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B14u;
label_1f7b14:
    // 0x1f7b14: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x1f7b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_1f7b18:
    // 0x1f7b18: 0xac530050  sw          $s3, 0x50($v0)
    ctx->pc = 0x1f7b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 19));
label_1f7b1c:
    // 0x1f7b1c: 0x8e2500b8  lw          $a1, 0xB8($s1)
    ctx->pc = 0x1f7b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_1f7b20:
    // 0x1f7b20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7b24:
    // 0x1f7b24: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f7b28:
    // 0x1f7b28: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f7b2c:
    // 0x1f7b2c: 0x60f809  jalr        $v1
label_1f7b30:
    if (ctx->pc == 0x1F7B30u) {
        ctx->pc = 0x1F7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B2Cu;
        // 0x1f7b30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B34u;
        goto label_1f7b34;
    }
    ctx->pc = 0x1F7B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7B34u);
        ctx->pc = 0x1F7B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B2Cu;
        // 0x1f7b30: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B2Cu, 0x1F7B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7B34u;
label_1f7b34:
    // 0x1f7b34: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x1f7b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_1f7b38:
    // 0x1f7b38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f7b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f7b3c:
    // 0x1f7b3c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1f7b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1f7b40:
    // 0x1f7b40: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1f7b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1f7b44:
    // 0x1f7b44: 0x60f809  jalr        $v1
label_1f7b48:
    if (ctx->pc == 0x1F7B48u) {
        ctx->pc = 0x1F7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B44u;
        // 0x1f7b48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B4Cu;
        goto label_1f7b4c;
    }
    ctx->pc = 0x1F7B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F7B4Cu);
        ctx->pc = 0x1F7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B44u;
        // 0x1f7b48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B44u, 0x1F7B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F7B4Cu;
label_1f7b4c:
    // 0x1f7b4c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f7b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f7b50:
    // 0x1f7b50: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f7b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f7b54:
    // 0x1f7b54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f7b54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f7b58:
    // 0x1f7b58: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f7b58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7b5c:
    // 0x1f7b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7b60:
    // 0x1f7b60: 0x3e00008  jr          $ra
label_1f7b64:
    if (ctx->pc == 0x1F7B64u) {
        ctx->pc = 0x1F7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B60u;
        // 0x1f7b64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F7B68u;
        goto label_fallthrough_0x1f7b60;
    }
    ctx->pc = 0x1F7B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B60u;
        // 0x1f7b64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f7b60:
    ctx->pc = 0x1F7B68u;
}
