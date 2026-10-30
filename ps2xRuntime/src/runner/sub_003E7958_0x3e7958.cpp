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

// Function: sub_003E7958
// Address: 0x3e7958 - 0x3e7b38
void sub_003E7958_0x3e7958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7958_0x3e7958");
#endif

    switch (ctx->pc) {
        case 0x3e7958u: goto label_3e7958;
        case 0x3e795cu: goto label_3e795c;
        case 0x3e7960u: goto label_3e7960;
        case 0x3e7964u: goto label_3e7964;
        case 0x3e7968u: goto label_3e7968;
        case 0x3e796cu: goto label_3e796c;
        case 0x3e7970u: goto label_3e7970;
        case 0x3e7974u: goto label_3e7974;
        case 0x3e7978u: goto label_3e7978;
        case 0x3e797cu: goto label_3e797c;
        case 0x3e7980u: goto label_3e7980;
        case 0x3e7984u: goto label_3e7984;
        case 0x3e7988u: goto label_3e7988;
        case 0x3e798cu: goto label_3e798c;
        case 0x3e7990u: goto label_3e7990;
        case 0x3e7994u: goto label_3e7994;
        case 0x3e7998u: goto label_3e7998;
        case 0x3e799cu: goto label_3e799c;
        case 0x3e79a0u: goto label_3e79a0;
        case 0x3e79a4u: goto label_3e79a4;
        case 0x3e79a8u: goto label_3e79a8;
        case 0x3e79acu: goto label_3e79ac;
        case 0x3e79b0u: goto label_3e79b0;
        case 0x3e79b4u: goto label_3e79b4;
        case 0x3e79b8u: goto label_3e79b8;
        case 0x3e79bcu: goto label_3e79bc;
        case 0x3e79c0u: goto label_3e79c0;
        case 0x3e79c4u: goto label_3e79c4;
        case 0x3e79c8u: goto label_3e79c8;
        case 0x3e79ccu: goto label_3e79cc;
        case 0x3e79d0u: goto label_3e79d0;
        case 0x3e79d4u: goto label_3e79d4;
        case 0x3e79d8u: goto label_3e79d8;
        case 0x3e79dcu: goto label_3e79dc;
        case 0x3e79e0u: goto label_3e79e0;
        case 0x3e79e4u: goto label_3e79e4;
        case 0x3e79e8u: goto label_3e79e8;
        case 0x3e79ecu: goto label_3e79ec;
        case 0x3e79f0u: goto label_3e79f0;
        case 0x3e79f4u: goto label_3e79f4;
        case 0x3e79f8u: goto label_3e79f8;
        case 0x3e79fcu: goto label_3e79fc;
        case 0x3e7a00u: goto label_3e7a00;
        case 0x3e7a04u: goto label_3e7a04;
        case 0x3e7a08u: goto label_3e7a08;
        case 0x3e7a0cu: goto label_3e7a0c;
        case 0x3e7a10u: goto label_3e7a10;
        case 0x3e7a14u: goto label_3e7a14;
        case 0x3e7a18u: goto label_3e7a18;
        case 0x3e7a1cu: goto label_3e7a1c;
        case 0x3e7a20u: goto label_3e7a20;
        case 0x3e7a24u: goto label_3e7a24;
        case 0x3e7a28u: goto label_3e7a28;
        case 0x3e7a2cu: goto label_3e7a2c;
        case 0x3e7a30u: goto label_3e7a30;
        case 0x3e7a34u: goto label_3e7a34;
        case 0x3e7a38u: goto label_3e7a38;
        case 0x3e7a3cu: goto label_3e7a3c;
        case 0x3e7a40u: goto label_3e7a40;
        case 0x3e7a44u: goto label_3e7a44;
        case 0x3e7a48u: goto label_3e7a48;
        case 0x3e7a4cu: goto label_3e7a4c;
        case 0x3e7a50u: goto label_3e7a50;
        case 0x3e7a54u: goto label_3e7a54;
        case 0x3e7a58u: goto label_3e7a58;
        case 0x3e7a5cu: goto label_3e7a5c;
        case 0x3e7a60u: goto label_3e7a60;
        case 0x3e7a64u: goto label_3e7a64;
        case 0x3e7a68u: goto label_3e7a68;
        case 0x3e7a6cu: goto label_3e7a6c;
        case 0x3e7a70u: goto label_3e7a70;
        case 0x3e7a74u: goto label_3e7a74;
        case 0x3e7a78u: goto label_3e7a78;
        case 0x3e7a7cu: goto label_3e7a7c;
        case 0x3e7a80u: goto label_3e7a80;
        case 0x3e7a84u: goto label_3e7a84;
        case 0x3e7a88u: goto label_3e7a88;
        case 0x3e7a8cu: goto label_3e7a8c;
        case 0x3e7a90u: goto label_3e7a90;
        case 0x3e7a94u: goto label_3e7a94;
        case 0x3e7a98u: goto label_3e7a98;
        case 0x3e7a9cu: goto label_3e7a9c;
        case 0x3e7aa0u: goto label_3e7aa0;
        case 0x3e7aa4u: goto label_3e7aa4;
        case 0x3e7aa8u: goto label_3e7aa8;
        case 0x3e7aacu: goto label_3e7aac;
        case 0x3e7ab0u: goto label_3e7ab0;
        case 0x3e7ab4u: goto label_3e7ab4;
        case 0x3e7ab8u: goto label_3e7ab8;
        case 0x3e7abcu: goto label_3e7abc;
        case 0x3e7ac0u: goto label_3e7ac0;
        case 0x3e7ac4u: goto label_3e7ac4;
        case 0x3e7ac8u: goto label_3e7ac8;
        case 0x3e7accu: goto label_3e7acc;
        case 0x3e7ad0u: goto label_3e7ad0;
        case 0x3e7ad4u: goto label_3e7ad4;
        case 0x3e7ad8u: goto label_3e7ad8;
        case 0x3e7adcu: goto label_3e7adc;
        case 0x3e7ae0u: goto label_3e7ae0;
        case 0x3e7ae4u: goto label_3e7ae4;
        case 0x3e7ae8u: goto label_3e7ae8;
        case 0x3e7aecu: goto label_3e7aec;
        case 0x3e7af0u: goto label_3e7af0;
        case 0x3e7af4u: goto label_3e7af4;
        case 0x3e7af8u: goto label_3e7af8;
        case 0x3e7afcu: goto label_3e7afc;
        case 0x3e7b00u: goto label_3e7b00;
        case 0x3e7b04u: goto label_3e7b04;
        case 0x3e7b08u: goto label_3e7b08;
        case 0x3e7b0cu: goto label_3e7b0c;
        case 0x3e7b10u: goto label_3e7b10;
        case 0x3e7b14u: goto label_3e7b14;
        case 0x3e7b18u: goto label_3e7b18;
        case 0x3e7b1cu: goto label_3e7b1c;
        case 0x3e7b20u: goto label_3e7b20;
        case 0x3e7b24u: goto label_3e7b24;
        case 0x3e7b28u: goto label_3e7b28;
        case 0x3e7b2cu: goto label_3e7b2c;
        case 0x3e7b30u: goto label_3e7b30;
        case 0x3e7b34u: goto label_3e7b34;
        default: break;
    }

    ctx->pc = 0x3e7958u;

label_3e7958:
    // 0x3e7958: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3e7958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3e795c:
    // 0x3e795c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3e795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3e7960:
    // 0x3e7960: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3e7960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3e7964:
    // 0x3e7964: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e7964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e7968:
    // 0x3e7968: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3e7968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3e796c:
    // 0x3e796c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3e796cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e7970:
    // 0x3e7970: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e7970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e7974:
    // 0x3e7974: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e7974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3e7978:
    // 0x3e7978: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3e7978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3e797c:
    // 0x3e797c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e7980:
    // 0x3e7980: 0xc0ea12a  jal         func_3A84A8
label_3e7984:
    if (ctx->pc == 0x3E7984u) {
        ctx->pc = 0x3E7984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7980u;
        // 0x3e7984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7988u;
        goto label_3e7988;
    }
    ctx->pc = 0x3E7980u;
    SET_GPR_U32(ctx, 31, 0x3E7988u);
    ctx->pc = 0x3E7984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7980u;
    // 0x3e7984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E7980u, 0x3E7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7988u;
label_3e7988:
    // 0x3e7988: 0xc0ea14c  jal         func_3A8530
label_3e798c:
    if (ctx->pc == 0x3E798Cu) {
        ctx->pc = 0x3E798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7988u;
        // 0x3e798c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7990u;
        goto label_3e7990;
    }
    ctx->pc = 0x3E7988u;
    SET_GPR_U32(ctx, 31, 0x3E7990u);
    ctx->pc = 0x3E798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7988u;
    // 0x3e798c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E7988u, 0x3E7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7990u;
label_3e7990:
    // 0x3e7990: 0xc08a61a  jal         func_229868
label_3e7994:
    if (ctx->pc == 0x3E7994u) {
        ctx->pc = 0x3E7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7990u;
        // 0x3e7994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7998u;
        goto label_3e7998;
    }
    ctx->pc = 0x3E7990u;
    SET_GPR_U32(ctx, 31, 0x3E7998u);
    ctx->pc = 0x3E7994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7990u;
    // 0x3e7994: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3E7990u, 0x3E7998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7998u;
label_3e7998:
    // 0x3e7998: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3e7998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e799c:
    // 0x3e799c: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3e799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3e79a0:
    // 0x3e79a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e79a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e79a4:
    // 0x3e79a4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e79a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e79a8:
    // 0x3e79a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e79a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e79ac:
    // 0x3e79ac: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3e79acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3e79b0:
    // 0x3e79b0: 0x84a40050  lh          $a0, 0x50($a1)
    ctx->pc = 0x3e79b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
label_3e79b4:
    // 0x3e79b4: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x3e79b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_3e79b8:
    // 0x3e79b8: 0x40f809  jalr        $v0
label_3e79bc:
    if (ctx->pc == 0x3E79BCu) {
        ctx->pc = 0x3E79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79B8u;
        // 0x3e79bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E79C0u;
        goto label_3e79c0;
    }
    ctx->pc = 0x3E79B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E79C0u);
        ctx->pc = 0x3E79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79B8u;
        // 0x3e79bc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E79B8u, 0x3E79C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E79C0u;
label_3e79c0:
    // 0x3e79c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3e79c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3e79c4:
    // 0x3e79c4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_3e79c8:
    if (ctx->pc == 0x3E79C8u) {
        ctx->pc = 0x3E79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79C4u;
        // 0x3e79c8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E79CCu;
        goto label_3e79cc;
    }
    ctx->pc = 0x3E79C4u;
    {
        const bool branch_taken_0x3e79c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E79C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79C4u;
        // 0x3e79c8: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e79c4) {
            ctx->pc = 0x3E7B08u;
            goto label_3e7b08;
        }
    }
    ctx->pc = 0x3E79CCu;
label_3e79cc:
    // 0x3e79cc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3e79ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e79d0:
    // 0x3e79d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e79d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e79d4:
    // 0x3e79d4: 0xae650030  sw          $a1, 0x30($s3)
    ctx->pc = 0x3e79d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 5));
label_3e79d8:
    // 0x3e79d8: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x3e79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_3e79dc:
    // 0x3e79dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e79dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e79e0:
    // 0x3e79e0: 0x7e620020  sq          $v0, 0x20($s3)
    ctx->pc = 0x3e79e0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), GPR_VEC(ctx, 2));
label_3e79e4:
    // 0x3e79e4: 0xc0e858c  jal         func_3A1630
label_3e79e8:
    if (ctx->pc == 0x3E79E8u) {
        ctx->pc = 0x3E79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79E4u;
        // 0x3e79e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E79ECu;
        goto label_3e79ec;
    }
    ctx->pc = 0x3E79E4u;
    SET_GPR_U32(ctx, 31, 0x3E79ECu);
    ctx->pc = 0x3E79E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E79E4u;
    // 0x3e79e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E79E4u, 0x3E79ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E79ECu;
label_3e79ec:
    // 0x3e79ec: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e79ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_3e79f0:
    // 0x3e79f0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3e79f4:
    // 0x3e79f4: 0xc0e8cda  jal         func_3A3368
label_3e79f8:
    if (ctx->pc == 0x3E79F8u) {
        ctx->pc = 0x3E79F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E79F4u;
        // 0x3e79f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E79FCu;
        goto label_3e79fc;
    }
    ctx->pc = 0x3E79F4u;
    SET_GPR_U32(ctx, 31, 0x3E79FCu);
    ctx->pc = 0x3E79F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E79F4u;
    // 0x3e79f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E79F4u, 0x3E79FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E79FCu;
label_3e79fc:
    // 0x3e79fc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3e7a00:
    // 0x3e7a00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e7a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3e7a04:
    // 0x3e7a04: 0xc0e8cbc  jal         func_3A32F0
label_3e7a08:
    if (ctx->pc == 0x3E7A08u) {
        ctx->pc = 0x3E7A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A04u;
        // 0x3e7a08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7A0Cu;
        goto label_3e7a0c;
    }
    ctx->pc = 0x3E7A04u;
    SET_GPR_U32(ctx, 31, 0x3E7A0Cu);
    ctx->pc = 0x3E7A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7A04u;
    // 0x3e7a08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E7A04u, 0x3E7A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7A0Cu;
label_3e7a0c:
    // 0x3e7a0c: 0x3c020331  lui         $v0, 0x331
    ctx->pc = 0x3e7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)817 << 16));
label_3e7a10:
    // 0x3e7a10: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x3e7a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3e7a14:
    // 0x3e7a14: 0x3442fd29  ori         $v0, $v0, 0xFD29
    ctx->pc = 0x3e7a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64809);
label_3e7a18:
    // 0x3e7a18: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3e7a1c:
    if (ctx->pc == 0x3E7A1Cu) {
        ctx->pc = 0x3E7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A18u;
        // 0x3e7a1c: 0x3c0250e8  lui         $v0, 0x50E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20712 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7A20u;
        goto label_3e7a20;
    }
    ctx->pc = 0x3E7A18u;
    {
        const bool branch_taken_0x3e7a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A18u;
        // 0x3e7a1c: 0x3c0250e8  lui         $v0, 0x50E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a18) {
            ctx->pc = 0x3E7A38u;
            goto label_3e7a38;
        }
    }
    ctx->pc = 0x3E7A20u;
label_3e7a20:
    // 0x3e7a20: 0x3442de39  ori         $v0, $v0, 0xDE39
    ctx->pc = 0x3e7a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56889);
label_3e7a24:
    // 0x3e7a24: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3e7a28:
    if (ctx->pc == 0x3E7A28u) {
        ctx->pc = 0x3E7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A24u;
        // 0x3e7a28: 0x3c0217d7  lui         $v0, 0x17D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7A2Cu;
        goto label_3e7a2c;
    }
    ctx->pc = 0x3E7A24u;
    {
        const bool branch_taken_0x3e7a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3E7A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A24u;
        // 0x3e7a28: 0x3c0217d7  lui         $v0, 0x17D7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a24) {
            ctx->pc = 0x3E7A38u;
            goto label_3e7a38;
        }
    }
    ctx->pc = 0x3E7A2Cu;
label_3e7a2c:
    // 0x3e7a2c: 0x3442194b  ori         $v0, $v0, 0x194B
    ctx->pc = 0x3e7a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6475);
label_3e7a30:
    // 0x3e7a30: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3e7a34:
    if (ctx->pc == 0x3E7A34u) {
        ctx->pc = 0x3E7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A30u;
        // 0x3e7a34: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7A38u;
        goto label_3e7a38;
    }
    ctx->pc = 0x3E7A30u;
    {
        const bool branch_taken_0x3e7a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e7a30) {
            ctx->pc = 0x3E7A34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7A30u;
            // 0x3e7a34: 0x8e420054  lw          $v0, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7A48u;
            goto label_3e7a48;
        }
    }
    ctx->pc = 0x3E7A38u;
label_3e7a38:
    // 0x3e7a38: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3e7a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e7a3c:
    // 0x3e7a3c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3e7a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_3e7a40:
    // 0x3e7a40: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3e7a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3e7a44:
    // 0x3e7a44: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3e7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e7a48:
    // 0x3e7a48: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3e7a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3e7a4c:
    // 0x3e7a4c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e7a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e7a50:
    // 0x3e7a50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e7a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e7a54:
    // 0x3e7a54: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x3e7a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
label_3e7a58:
    // 0x3e7a58: 0x84a40050  lh          $a0, 0x50($a1)
    ctx->pc = 0x3e7a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 80)));
label_3e7a5c:
    // 0x3e7a5c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x3e7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_3e7a60:
    // 0x3e7a60: 0x40f809  jalr        $v0
label_3e7a64:
    if (ctx->pc == 0x3E7A64u) {
        ctx->pc = 0x3E7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A60u;
        // 0x3e7a64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7A68u;
        goto label_3e7a68;
    }
    ctx->pc = 0x3E7A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E7A68u);
        ctx->pc = 0x3E7A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A60u;
        // 0x3e7a64: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7A60u, 0x3E7A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7A68u;
label_3e7a68:
    // 0x3e7a68: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3e7a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3e7a6c:
    // 0x3e7a6c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_3e7a70:
    if (ctx->pc == 0x3E7A70u) {
        ctx->pc = 0x3E7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A6Cu;
        // 0x3e7a70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7A74u;
        goto label_3e7a74;
    }
    ctx->pc = 0x3E7A6Cu;
    {
        const bool branch_taken_0x3e7a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A6Cu;
        // 0x3e7a70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7a6c) {
            ctx->pc = 0x3E7B00u;
            goto label_3e7b00;
        }
    }
    ctx->pc = 0x3E7A74u;
label_3e7a74:
    // 0x3e7a74: 0xc0e8630  jal         func_3A18C0
label_3e7a78:
    if (ctx->pc == 0x3E7A78u) {
        ctx->pc = 0x3E7A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A74u;
        // 0x3e7a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7A7Cu;
        goto label_3e7a7c;
    }
    ctx->pc = 0x3E7A74u;
    SET_GPR_U32(ctx, 31, 0x3E7A7Cu);
    ctx->pc = 0x3E7A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7A74u;
    // 0x3e7a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18C0u, 0x3E7A74u, 0x3E7A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7A7Cu;
label_3e7a7c:
    // 0x3e7a7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e7a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7a80:
    // 0x3e7a80: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
label_3e7a84:
    if (ctx->pc == 0x3E7A84u) {
        ctx->pc = 0x3E7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A80u;
        // 0x3e7a84: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7A88u;
        goto label_3e7a88;
    }
    ctx->pc = 0x3E7A80u;
    {
        const bool branch_taken_0x3e7a80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7a80) {
            ctx->pc = 0x3E7A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E7A80u;
            // 0x3e7a84: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E7AE0u;
            goto label_3e7ae0;
        }
    }
    ctx->pc = 0x3E7A88u;
label_3e7a88:
    // 0x3e7a88: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3e7a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3e7a8c:
    // 0x3e7a8c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3e7a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3e7a90:
    // 0x3e7a90: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x3e7a90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_3e7a94:
    // 0x3e7a94: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x3e7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_3e7a98:
    // 0x3e7a98: 0x60f809  jalr        $v1
label_3e7a9c:
    if (ctx->pc == 0x3E7A9Cu) {
        ctx->pc = 0x3E7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A98u;
        // 0x3e7a9c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7AA0u;
        goto label_3e7aa0;
    }
    ctx->pc = 0x3E7A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E7AA0u);
        ctx->pc = 0x3E7A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7A98u;
        // 0x3e7a9c: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7A98u, 0x3E7AA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7AA0u;
label_3e7aa0:
    // 0x3e7aa0: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3e7aa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e7aa4:
    // 0x3e7aa4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3e7aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3e7aa8:
    // 0x3e7aa8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3e7aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e7aac:
    // 0x3e7aac: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x3e7aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_3e7ab0:
    // 0x3e7ab0: 0x86300070  lh          $s0, 0x70($s1)
    ctx->pc = 0x3e7ab0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 112)));
label_3e7ab4:
    // 0x3e7ab4: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x3e7ab4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_3e7ab8:
    // 0x3e7ab8: 0xc136b30  jal         func_4DACC0
label_3e7abc:
    if (ctx->pc == 0x3E7ABCu) {
        ctx->pc = 0x3E7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AB8u;
        // 0x3e7abc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7AC0u;
        goto label_3e7ac0;
    }
    ctx->pc = 0x3E7AB8u;
    SET_GPR_U32(ctx, 31, 0x3E7AC0u);
    ctx->pc = 0x3E7ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7AB8u;
    // 0x3e7abc: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DACC0u, 0x3E7AB8u, 0x3E7AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7AC0u;
label_3e7ac0:
    // 0x3e7ac0: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3e7ac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e7ac4:
    // 0x3e7ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e7ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e7ac8:
    // 0x3e7ac8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3e7ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3e7acc:
    // 0x3e7acc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e7accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e7ad0:
    // 0x3e7ad0: 0x40f809  jalr        $v0
label_3e7ad4:
    if (ctx->pc == 0x3E7AD4u) {
        ctx->pc = 0x3E7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AD0u;
        // 0x3e7ad4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7AD8u;
        goto label_3e7ad8;
    }
    ctx->pc = 0x3E7AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E7AD8u);
        ctx->pc = 0x3E7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AD0u;
        // 0x3e7ad4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7AD0u, 0x3E7AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7AD8u;
label_3e7ad8:
    // 0x3e7ad8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3e7adc:
    if (ctx->pc == 0x3E7ADCu) {
        ctx->pc = 0x3E7AE0u;
        goto label_3e7ae0;
    }
    ctx->pc = 0x3E7AD8u;
    {
        const bool branch_taken_0x3e7ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e7ad8) {
            ctx->pc = 0x3E7AF4u;
            goto label_3e7af4;
        }
    }
    ctx->pc = 0x3E7AE0u;
label_3e7ae0:
    // 0x3e7ae0: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3e7ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_3e7ae4:
    // 0x3e7ae4: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3e7ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3e7ae8:
    // 0x3e7ae8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3e7ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3e7aec:
    // 0x3e7aec: 0x60f809  jalr        $v1
label_3e7af0:
    if (ctx->pc == 0x3E7AF0u) {
        ctx->pc = 0x3E7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AECu;
        // 0x3e7af0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7AF4u;
        goto label_3e7af4;
    }
    ctx->pc = 0x3E7AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3E7AF4u);
        ctx->pc = 0x3E7AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AECu;
        // 0x3e7af0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7AECu, 0x3E7AF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E7AF4u;
label_3e7af4:
    // 0x3e7af4: 0xc0e8616  jal         func_3A1858
label_3e7af8:
    if (ctx->pc == 0x3E7AF8u) {
        ctx->pc = 0x3E7AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7AF4u;
        // 0x3e7af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7AFCu;
        goto label_3e7afc;
    }
    ctx->pc = 0x3E7AF4u;
    SET_GPR_U32(ctx, 31, 0x3E7AFCu);
    ctx->pc = 0x3E7AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E7AF4u;
    // 0x3e7af8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3E7AF4u, 0x3E7AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7AFCu;
label_3e7afc:
    // 0x3e7afc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e7b00:
    // 0x3e7b00: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x3e7b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_3e7b04:
    // 0x3e7b04: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x3e7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_3e7b08:
    // 0x3e7b08: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3e7b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3e7b0c:
    // 0x3e7b0c: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3e7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3e7b10:
    // 0x3e7b10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e7b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e7b14:
    // 0x3e7b14: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3e7b14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3e7b18:
    // 0x3e7b18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e7b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3e7b1c:
    // 0x3e7b1c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3e7b1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e7b20:
    // 0x3e7b20: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x3e7b20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
label_3e7b24:
    // 0x3e7b24: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3e7b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e7b28:
    // 0x3e7b28: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3e7b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e7b2c:
    // 0x3e7b2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e7b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e7b30:
    // 0x3e7b30: 0x3e00008  jr          $ra
label_3e7b34:
    if (ctx->pc == 0x3E7B34u) {
        ctx->pc = 0x3E7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B30u;
        // 0x3e7b34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E7B38u;
        goto label_fallthrough_0x3e7b30;
    }
    ctx->pc = 0x3E7B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7B30u;
        // 0x3e7b34: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e7b30:
    ctx->pc = 0x3E7B38u;
}
