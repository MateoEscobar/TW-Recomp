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

// Function: sub_004F5900
// Address: 0x4f5900 - 0x4f5aa0
void sub_004F5900_0x4f5900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5900_0x4f5900");
#endif

    switch (ctx->pc) {
        case 0x4f5900u: goto label_4f5900;
        case 0x4f5904u: goto label_4f5904;
        case 0x4f5908u: goto label_4f5908;
        case 0x4f590cu: goto label_4f590c;
        case 0x4f5910u: goto label_4f5910;
        case 0x4f5914u: goto label_4f5914;
        case 0x4f5918u: goto label_4f5918;
        case 0x4f591cu: goto label_4f591c;
        case 0x4f5920u: goto label_4f5920;
        case 0x4f5924u: goto label_4f5924;
        case 0x4f5928u: goto label_4f5928;
        case 0x4f592cu: goto label_4f592c;
        case 0x4f5930u: goto label_4f5930;
        case 0x4f5934u: goto label_4f5934;
        case 0x4f5938u: goto label_4f5938;
        case 0x4f593cu: goto label_4f593c;
        case 0x4f5940u: goto label_4f5940;
        case 0x4f5944u: goto label_4f5944;
        case 0x4f5948u: goto label_4f5948;
        case 0x4f594cu: goto label_4f594c;
        case 0x4f5950u: goto label_4f5950;
        case 0x4f5954u: goto label_4f5954;
        case 0x4f5958u: goto label_4f5958;
        case 0x4f595cu: goto label_4f595c;
        case 0x4f5960u: goto label_4f5960;
        case 0x4f5964u: goto label_4f5964;
        case 0x4f5968u: goto label_4f5968;
        case 0x4f596cu: goto label_4f596c;
        case 0x4f5970u: goto label_4f5970;
        case 0x4f5974u: goto label_4f5974;
        case 0x4f5978u: goto label_4f5978;
        case 0x4f597cu: goto label_4f597c;
        case 0x4f5980u: goto label_4f5980;
        case 0x4f5984u: goto label_4f5984;
        case 0x4f5988u: goto label_4f5988;
        case 0x4f598cu: goto label_4f598c;
        case 0x4f5990u: goto label_4f5990;
        case 0x4f5994u: goto label_4f5994;
        case 0x4f5998u: goto label_4f5998;
        case 0x4f599cu: goto label_4f599c;
        case 0x4f59a0u: goto label_4f59a0;
        case 0x4f59a4u: goto label_4f59a4;
        case 0x4f59a8u: goto label_4f59a8;
        case 0x4f59acu: goto label_4f59ac;
        case 0x4f59b0u: goto label_4f59b0;
        case 0x4f59b4u: goto label_4f59b4;
        case 0x4f59b8u: goto label_4f59b8;
        case 0x4f59bcu: goto label_4f59bc;
        case 0x4f59c0u: goto label_4f59c0;
        case 0x4f59c4u: goto label_4f59c4;
        case 0x4f59c8u: goto label_4f59c8;
        case 0x4f59ccu: goto label_4f59cc;
        case 0x4f59d0u: goto label_4f59d0;
        case 0x4f59d4u: goto label_4f59d4;
        case 0x4f59d8u: goto label_4f59d8;
        case 0x4f59dcu: goto label_4f59dc;
        case 0x4f59e0u: goto label_4f59e0;
        case 0x4f59e4u: goto label_4f59e4;
        case 0x4f59e8u: goto label_4f59e8;
        case 0x4f59ecu: goto label_4f59ec;
        case 0x4f59f0u: goto label_4f59f0;
        case 0x4f59f4u: goto label_4f59f4;
        case 0x4f59f8u: goto label_4f59f8;
        case 0x4f59fcu: goto label_4f59fc;
        case 0x4f5a00u: goto label_4f5a00;
        case 0x4f5a04u: goto label_4f5a04;
        case 0x4f5a08u: goto label_4f5a08;
        case 0x4f5a0cu: goto label_4f5a0c;
        case 0x4f5a10u: goto label_4f5a10;
        case 0x4f5a14u: goto label_4f5a14;
        case 0x4f5a18u: goto label_4f5a18;
        case 0x4f5a1cu: goto label_4f5a1c;
        case 0x4f5a20u: goto label_4f5a20;
        case 0x4f5a24u: goto label_4f5a24;
        case 0x4f5a28u: goto label_4f5a28;
        case 0x4f5a2cu: goto label_4f5a2c;
        case 0x4f5a30u: goto label_4f5a30;
        case 0x4f5a34u: goto label_4f5a34;
        case 0x4f5a38u: goto label_4f5a38;
        case 0x4f5a3cu: goto label_4f5a3c;
        case 0x4f5a40u: goto label_4f5a40;
        case 0x4f5a44u: goto label_4f5a44;
        case 0x4f5a48u: goto label_4f5a48;
        case 0x4f5a4cu: goto label_4f5a4c;
        case 0x4f5a50u: goto label_4f5a50;
        case 0x4f5a54u: goto label_4f5a54;
        case 0x4f5a58u: goto label_4f5a58;
        case 0x4f5a5cu: goto label_4f5a5c;
        case 0x4f5a60u: goto label_4f5a60;
        case 0x4f5a64u: goto label_4f5a64;
        case 0x4f5a68u: goto label_4f5a68;
        case 0x4f5a6cu: goto label_4f5a6c;
        case 0x4f5a70u: goto label_4f5a70;
        case 0x4f5a74u: goto label_4f5a74;
        case 0x4f5a78u: goto label_4f5a78;
        case 0x4f5a7cu: goto label_4f5a7c;
        case 0x4f5a80u: goto label_4f5a80;
        case 0x4f5a84u: goto label_4f5a84;
        case 0x4f5a88u: goto label_4f5a88;
        case 0x4f5a8cu: goto label_4f5a8c;
        case 0x4f5a90u: goto label_4f5a90;
        case 0x4f5a94u: goto label_4f5a94;
        case 0x4f5a98u: goto label_4f5a98;
        case 0x4f5a9cu: goto label_4f5a9c;
        default: break;
    }

    ctx->pc = 0x4f5900u;

label_4f5900:
    // 0x4f5900: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4f5900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4f5904:
    // 0x4f5904: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4f5904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4f5908:
    // 0x4f5908: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4f5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4f590c:
    // 0x4f590c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f590cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5910:
    // 0x4f5910: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4f5910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4f5914:
    // 0x4f5914: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f5914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f5918:
    // 0x4f5918: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4f5918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4f591c:
    // 0x4f591c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4f591cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4f5920:
    // 0x4f5920: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f5920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f5924:
    // 0x4f5924: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4f5924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4f5928:
    // 0x4f5928: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4f5928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4f592c:
    // 0x4f592c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f5930:
    // 0x4f5930: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4f5930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4f5934:
    // 0x4f5934: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4f5934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4f5938:
    // 0x4f5938: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4f593c:
    if (ctx->pc == 0x4F593Cu) {
        ctx->pc = 0x4F593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5938u;
        // 0x4f593c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5940u;
        goto label_4f5940;
    }
    ctx->pc = 0x4F5938u;
    {
        const bool branch_taken_0x4f5938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F593Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5938u;
        // 0x4f593c: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5938) {
            ctx->pc = 0x4F5984u;
            goto label_4f5984;
        }
    }
    ctx->pc = 0x4F5940u;
label_4f5940:
    // 0x4f5940: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4f5944:
    if (ctx->pc == 0x4F5944u) {
        ctx->pc = 0x4F5944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5940u;
        // 0x4f5944: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5948u;
        goto label_4f5948;
    }
    ctx->pc = 0x4F5940u;
    {
        const bool branch_taken_0x4f5940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5940) {
            ctx->pc = 0x4F5944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5940u;
            // 0x4f5944: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5954u;
            goto label_4f5954;
        }
    }
    ctx->pc = 0x4F5948u;
label_4f5948:
    // 0x4f5948: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4f5948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4f594c:
    // 0x4f594c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4f594cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4f5950:
    // 0x4f5950: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4f5950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4f5954:
    // 0x4f5954: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f5954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f5958:
    // 0x4f5958: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4f5958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4f595c:
    // 0x4f595c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4f595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4f5960:
    // 0x4f5960: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4f5960u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4f5964:
    // 0x4f5964: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4f5964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4f5968:
    // 0x4f5968: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f5968u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f596c:
    // 0x4f596c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f596cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f5970:
    // 0x4f5970: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4f5970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4f5974:
    // 0x4f5974: 0xc10c1bb  jal         func_4306EC
label_4f5978:
    if (ctx->pc == 0x4F5978u) {
        ctx->pc = 0x4F5978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5974u;
        // 0x4f5978: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F597Cu;
        goto label_4f597c;
    }
    ctx->pc = 0x4F5974u;
    SET_GPR_U32(ctx, 31, 0x4F597Cu);
    ctx->pc = 0x4F5978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5974u;
    // 0x4f5978: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F5974u, 0x4F597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F597Cu;
label_4f597c:
    // 0x4f597c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4f5980:
    if (ctx->pc == 0x4F5980u) {
        ctx->pc = 0x4F5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F597Cu;
        // 0x4f5980: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5984u;
        goto label_4f5984;
    }
    ctx->pc = 0x4F597Cu;
    {
        const bool branch_taken_0x4f597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F597Cu;
        // 0x4f5980: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f597c) {
            ctx->pc = 0x4F5A74u;
            goto label_4f5a74;
        }
    }
    ctx->pc = 0x4F5984u;
label_4f5984:
    // 0x4f5984: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4f5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f5988:
    // 0x4f5988: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4f5988u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4f598c:
    // 0x4f598c: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4f598cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4f5990:
    // 0x4f5990: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4f5990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_4f5994:
    // 0x4f5994: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4f5994u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f5998:
    // 0x4f5998: 0x24968d70  addiu       $s6, $a0, -0x7290
    ctx->pc = 0x4f5998u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937968));
label_4f599c:
    // 0x4f599c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4f599cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4f59a0:
    // 0x4f59a0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4f59a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4f59a4:
    // 0x4f59a4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4f59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4f59a8:
    // 0x4f59a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f59a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f59ac:
    // 0x4f59ac: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4f59acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4f59b0:
    // 0x4f59b0: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4f59b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4f59b4:
    // 0x4f59b4: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4f59b4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f59b8:
    // 0x4f59b8: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4f59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4f59bc:
    // 0x4f59bc: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4f59bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4f59c0:
    // 0x4f59c0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4f59c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4f59c4:
    // 0x4f59c4: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x4f59c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
label_4f59c8:
    // 0x4f59c8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4f59c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f59cc:
    // 0x4f59cc: 0x24a58d98  addiu       $a1, $a1, -0x7268
    ctx->pc = 0x4f59ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938008));
label_4f59d0:
    // 0x4f59d0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4f59d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f59d4:
    // 0x4f59d4: 0x254a8da0  addiu       $t2, $t2, -0x7260
    ctx->pc = 0x4f59d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294938016));
label_4f59d8:
    // 0x4f59d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f59d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f59dc:
    // 0x4f59dc: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f59dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f59e0:
    // 0x4f59e0: 0x40f809  jalr        $v0
label_4f59e4:
    if (ctx->pc == 0x4F59E4u) {
        ctx->pc = 0x4F59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F59E0u;
        // 0x4f59e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F59E8u;
        goto label_4f59e8;
    }
    ctx->pc = 0x4F59E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F59E8u);
        ctx->pc = 0x4F59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F59E0u;
        // 0x4f59e4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F59E0u, 0x4F59E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F59E8u;
label_4f59e8:
    // 0x4f59e8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4f59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f59ec:
    // 0x4f59ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f59ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f59f0:
    // 0x4f59f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f59f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f59f4:
    // 0x4f59f4: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4f59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4f59f8:
    // 0x4f59f8: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4f59f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4f59fc:
    // 0x4f59fc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4f59fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4f5a00:
    // 0x4f5a00: 0xc10c1bb  jal         func_4306EC
label_4f5a04:
    if (ctx->pc == 0x4F5A04u) {
        ctx->pc = 0x4F5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A00u;
        // 0x4f5a04: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5A08u;
        goto label_4f5a08;
    }
    ctx->pc = 0x4F5A00u;
    SET_GPR_U32(ctx, 31, 0x4F5A08u);
    ctx->pc = 0x4F5A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5A00u;
    // 0x4f5a04: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F5A00u, 0x4F5A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5A08u;
label_4f5a08:
    // 0x4f5a08: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4f5a0c:
    if (ctx->pc == 0x4F5A0Cu) {
        ctx->pc = 0x4F5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A08u;
        // 0x4f5a0c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5A10u;
        goto label_4f5a10;
    }
    ctx->pc = 0x4F5A08u;
    {
        const bool branch_taken_0x4f5a08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5a08) {
            ctx->pc = 0x4F5A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5A08u;
            // 0x4f5a0c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5A1Cu;
            goto label_4f5a1c;
        }
    }
    ctx->pc = 0x4F5A10u;
label_4f5a10:
    // 0x4f5a10: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4f5a14:
    // 0x4f5a14: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f5a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4f5a18:
    // 0x4f5a18: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4f5a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4f5a1c:
    // 0x4f5a1c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4f5a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4f5a20:
    // 0x4f5a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f5a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f5a24:
    // 0x4f5a24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f5a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f5a28:
    // 0x4f5a28: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4f5a28u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4f5a2c:
    // 0x4f5a2c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4f5a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4f5a30:
    // 0x4f5a30: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f5a30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f5a34:
    // 0x4f5a34: 0xc10c1bb  jal         func_4306EC
label_4f5a38:
    if (ctx->pc == 0x4F5A38u) {
        ctx->pc = 0x4F5A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A34u;
        // 0x4f5a38: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5A3Cu;
        goto label_4f5a3c;
    }
    ctx->pc = 0x4F5A34u;
    SET_GPR_U32(ctx, 31, 0x4F5A3Cu);
    ctx->pc = 0x4F5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5A34u;
    // 0x4f5a38: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F5A34u, 0x4F5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5A3Cu;
label_4f5a3c:
    // 0x4f5a3c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4f5a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f5a40:
    // 0x4f5a40: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4f5a44:
    if (ctx->pc == 0x4F5A44u) {
        ctx->pc = 0x4F5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A40u;
        // 0x4f5a44: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5A48u;
        goto label_4f5a48;
    }
    ctx->pc = 0x4F5A40u;
    {
        const bool branch_taken_0x4f5a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A40u;
        // 0x4f5a44: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5a40) {
            ctx->pc = 0x4F5A64u;
            goto label_4f5a64;
        }
    }
    ctx->pc = 0x4F5A48u;
label_4f5a48:
    // 0x4f5a48: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4f5a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f5a4c:
    // 0x4f5a4c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f5a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f5a50:
    // 0x4f5a50: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5a54:
    // 0x4f5a54: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f5a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5a58:
    // 0x4f5a58: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5a5c:
    // 0x4f5a5c: 0x60f809  jalr        $v1
label_4f5a60:
    if (ctx->pc == 0x4F5A60u) {
        ctx->pc = 0x4F5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A5Cu;
        // 0x4f5a60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5A64u;
        goto label_4f5a64;
    }
    ctx->pc = 0x4F5A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5A64u);
        ctx->pc = 0x4F5A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A5Cu;
        // 0x4f5a60: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5A5Cu, 0x4F5A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5A64u;
label_4f5a64:
    // 0x4f5a64: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4f5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4f5a68:
    // 0x4f5a68: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4f5a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4f5a6c:
    // 0x4f5a6c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4f5a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4f5a70:
    // 0x4f5a70: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4f5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4f5a74:
    // 0x4f5a74: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4f5a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f5a78:
    // 0x4f5a78: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4f5a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f5a7c:
    // 0x4f5a7c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4f5a7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f5a80:
    // 0x4f5a80: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4f5a80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f5a84:
    // 0x4f5a84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f5a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f5a88:
    // 0x4f5a88: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4f5a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5a8c:
    // 0x4f5a8c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4f5a8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f5a90:
    // 0x4f5a90: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4f5a90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5a94:
    // 0x4f5a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5a98:
    // 0x4f5a98: 0x3e00008  jr          $ra
label_4f5a9c:
    if (ctx->pc == 0x4F5A9Cu) {
        ctx->pc = 0x4F5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A98u;
        // 0x4f5a9c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5AA0u;
        goto label_fallthrough_0x4f5a98;
    }
    ctx->pc = 0x4F5A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5A98u;
        // 0x4f5a9c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f5a98:
    ctx->pc = 0x4F5AA0u;
}
