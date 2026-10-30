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

// Function: sub_001F57E0
// Address: 0x1f57e0 - 0x1f5b90
void sub_001F57E0_0x1f57e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F57E0_0x1f57e0");
#endif

    switch (ctx->pc) {
        case 0x1f57e0u: goto label_1f57e0;
        case 0x1f57e4u: goto label_1f57e4;
        case 0x1f57e8u: goto label_1f57e8;
        case 0x1f57ecu: goto label_1f57ec;
        case 0x1f57f0u: goto label_1f57f0;
        case 0x1f57f4u: goto label_1f57f4;
        case 0x1f57f8u: goto label_1f57f8;
        case 0x1f57fcu: goto label_1f57fc;
        case 0x1f5800u: goto label_1f5800;
        case 0x1f5804u: goto label_1f5804;
        case 0x1f5808u: goto label_1f5808;
        case 0x1f580cu: goto label_1f580c;
        case 0x1f5810u: goto label_1f5810;
        case 0x1f5814u: goto label_1f5814;
        case 0x1f5818u: goto label_1f5818;
        case 0x1f581cu: goto label_1f581c;
        case 0x1f5820u: goto label_1f5820;
        case 0x1f5824u: goto label_1f5824;
        case 0x1f5828u: goto label_1f5828;
        case 0x1f582cu: goto label_1f582c;
        case 0x1f5830u: goto label_1f5830;
        case 0x1f5834u: goto label_1f5834;
        case 0x1f5838u: goto label_1f5838;
        case 0x1f583cu: goto label_1f583c;
        case 0x1f5840u: goto label_1f5840;
        case 0x1f5844u: goto label_1f5844;
        case 0x1f5848u: goto label_1f5848;
        case 0x1f584cu: goto label_1f584c;
        case 0x1f5850u: goto label_1f5850;
        case 0x1f5854u: goto label_1f5854;
        case 0x1f5858u: goto label_1f5858;
        case 0x1f585cu: goto label_1f585c;
        case 0x1f5860u: goto label_1f5860;
        case 0x1f5864u: goto label_1f5864;
        case 0x1f5868u: goto label_1f5868;
        case 0x1f586cu: goto label_1f586c;
        case 0x1f5870u: goto label_1f5870;
        case 0x1f5874u: goto label_1f5874;
        case 0x1f5878u: goto label_1f5878;
        case 0x1f587cu: goto label_1f587c;
        case 0x1f5880u: goto label_1f5880;
        case 0x1f5884u: goto label_1f5884;
        case 0x1f5888u: goto label_1f5888;
        case 0x1f588cu: goto label_1f588c;
        case 0x1f5890u: goto label_1f5890;
        case 0x1f5894u: goto label_1f5894;
        case 0x1f5898u: goto label_1f5898;
        case 0x1f589cu: goto label_1f589c;
        case 0x1f58a0u: goto label_1f58a0;
        case 0x1f58a4u: goto label_1f58a4;
        case 0x1f58a8u: goto label_1f58a8;
        case 0x1f58acu: goto label_1f58ac;
        case 0x1f58b0u: goto label_1f58b0;
        case 0x1f58b4u: goto label_1f58b4;
        case 0x1f58b8u: goto label_1f58b8;
        case 0x1f58bcu: goto label_1f58bc;
        case 0x1f58c0u: goto label_1f58c0;
        case 0x1f58c4u: goto label_1f58c4;
        case 0x1f58c8u: goto label_1f58c8;
        case 0x1f58ccu: goto label_1f58cc;
        case 0x1f58d0u: goto label_1f58d0;
        case 0x1f58d4u: goto label_1f58d4;
        case 0x1f58d8u: goto label_1f58d8;
        case 0x1f58dcu: goto label_1f58dc;
        case 0x1f58e0u: goto label_1f58e0;
        case 0x1f58e4u: goto label_1f58e4;
        case 0x1f58e8u: goto label_1f58e8;
        case 0x1f58ecu: goto label_1f58ec;
        case 0x1f58f0u: goto label_1f58f0;
        case 0x1f58f4u: goto label_1f58f4;
        case 0x1f58f8u: goto label_1f58f8;
        case 0x1f58fcu: goto label_1f58fc;
        case 0x1f5900u: goto label_1f5900;
        case 0x1f5904u: goto label_1f5904;
        case 0x1f5908u: goto label_1f5908;
        case 0x1f590cu: goto label_1f590c;
        case 0x1f5910u: goto label_1f5910;
        case 0x1f5914u: goto label_1f5914;
        case 0x1f5918u: goto label_1f5918;
        case 0x1f591cu: goto label_1f591c;
        case 0x1f5920u: goto label_1f5920;
        case 0x1f5924u: goto label_1f5924;
        case 0x1f5928u: goto label_1f5928;
        case 0x1f592cu: goto label_1f592c;
        case 0x1f5930u: goto label_1f5930;
        case 0x1f5934u: goto label_1f5934;
        case 0x1f5938u: goto label_1f5938;
        case 0x1f593cu: goto label_1f593c;
        case 0x1f5940u: goto label_1f5940;
        case 0x1f5944u: goto label_1f5944;
        case 0x1f5948u: goto label_1f5948;
        case 0x1f594cu: goto label_1f594c;
        case 0x1f5950u: goto label_1f5950;
        case 0x1f5954u: goto label_1f5954;
        case 0x1f5958u: goto label_1f5958;
        case 0x1f595cu: goto label_1f595c;
        case 0x1f5960u: goto label_1f5960;
        case 0x1f5964u: goto label_1f5964;
        case 0x1f5968u: goto label_1f5968;
        case 0x1f596cu: goto label_1f596c;
        case 0x1f5970u: goto label_1f5970;
        case 0x1f5974u: goto label_1f5974;
        case 0x1f5978u: goto label_1f5978;
        case 0x1f597cu: goto label_1f597c;
        case 0x1f5980u: goto label_1f5980;
        case 0x1f5984u: goto label_1f5984;
        case 0x1f5988u: goto label_1f5988;
        case 0x1f598cu: goto label_1f598c;
        case 0x1f5990u: goto label_1f5990;
        case 0x1f5994u: goto label_1f5994;
        case 0x1f5998u: goto label_1f5998;
        case 0x1f599cu: goto label_1f599c;
        case 0x1f59a0u: goto label_1f59a0;
        case 0x1f59a4u: goto label_1f59a4;
        case 0x1f59a8u: goto label_1f59a8;
        case 0x1f59acu: goto label_1f59ac;
        case 0x1f59b0u: goto label_1f59b0;
        case 0x1f59b4u: goto label_1f59b4;
        case 0x1f59b8u: goto label_1f59b8;
        case 0x1f59bcu: goto label_1f59bc;
        case 0x1f59c0u: goto label_1f59c0;
        case 0x1f59c4u: goto label_1f59c4;
        case 0x1f59c8u: goto label_1f59c8;
        case 0x1f59ccu: goto label_1f59cc;
        case 0x1f59d0u: goto label_1f59d0;
        case 0x1f59d4u: goto label_1f59d4;
        case 0x1f59d8u: goto label_1f59d8;
        case 0x1f59dcu: goto label_1f59dc;
        case 0x1f59e0u: goto label_1f59e0;
        case 0x1f59e4u: goto label_1f59e4;
        case 0x1f59e8u: goto label_1f59e8;
        case 0x1f59ecu: goto label_1f59ec;
        case 0x1f59f0u: goto label_1f59f0;
        case 0x1f59f4u: goto label_1f59f4;
        case 0x1f59f8u: goto label_1f59f8;
        case 0x1f59fcu: goto label_1f59fc;
        case 0x1f5a00u: goto label_1f5a00;
        case 0x1f5a04u: goto label_1f5a04;
        case 0x1f5a08u: goto label_1f5a08;
        case 0x1f5a0cu: goto label_1f5a0c;
        case 0x1f5a10u: goto label_1f5a10;
        case 0x1f5a14u: goto label_1f5a14;
        case 0x1f5a18u: goto label_1f5a18;
        case 0x1f5a1cu: goto label_1f5a1c;
        case 0x1f5a20u: goto label_1f5a20;
        case 0x1f5a24u: goto label_1f5a24;
        case 0x1f5a28u: goto label_1f5a28;
        case 0x1f5a2cu: goto label_1f5a2c;
        case 0x1f5a30u: goto label_1f5a30;
        case 0x1f5a34u: goto label_1f5a34;
        case 0x1f5a38u: goto label_1f5a38;
        case 0x1f5a3cu: goto label_1f5a3c;
        case 0x1f5a40u: goto label_1f5a40;
        case 0x1f5a44u: goto label_1f5a44;
        case 0x1f5a48u: goto label_1f5a48;
        case 0x1f5a4cu: goto label_1f5a4c;
        case 0x1f5a50u: goto label_1f5a50;
        case 0x1f5a54u: goto label_1f5a54;
        case 0x1f5a58u: goto label_1f5a58;
        case 0x1f5a5cu: goto label_1f5a5c;
        case 0x1f5a60u: goto label_1f5a60;
        case 0x1f5a64u: goto label_1f5a64;
        case 0x1f5a68u: goto label_1f5a68;
        case 0x1f5a6cu: goto label_1f5a6c;
        case 0x1f5a70u: goto label_1f5a70;
        case 0x1f5a74u: goto label_1f5a74;
        case 0x1f5a78u: goto label_1f5a78;
        case 0x1f5a7cu: goto label_1f5a7c;
        case 0x1f5a80u: goto label_1f5a80;
        case 0x1f5a84u: goto label_1f5a84;
        case 0x1f5a88u: goto label_1f5a88;
        case 0x1f5a8cu: goto label_1f5a8c;
        case 0x1f5a90u: goto label_1f5a90;
        case 0x1f5a94u: goto label_1f5a94;
        case 0x1f5a98u: goto label_1f5a98;
        case 0x1f5a9cu: goto label_1f5a9c;
        case 0x1f5aa0u: goto label_1f5aa0;
        case 0x1f5aa4u: goto label_1f5aa4;
        case 0x1f5aa8u: goto label_1f5aa8;
        case 0x1f5aacu: goto label_1f5aac;
        case 0x1f5ab0u: goto label_1f5ab0;
        case 0x1f5ab4u: goto label_1f5ab4;
        case 0x1f5ab8u: goto label_1f5ab8;
        case 0x1f5abcu: goto label_1f5abc;
        case 0x1f5ac0u: goto label_1f5ac0;
        case 0x1f5ac4u: goto label_1f5ac4;
        case 0x1f5ac8u: goto label_1f5ac8;
        case 0x1f5accu: goto label_1f5acc;
        case 0x1f5ad0u: goto label_1f5ad0;
        case 0x1f5ad4u: goto label_1f5ad4;
        case 0x1f5ad8u: goto label_1f5ad8;
        case 0x1f5adcu: goto label_1f5adc;
        case 0x1f5ae0u: goto label_1f5ae0;
        case 0x1f5ae4u: goto label_1f5ae4;
        case 0x1f5ae8u: goto label_1f5ae8;
        case 0x1f5aecu: goto label_1f5aec;
        case 0x1f5af0u: goto label_1f5af0;
        case 0x1f5af4u: goto label_1f5af4;
        case 0x1f5af8u: goto label_1f5af8;
        case 0x1f5afcu: goto label_1f5afc;
        case 0x1f5b00u: goto label_1f5b00;
        case 0x1f5b04u: goto label_1f5b04;
        case 0x1f5b08u: goto label_1f5b08;
        case 0x1f5b0cu: goto label_1f5b0c;
        case 0x1f5b10u: goto label_1f5b10;
        case 0x1f5b14u: goto label_1f5b14;
        case 0x1f5b18u: goto label_1f5b18;
        case 0x1f5b1cu: goto label_1f5b1c;
        case 0x1f5b20u: goto label_1f5b20;
        case 0x1f5b24u: goto label_1f5b24;
        case 0x1f5b28u: goto label_1f5b28;
        case 0x1f5b2cu: goto label_1f5b2c;
        case 0x1f5b30u: goto label_1f5b30;
        case 0x1f5b34u: goto label_1f5b34;
        case 0x1f5b38u: goto label_1f5b38;
        case 0x1f5b3cu: goto label_1f5b3c;
        case 0x1f5b40u: goto label_1f5b40;
        case 0x1f5b44u: goto label_1f5b44;
        case 0x1f5b48u: goto label_1f5b48;
        case 0x1f5b4cu: goto label_1f5b4c;
        case 0x1f5b50u: goto label_1f5b50;
        case 0x1f5b54u: goto label_1f5b54;
        case 0x1f5b58u: goto label_1f5b58;
        case 0x1f5b5cu: goto label_1f5b5c;
        case 0x1f5b60u: goto label_1f5b60;
        case 0x1f5b64u: goto label_1f5b64;
        case 0x1f5b68u: goto label_1f5b68;
        case 0x1f5b6cu: goto label_1f5b6c;
        case 0x1f5b70u: goto label_1f5b70;
        case 0x1f5b74u: goto label_1f5b74;
        case 0x1f5b78u: goto label_1f5b78;
        case 0x1f5b7cu: goto label_1f5b7c;
        case 0x1f5b80u: goto label_1f5b80;
        case 0x1f5b84u: goto label_1f5b84;
        case 0x1f5b88u: goto label_1f5b88;
        case 0x1f5b8cu: goto label_1f5b8c;
        default: break;
    }

    ctx->pc = 0x1f57e0u;

label_1f57e0:
    // 0x1f57e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f57e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1f57e4:
    // 0x1f57e4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1f57e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_1f57e8:
    // 0x1f57e8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1f57e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_1f57ec:
    // 0x1f57ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f57ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f57f0:
    // 0x1f57f0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1f57f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_1f57f4:
    // 0x1f57f4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1f57f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_1f57f8:
    // 0x1f57f8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1f57f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_1f57fc:
    // 0x1f57fc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1f57fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_1f5800:
    // 0x1f5800: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f5800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f5804:
    // 0x1f5804: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1f5804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_1f5808:
    // 0x1f5808: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x1f5808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_1f580c:
    // 0x1f580c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f580cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f5810:
    // 0x1f5810: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f5810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f5814:
    // 0x1f5814: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f5814u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f5818:
    // 0x1f5818: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f5818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f581c:
    // 0x1f581c: 0x40f809  jalr        $v0
label_1f5820:
    if (ctx->pc == 0x1F5820u) {
        ctx->pc = 0x1F5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F581Cu;
        // 0x1f5820: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5824u;
        goto label_1f5824;
    }
    ctx->pc = 0x1F581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5824u);
        ctx->pc = 0x1F5820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F581Cu;
        // 0x1f5820: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F581Cu, 0x1F5824u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5824u;
label_1f5824:
    // 0x1f5824: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
label_1f5828:
    if (ctx->pc == 0x1F5828u) {
        ctx->pc = 0x1F5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5824u;
        // 0x1f5828: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F582Cu;
        goto label_1f582c;
    }
    ctx->pc = 0x1F5824u;
    {
        const bool branch_taken_0x1f5824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5824u;
        // 0x1f5828: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5824) {
            ctx->pc = 0x1F5B64u;
            goto label_1f5b64;
        }
    }
    ctx->pc = 0x1F582Cu;
label_1f582c:
    // 0x1f582c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f5830:
    // 0x1f5830: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1f5830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1f5834:
    // 0x1f5834: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1f5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1f5838:
    // 0x1f5838: 0x40f809  jalr        $v0
label_1f583c:
    if (ctx->pc == 0x1F583Cu) {
        ctx->pc = 0x1F583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5838u;
        // 0x1f583c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5840u;
        goto label_1f5840;
    }
    ctx->pc = 0x1F5838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5840u);
        ctx->pc = 0x1F583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5838u;
        // 0x1f583c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5838u, 0x1F5840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5840u;
label_1f5840:
    // 0x1f5840: 0x104000c7  beqz        $v0, . + 4 + (0xC7 << 2)
label_1f5844:
    if (ctx->pc == 0x1F5844u) {
        ctx->pc = 0x1F5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5840u;
        // 0x1f5844: 0x264200b4  addiu       $v0, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5848u;
        goto label_1f5848;
    }
    ctx->pc = 0x1F5840u;
    {
        const bool branch_taken_0x1f5840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5840u;
        // 0x1f5844: 0x264200b4  addiu       $v0, $s2, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5840) {
            ctx->pc = 0x1F5B60u;
            goto label_1f5b60;
        }
    }
    ctx->pc = 0x1F5848u;
label_1f5848:
    // 0x1f5848: 0x8e45009c  lw          $a1, 0x9C($s2)
    ctx->pc = 0x1f5848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_1f584c:
    // 0x1f584c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1f584cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_1f5850:
    // 0x1f5850: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f5850u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5854:
    // 0x1f5854: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1f5854u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5858:
    // 0x1f5858: 0x265e0148  addiu       $fp, $s2, 0x148
    ctx->pc = 0x1f5858u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 328));
label_1f585c:
    // 0x1f585c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5860:
    // 0x1f5860: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1f5860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f5864:
    // 0x1f5864: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x1f5864u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f5868:
    // 0x1f5868: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1f5868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1f586c:
    // 0x1f586c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1f586cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1f5870:
    // 0x1f5870: 0x40f809  jalr        $v0
label_1f5874:
    if (ctx->pc == 0x1F5874u) {
        ctx->pc = 0x1F5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5870u;
        // 0x1f5874: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5878u;
        goto label_1f5878;
    }
    ctx->pc = 0x1F5870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5878u);
        ctx->pc = 0x1F5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5870u;
        // 0x1f5874: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5870u, 0x1F5878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5878u;
label_1f5878:
    // 0x1f5878: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1f5878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1f587c:
    // 0x1f587c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5880:
    // 0x1f5880: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f5880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f5884:
    // 0x1f5884: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f5884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f5888:
    // 0x1f5888: 0x60f809  jalr        $v1
label_1f588c:
    if (ctx->pc == 0x1F588Cu) {
        ctx->pc = 0x1F588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5888u;
        // 0x1f588c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5890u;
        goto label_1f5890;
    }
    ctx->pc = 0x1F5888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5890u);
        ctx->pc = 0x1F588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5888u;
        // 0x1f588c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5888u, 0x1F5890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5890u;
label_1f5890:
    // 0x1f5890: 0x8e4500a4  lw          $a1, 0xA4($s2)
    ctx->pc = 0x1f5890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
label_1f5894:
    // 0x1f5894: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5898:
    // 0x1f5898: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f5898u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f589c:
    // 0x1f589c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f58a0:
    // 0x1f58a0: 0x60f809  jalr        $v1
label_1f58a4:
    if (ctx->pc == 0x1F58A4u) {
        ctx->pc = 0x1F58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58A0u;
        // 0x1f58a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F58A8u;
        goto label_1f58a8;
    }
    ctx->pc = 0x1F58A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F58A8u);
        ctx->pc = 0x1F58A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58A0u;
        // 0x1f58a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F58A0u, 0x1F58A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F58A8u;
label_1f58a8:
    // 0x1f58a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f58ac:
    // 0x1f58ac: 0xc061748  jal         func_185D20
label_1f58b0:
    if (ctx->pc == 0x1F58B0u) {
        ctx->pc = 0x1F58B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58ACu;
        // 0x1f58b0: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F58B4u;
        goto label_1f58b4;
    }
    ctx->pc = 0x1F58ACu;
    SET_GPR_U32(ctx, 31, 0x1F58B4u);
    ctx->pc = 0x1F58B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58ACu;
    // 0x1f58b0: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x1F58ACu, 0x1F58B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58B4u;
label_1f58b4:
    // 0x1f58b4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1f58b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f58b8:
    // 0x1f58b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f58b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f58bc:
    // 0x1f58bc: 0xc07d2fc  jal         func_1F4BF0
label_1f58c0:
    if (ctx->pc == 0x1F58C0u) {
        ctx->pc = 0x1F58C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58BCu;
        // 0x1f58c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F58C4u;
        goto label_1f58c4;
    }
    ctx->pc = 0x1F58BCu;
    SET_GPR_U32(ctx, 31, 0x1F58C4u);
    ctx->pc = 0x1F58C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58BCu;
    // 0x1f58c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BF0u, 0x1F58BCu, 0x1F58C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58C4u;
label_1f58c4:
    // 0x1f58c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1f58c8:
    // 0x1f58c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f58c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f58cc:
    // 0x1f58cc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f58ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f58d0:
    // 0x1f58d0: 0xc07f8c0  jal         func_1FE300
label_1f58d4:
    if (ctx->pc == 0x1F58D4u) {
        ctx->pc = 0x1F58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58D0u;
        // 0x1f58d4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F58D8u;
        goto label_1f58d8;
    }
    ctx->pc = 0x1F58D0u;
    SET_GPR_U32(ctx, 31, 0x1F58D8u);
    ctx->pc = 0x1F58D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F58D0u;
    // 0x1f58d4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE300u, 0x1F58D0u, 0x1F58D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F58D8u;
label_1f58d8:
    // 0x1f58d8: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1f58dc:
    if (ctx->pc == 0x1F58DCu) {
        ctx->pc = 0x1F58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58D8u;
        // 0x1f58dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F58E0u;
        goto label_1f58e0;
    }
    ctx->pc = 0x1F58D8u;
    {
        const bool branch_taken_0x1f58d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F58DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58D8u;
        // 0x1f58dc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f58d8) {
            ctx->pc = 0x1F59CCu;
            goto label_1f59cc;
        }
    }
    ctx->pc = 0x1F58E0u;
label_1f58e0:
    // 0x1f58e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f58e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f58e4:
    // 0x1f58e4: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1f58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_1f58e8:
    // 0x1f58e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1f58e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f58ec:
    // 0x1f58ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f58ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f58f0:
    // 0x1f58f0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1f58f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1f58f4:
    // 0x1f58f4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1f58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1f58f8:
    // 0x1f58f8: 0x40f809  jalr        $v0
label_1f58fc:
    if (ctx->pc == 0x1F58FCu) {
        ctx->pc = 0x1F58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58F8u;
        // 0x1f58fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5900u;
        goto label_1f5900;
    }
    ctx->pc = 0x1F58F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5900u);
        ctx->pc = 0x1F58FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F58F8u;
        // 0x1f58fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F58F8u, 0x1F5900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5900u;
label_1f5900:
    // 0x1f5900: 0xc0e409a  jal         func_390268
label_1f5904:
    if (ctx->pc == 0x1F5904u) {
        ctx->pc = 0x1F5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5900u;
        // 0x1f5904: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5908u;
        goto label_1f5908;
    }
    ctx->pc = 0x1F5900u;
    SET_GPR_U32(ctx, 31, 0x1F5908u);
    ctx->pc = 0x1F5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5900u;
    // 0x1f5904: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F5900u, 0x1F5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5908u;
label_1f5908:
    // 0x1f5908: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f590c:
    // 0x1f590c: 0x24030160  addiu       $v1, $zero, 0x160
    ctx->pc = 0x1f590cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_1f5910:
    // 0x1f5910: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x1f5910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_1f5914:
    // 0x1f5914: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f5918:
    if (ctx->pc == 0x1F5918u) {
        ctx->pc = 0x1F5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5914u;
        // 0x1f5918: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F591Cu;
        goto label_1f591c;
    }
    ctx->pc = 0x1F5914u;
    {
        const bool branch_taken_0x1f5914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5914u;
        // 0x1f5918: 0x8e2200d8  lw          $v0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5914) {
            ctx->pc = 0x1F5924u;
            goto label_1f5924;
        }
    }
    ctx->pc = 0x1F591Cu;
label_1f591c:
    // 0x1f591c: 0x1000000d  b           . + 4 + (0xD << 2)
label_1f5920:
    if (ctx->pc == 0x1F5920u) {
        ctx->pc = 0x1F5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F591Cu;
        // 0x1f5920: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5924u;
        goto label_1f5924;
    }
    ctx->pc = 0x1F591Cu;
    {
        const bool branch_taken_0x1f591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F591Cu;
        // 0x1f5920: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f591c) {
            ctx->pc = 0x1F5954u;
            goto label_1f5954;
        }
    }
    ctx->pc = 0x1F5924u;
label_1f5924:
    // 0x1f5924: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1f5924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f5928:
    // 0x1f5928: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1f5928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1f592c:
    // 0x1f592c: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_1f5930:
    if (ctx->pc == 0x1F5930u) {
        ctx->pc = 0x1F5930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F592Cu;
        // 0x1f5930: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5934u;
        goto label_1f5934;
    }
    ctx->pc = 0x1F592Cu;
    {
        const bool branch_taken_0x1f592c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f592c) {
            ctx->pc = 0x1F5930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F592Cu;
            // 0x1f5930: 0x86230092  lh          $v1, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5958u;
            goto label_1f5958;
        }
    }
    ctx->pc = 0x1F5934u;
label_1f5934:
    // 0x1f5934: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1f5934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1f5938:
    // 0x1f5938: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1f5938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1f593c:
    // 0x1f593c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5940:
    // 0x1f5940: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1f5940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1f5944:
    // 0x1f5944: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1f5944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1f5948:
    // 0x1f5948: 0x40f809  jalr        $v0
label_1f594c:
    if (ctx->pc == 0x1F594Cu) {
        ctx->pc = 0x1F594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5948u;
        // 0x1f594c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5950u;
        goto label_1f5950;
    }
    ctx->pc = 0x1F5948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5950u);
        ctx->pc = 0x1F594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5948u;
        // 0x1f594c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5948u, 0x1F5950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5950u;
label_1f5950:
    // 0x1f5950: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1f5950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_1f5954:
    // 0x1f5954: 0x86230092  lh          $v1, 0x92($s1)
    ctx->pc = 0x1f5954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_1f5958:
    // 0x1f5958: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x1f5958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_1f595c:
    // 0x1f595c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x1f595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_1f5960:
    // 0x1f5960: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f5960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5964:
    // 0x1f5964: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f5964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f5968:
    // 0x1f5968: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f596c:
    // 0x1f596c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1f596cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1f5970:
    // 0x1f5970: 0xc047e6c  jal         func_11F9B0
label_1f5974:
    if (ctx->pc == 0x1F5974u) {
        ctx->pc = 0x1F5974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5970u;
        // 0x1f5974: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5978u;
        goto label_1f5978;
    }
    ctx->pc = 0x1F5970u;
    SET_GPR_U32(ctx, 31, 0x1F5978u);
    ctx->pc = 0x1F5974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5970u;
    // 0x1f5974: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1F5970u, 0x1F5978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5978u;
label_1f5978:
    // 0x1f5978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f5978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f597c:
    // 0x1f597c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1f597cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1f5980:
    // 0x1f5980: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1f5980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1f5984:
    // 0x1f5984: 0xa0f809  jalr        $a1
label_1f5988:
    if (ctx->pc == 0x1F5988u) {
        ctx->pc = 0x1F5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5984u;
        // 0x1f5988: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F598Cu;
        goto label_1f598c;
    }
    ctx->pc = 0x1F5984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F598Cu);
        ctx->pc = 0x1F5988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5984u;
        // 0x1f5988: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5984u, 0x1F598Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F598Cu;
label_1f598c:
    // 0x1f598c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5990:
    // 0x1f5990: 0xc0cd780  jal         func_335E00
label_1f5994:
    if (ctx->pc == 0x1F5994u) {
        ctx->pc = 0x1F5994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5990u;
        // 0x1f5994: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5998u;
        goto label_1f5998;
    }
    ctx->pc = 0x1F5990u;
    SET_GPR_U32(ctx, 31, 0x1F5998u);
    ctx->pc = 0x1F5994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5990u;
    // 0x1f5994: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x1F5990u, 0x1F5998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5998u;
label_1f5998:
    // 0x1f5998: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f5998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1f599c:
    // 0x1f599c: 0xc0cd7a8  jal         func_335EA0
label_1f59a0:
    if (ctx->pc == 0x1F59A0u) {
        ctx->pc = 0x1F59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F599Cu;
        // 0x1f59a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59A4u;
        goto label_1f59a4;
    }
    ctx->pc = 0x1F599Cu;
    SET_GPR_U32(ctx, 31, 0x1F59A4u);
    ctx->pc = 0x1F59A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F599Cu;
    // 0x1f59a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x1F599Cu, 0x1F59A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59A4u;
label_1f59a4:
    // 0x1f59a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f59a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f59a8:
    // 0x1f59a8: 0xc086c40  jal         func_21B100
label_1f59ac:
    if (ctx->pc == 0x1F59ACu) {
        ctx->pc = 0x1F59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59A8u;
        // 0x1f59ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59B0u;
        goto label_1f59b0;
    }
    ctx->pc = 0x1F59A8u;
    SET_GPR_U32(ctx, 31, 0x1F59B0u);
    ctx->pc = 0x1F59ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59A8u;
    // 0x1f59ac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x1F59A8u, 0x1F59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59B0u;
label_1f59b0:
    // 0x1f59b0: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x1f59b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1f59b4:
    // 0x1f59b4: 0xc08e86c  jal         func_23A1B0
label_1f59b8:
    if (ctx->pc == 0x1F59B8u) {
        ctx->pc = 0x1F59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59B4u;
        // 0x1f59b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59BCu;
        goto label_1f59bc;
    }
    ctx->pc = 0x1F59B4u;
    SET_GPR_U32(ctx, 31, 0x1F59BCu);
    ctx->pc = 0x1F59B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59B4u;
    // 0x1f59b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x1F59B4u, 0x1F59BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59BCu;
label_1f59bc:
    // 0x1f59bc: 0xc08dfa6  jal         func_237E98
label_1f59c0:
    if (ctx->pc == 0x1F59C0u) {
        ctx->pc = 0x1F59C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59BCu;
        // 0x1f59c0: 0x8e6400b4  lw          $a0, 0xB4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59C4u;
        goto label_1f59c4;
    }
    ctx->pc = 0x1F59BCu;
    SET_GPR_U32(ctx, 31, 0x1F59C4u);
    ctx->pc = 0x1F59C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59BCu;
    // 0x1f59c0: 0x8e6400b4  lw          $a0, 0xB4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x1F59BCu, 0x1F59C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59C4u;
label_1f59c4:
    // 0x1f59c4: 0x10000036  b           . + 4 + (0x36 << 2)
label_1f59c8:
    if (ctx->pc == 0x1F59C8u) {
        ctx->pc = 0x1F59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59C4u;
        // 0x1f59c8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59CCu;
        goto label_1f59cc;
    }
    ctx->pc = 0x1F59C4u;
    {
        const bool branch_taken_0x1f59c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F59C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59C4u;
        // 0x1f59c8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f59c4) {
            ctx->pc = 0x1F5AA0u;
            goto label_1f5aa0;
        }
    }
    ctx->pc = 0x1F59CCu;
label_1f59cc:
    // 0x1f59cc: 0xc0e409a  jal         func_390268
label_1f59d0:
    if (ctx->pc == 0x1F59D0u) {
        ctx->pc = 0x1F59D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59CCu;
        // 0x1f59d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F59D4u;
        goto label_1f59d4;
    }
    ctx->pc = 0x1F59CCu;
    SET_GPR_U32(ctx, 31, 0x1F59D4u);
    ctx->pc = 0x1F59D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F59CCu;
    // 0x1f59d0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1F59CCu, 0x1F59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F59D4u;
label_1f59d4:
    // 0x1f59d4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1f59d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f59d8:
    // 0x1f59d8: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x1f59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
label_1f59dc:
    // 0x1f59dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f59dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f59e0:
    // 0x1f59e0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1f59e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f59e4:
    // 0x1f59e4: 0x8e0500cc  lw          $a1, 0xCC($s0)
    ctx->pc = 0x1f59e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_1f59e8:
    // 0x1f59e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1f59e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1f59ec:
    // 0x1f59ec: 0x38a50160  xori        $a1, $a1, 0x160
    ctx->pc = 0x1f59ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)352);
label_1f59f0:
    // 0x1f59f0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1f59f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1f59f4:
    // 0x1f59f4: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x1f59f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1f59f8:
    // 0x1f59f8: 0x8c460044  lw          $a2, 0x44($v0)
    ctx->pc = 0x1f59f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1f59fc:
    // 0x1f59fc: 0xc0f809  jalr        $a2
label_1f5a00:
    if (ctx->pc == 0x1F5A00u) {
        ctx->pc = 0x1F5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59FCu;
        // 0x1f5a00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A04u;
        goto label_1f5a04;
    }
    ctx->pc = 0x1F59FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1F5A04u);
        ctx->pc = 0x1F5A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F59FCu;
        // 0x1f5a00: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F59FCu, 0x1F5A04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5A04u;
label_1f5a04:
    // 0x1f5a04: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x1f5a04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_1f5a08:
    // 0x1f5a08: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x1f5a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_1f5a0c:
    // 0x1f5a0c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x1f5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_1f5a10:
    // 0x1f5a10: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1f5a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_1f5a14:
    // 0x1f5a14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f5a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f5a18:
    // 0x1f5a18: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1f5a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1f5a1c:
    // 0x1f5a1c: 0xc07f8a8  jal         func_1FE2A0
label_1f5a20:
    if (ctx->pc == 0x1F5A20u) {
        ctx->pc = 0x1F5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A1Cu;
        // 0x1f5a20: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A24u;
        goto label_1f5a24;
    }
    ctx->pc = 0x1F5A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A24u);
    ctx->pc = 0x1F5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A1Cu;
    // 0x1f5a20: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2A0u, 0x1F5A1Cu, 0x1F5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A24u;
label_1f5a24:
    // 0x1f5a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a28:
    // 0x1f5a28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f5a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a2c:
    // 0x1f5a2c: 0xc086c2e  jal         func_21B0B8
label_1f5a30:
    if (ctx->pc == 0x1F5A30u) {
        ctx->pc = 0x1F5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A2Cu;
        // 0x1f5a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A34u;
        goto label_1f5a34;
    }
    ctx->pc = 0x1F5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A34u);
    ctx->pc = 0x1F5A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A2Cu;
    // 0x1f5a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B0B8u, 0x1F5A2Cu, 0x1F5A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A34u;
label_1f5a34:
    // 0x1f5a34: 0xc047e6c  jal         func_11F9B0
label_1f5a38:
    if (ctx->pc == 0x1F5A38u) {
        ctx->pc = 0x1F5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A34u;
        // 0x1f5a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A3Cu;
        goto label_1f5a3c;
    }
    ctx->pc = 0x1F5A34u;
    SET_GPR_U32(ctx, 31, 0x1F5A3Cu);
    ctx->pc = 0x1F5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A34u;
    // 0x1f5a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1F5A34u, 0x1F5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A3Cu;
label_1f5a3c:
    // 0x1f5a3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5a40:
    // 0x1f5a40: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x1f5a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_1f5a44:
    // 0x1f5a44: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x1f5a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_1f5a48:
    // 0x1f5a48: 0xa0f809  jalr        $a1
label_1f5a4c:
    if (ctx->pc == 0x1F5A4Cu) {
        ctx->pc = 0x1F5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A48u;
        // 0x1f5a4c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A50u;
        goto label_1f5a50;
    }
    ctx->pc = 0x1F5A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1F5A50u);
        ctx->pc = 0x1F5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A48u;
        // 0x1f5a4c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5A48u, 0x1F5A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5A50u;
label_1f5a50:
    // 0x1f5a50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a54:
    // 0x1f5a54: 0xc0cd780  jal         func_335E00
label_1f5a58:
    if (ctx->pc == 0x1F5A58u) {
        ctx->pc = 0x1F5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A54u;
        // 0x1f5a58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A5Cu;
        goto label_1f5a5c;
    }
    ctx->pc = 0x1F5A54u;
    SET_GPR_U32(ctx, 31, 0x1F5A5Cu);
    ctx->pc = 0x1F5A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A54u;
    // 0x1f5a58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x1F5A54u, 0x1F5A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A5Cu;
label_1f5a5c:
    // 0x1f5a5c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f5a5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1f5a60:
    // 0x1f5a60: 0xc0cd7a8  jal         func_335EA0
label_1f5a64:
    if (ctx->pc == 0x1F5A64u) {
        ctx->pc = 0x1F5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A60u;
        // 0x1f5a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A68u;
        goto label_1f5a68;
    }
    ctx->pc = 0x1F5A60u;
    SET_GPR_U32(ctx, 31, 0x1F5A68u);
    ctx->pc = 0x1F5A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A60u;
    // 0x1f5a64: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x1F5A60u, 0x1F5A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A68u;
label_1f5a68:
    // 0x1f5a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a6c:
    // 0x1f5a6c: 0xc086c40  jal         func_21B100
label_1f5a70:
    if (ctx->pc == 0x1F5A70u) {
        ctx->pc = 0x1F5A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A6Cu;
        // 0x1f5a70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A74u;
        goto label_1f5a74;
    }
    ctx->pc = 0x1F5A6Cu;
    SET_GPR_U32(ctx, 31, 0x1F5A74u);
    ctx->pc = 0x1F5A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A6Cu;
    // 0x1f5a70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21B100u, 0x1F5A6Cu, 0x1F5A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A74u;
label_1f5a74:
    // 0x1f5a74: 0x8e6400b4  lw          $a0, 0xB4($s3)
    ctx->pc = 0x1f5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
label_1f5a78:
    // 0x1f5a78: 0xc08e86c  jal         func_23A1B0
label_1f5a7c:
    if (ctx->pc == 0x1F5A7Cu) {
        ctx->pc = 0x1F5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A78u;
        // 0x1f5a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A80u;
        goto label_1f5a80;
    }
    ctx->pc = 0x1F5A78u;
    SET_GPR_U32(ctx, 31, 0x1F5A80u);
    ctx->pc = 0x1F5A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A78u;
    // 0x1f5a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A1B0u, 0x1F5A78u, 0x1F5A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A80u;
label_1f5a80:
    // 0x1f5a80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f5a84:
    // 0x1f5a84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1f5a84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1f5a88:
    // 0x1f5a88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1f5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1f5a8c:
    // 0x1f5a8c: 0x40f809  jalr        $v0
label_1f5a90:
    if (ctx->pc == 0x1F5A90u) {
        ctx->pc = 0x1F5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A8Cu;
        // 0x1f5a90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A94u;
        goto label_1f5a94;
    }
    ctx->pc = 0x1F5A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5A94u);
        ctx->pc = 0x1F5A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A8Cu;
        // 0x1f5a90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5A8Cu, 0x1F5A94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5A94u;
label_1f5a94:
    // 0x1f5a94: 0xc08dfa6  jal         func_237E98
label_1f5a98:
    if (ctx->pc == 0x1F5A98u) {
        ctx->pc = 0x1F5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5A94u;
        // 0x1f5a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5A9Cu;
        goto label_1f5a9c;
    }
    ctx->pc = 0x1F5A94u;
    SET_GPR_U32(ctx, 31, 0x1F5A9Cu);
    ctx->pc = 0x1F5A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5A94u;
    // 0x1f5a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237E98u, 0x1F5A94u, 0x1F5A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5A9Cu;
label_1f5a9c:
    // 0x1f5a9c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1f5a9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1f5aa0:
    // 0x1f5aa0: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1f5aa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1f5aa4:
    // 0x1f5aa4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1f5aa4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1f5aa8:
    // 0x1f5aa8: 0x2ec20009  sltiu       $v0, $s6, 0x9
    ctx->pc = 0x1f5aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f5aac:
    // 0x1f5aac: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
label_1f5ab0:
    if (ctx->pc == 0x1F5AB0u) {
        ctx->pc = 0x1F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AACu;
        // 0x1f5ab0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AB4u;
        goto label_1f5ab4;
    }
    ctx->pc = 0x1F5AACu;
    {
        const bool branch_taken_0x1f5aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AACu;
        // 0x1f5ab0: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5aac) {
            ctx->pc = 0x1F58B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f58b8;
        }
    }
    ctx->pc = 0x1F5AB4u;
label_1f5ab4:
    // 0x1f5ab4: 0x8e450090  lw          $a1, 0x90($s2)
    ctx->pc = 0x1f5ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_1f5ab8:
    // 0x1f5ab8: 0x3c0802d  daddu       $s0, $fp, $zero
    ctx->pc = 0x1f5ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f5abc:
    // 0x1f5abc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f5abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f5ac0:
    // 0x1f5ac0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5ac4:
    // 0x1f5ac4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f5ac4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f5ac8:
    // 0x1f5ac8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f5acc:
    // 0x1f5acc: 0x60f809  jalr        $v1
label_1f5ad0:
    if (ctx->pc == 0x1F5AD0u) {
        ctx->pc = 0x1F5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5ACCu;
        // 0x1f5ad0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AD4u;
        goto label_1f5ad4;
    }
    ctx->pc = 0x1F5ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5AD4u);
        ctx->pc = 0x1F5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5ACCu;
        // 0x1f5ad0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5ACCu, 0x1F5AD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5AD4u;
label_1f5ad4:
    // 0x1f5ad4: 0x8e450170  lw          $a1, 0x170($s2)
    ctx->pc = 0x1f5ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 368)));
label_1f5ad8:
    // 0x1f5ad8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5adc:
    // 0x1f5adc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f5adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f5ae0:
    // 0x1f5ae0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f5ae4:
    // 0x1f5ae4: 0x60f809  jalr        $v1
label_1f5ae8:
    if (ctx->pc == 0x1F5AE8u) {
        ctx->pc = 0x1F5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AE4u;
        // 0x1f5ae8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5AECu;
        goto label_1f5aec;
    }
    ctx->pc = 0x1F5AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5AECu);
        ctx->pc = 0x1F5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AE4u;
        // 0x1f5ae8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5AE4u, 0x1F5AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5AECu;
label_1f5aec:
    // 0x1f5aec: 0x8e450094  lw          $a1, 0x94($s2)
    ctx->pc = 0x1f5aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_1f5af0:
    // 0x1f5af0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5af4:
    // 0x1f5af4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f5af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f5af8:
    // 0x1f5af8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f5af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f5afc:
    // 0x1f5afc: 0x60f809  jalr        $v1
label_1f5b00:
    if (ctx->pc == 0x1F5B00u) {
        ctx->pc = 0x1F5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AFCu;
        // 0x1f5b00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B04u;
        goto label_1f5b04;
    }
    ctx->pc = 0x1F5AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5B04u);
        ctx->pc = 0x1F5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AFCu;
        // 0x1f5b00: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5AFCu, 0x1F5B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5B04u;
label_1f5b04:
    // 0x1f5b04: 0x8e450098  lw          $a1, 0x98($s2)
    ctx->pc = 0x1f5b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_1f5b08:
    // 0x1f5b08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5b0c:
    // 0x1f5b0c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f5b0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f5b10:
    // 0x1f5b10: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f5b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f5b14:
    // 0x1f5b14: 0x60f809  jalr        $v1
label_1f5b18:
    if (ctx->pc == 0x1F5B18u) {
        ctx->pc = 0x1F5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B14u;
        // 0x1f5b18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B1Cu;
        goto label_1f5b1c;
    }
    ctx->pc = 0x1F5B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5B1Cu);
        ctx->pc = 0x1F5B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B14u;
        // 0x1f5b18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B14u, 0x1F5B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5B1Cu;
label_1f5b1c:
    // 0x1f5b1c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1f5b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f5b20:
    // 0x1f5b20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f5b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f5b24:
    // 0x1f5b24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1f5b24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1f5b28:
    // 0x1f5b28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5b2c:
    // 0x1f5b2c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f5b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f5b30:
    // 0x1f5b30: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f5b34:
    // 0x1f5b34: 0x60f809  jalr        $v1
label_1f5b38:
    if (ctx->pc == 0x1F5B38u) {
        ctx->pc = 0x1F5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B34u;
        // 0x1f5b38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B3Cu;
        goto label_1f5b3c;
    }
    ctx->pc = 0x1F5B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5B3Cu);
        ctx->pc = 0x1F5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B34u;
        // 0x1f5b38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B34u, 0x1F5B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5B3Cu;
label_1f5b3c:
    // 0x1f5b3c: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x1f5b3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1f5b40:
    // 0x1f5b40: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1f5b44:
    if (ctx->pc == 0x1F5B44u) {
        ctx->pc = 0x1F5B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B40u;
        // 0x1f5b44: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B48u;
        goto label_1f5b48;
    }
    ctx->pc = 0x1F5B40u;
    {
        const bool branch_taken_0x1f5b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b40) {
            ctx->pc = 0x1F5B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5B40u;
            // 0x1f5b44: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5b20;
        }
    }
    ctx->pc = 0x1F5B48u;
label_1f5b48:
    // 0x1f5b48: 0x8e4500a8  lw          $a1, 0xA8($s2)
    ctx->pc = 0x1f5b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
label_1f5b4c:
    // 0x1f5b4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5b50:
    // 0x1f5b50: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1f5b50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1f5b54:
    // 0x1f5b54: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1f5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1f5b58:
    // 0x1f5b58: 0x60f809  jalr        $v1
label_1f5b5c:
    if (ctx->pc == 0x1F5B5Cu) {
        ctx->pc = 0x1F5B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B58u;
        // 0x1f5b5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B60u;
        goto label_1f5b60;
    }
    ctx->pc = 0x1F5B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F5B60u);
        ctx->pc = 0x1F5B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B58u;
        // 0x1f5b5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B58u, 0x1F5B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F5B60u;
label_1f5b60:
    // 0x1f5b60: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1f5b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f5b64:
    // 0x1f5b64: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1f5b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f5b68:
    // 0x1f5b68: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1f5b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f5b6c:
    // 0x1f5b6c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1f5b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1f5b70:
    // 0x1f5b70: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1f5b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1f5b74:
    // 0x1f5b74: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1f5b74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5b78:
    // 0x1f5b78: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5b78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5b7c:
    // 0x1f5b7c: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1f5b7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5b80:
    // 0x1f5b80: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x1f5b80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5b84:
    // 0x1f5b84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f5b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5b88:
    // 0x1f5b88: 0x3e00008  jr          $ra
label_1f5b8c:
    if (ctx->pc == 0x1F5B8Cu) {
        ctx->pc = 0x1F5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B88u;
        // 0x1f5b8c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F5B90u;
        goto label_fallthrough_0x1f5b88;
    }
    ctx->pc = 0x1F5B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B88u;
        // 0x1f5b8c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f5b88:
    ctx->pc = 0x1F5B90u;
}
