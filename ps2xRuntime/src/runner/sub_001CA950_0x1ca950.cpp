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

// Function: sub_001CA950
// Address: 0x1ca950 - 0x1cab90
void sub_001CA950_0x1ca950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA950_0x1ca950");
#endif

    switch (ctx->pc) {
        case 0x1ca950u: goto label_1ca950;
        case 0x1ca954u: goto label_1ca954;
        case 0x1ca958u: goto label_1ca958;
        case 0x1ca95cu: goto label_1ca95c;
        case 0x1ca960u: goto label_1ca960;
        case 0x1ca964u: goto label_1ca964;
        case 0x1ca968u: goto label_1ca968;
        case 0x1ca96cu: goto label_1ca96c;
        case 0x1ca970u: goto label_1ca970;
        case 0x1ca974u: goto label_1ca974;
        case 0x1ca978u: goto label_1ca978;
        case 0x1ca97cu: goto label_1ca97c;
        case 0x1ca980u: goto label_1ca980;
        case 0x1ca984u: goto label_1ca984;
        case 0x1ca988u: goto label_1ca988;
        case 0x1ca98cu: goto label_1ca98c;
        case 0x1ca990u: goto label_1ca990;
        case 0x1ca994u: goto label_1ca994;
        case 0x1ca998u: goto label_1ca998;
        case 0x1ca99cu: goto label_1ca99c;
        case 0x1ca9a0u: goto label_1ca9a0;
        case 0x1ca9a4u: goto label_1ca9a4;
        case 0x1ca9a8u: goto label_1ca9a8;
        case 0x1ca9acu: goto label_1ca9ac;
        case 0x1ca9b0u: goto label_1ca9b0;
        case 0x1ca9b4u: goto label_1ca9b4;
        case 0x1ca9b8u: goto label_1ca9b8;
        case 0x1ca9bcu: goto label_1ca9bc;
        case 0x1ca9c0u: goto label_1ca9c0;
        case 0x1ca9c4u: goto label_1ca9c4;
        case 0x1ca9c8u: goto label_1ca9c8;
        case 0x1ca9ccu: goto label_1ca9cc;
        case 0x1ca9d0u: goto label_1ca9d0;
        case 0x1ca9d4u: goto label_1ca9d4;
        case 0x1ca9d8u: goto label_1ca9d8;
        case 0x1ca9dcu: goto label_1ca9dc;
        case 0x1ca9e0u: goto label_1ca9e0;
        case 0x1ca9e4u: goto label_1ca9e4;
        case 0x1ca9e8u: goto label_1ca9e8;
        case 0x1ca9ecu: goto label_1ca9ec;
        case 0x1ca9f0u: goto label_1ca9f0;
        case 0x1ca9f4u: goto label_1ca9f4;
        case 0x1ca9f8u: goto label_1ca9f8;
        case 0x1ca9fcu: goto label_1ca9fc;
        case 0x1caa00u: goto label_1caa00;
        case 0x1caa04u: goto label_1caa04;
        case 0x1caa08u: goto label_1caa08;
        case 0x1caa0cu: goto label_1caa0c;
        case 0x1caa10u: goto label_1caa10;
        case 0x1caa14u: goto label_1caa14;
        case 0x1caa18u: goto label_1caa18;
        case 0x1caa1cu: goto label_1caa1c;
        case 0x1caa20u: goto label_1caa20;
        case 0x1caa24u: goto label_1caa24;
        case 0x1caa28u: goto label_1caa28;
        case 0x1caa2cu: goto label_1caa2c;
        case 0x1caa30u: goto label_1caa30;
        case 0x1caa34u: goto label_1caa34;
        case 0x1caa38u: goto label_1caa38;
        case 0x1caa3cu: goto label_1caa3c;
        case 0x1caa40u: goto label_1caa40;
        case 0x1caa44u: goto label_1caa44;
        case 0x1caa48u: goto label_1caa48;
        case 0x1caa4cu: goto label_1caa4c;
        case 0x1caa50u: goto label_1caa50;
        case 0x1caa54u: goto label_1caa54;
        case 0x1caa58u: goto label_1caa58;
        case 0x1caa5cu: goto label_1caa5c;
        case 0x1caa60u: goto label_1caa60;
        case 0x1caa64u: goto label_1caa64;
        case 0x1caa68u: goto label_1caa68;
        case 0x1caa6cu: goto label_1caa6c;
        case 0x1caa70u: goto label_1caa70;
        case 0x1caa74u: goto label_1caa74;
        case 0x1caa78u: goto label_1caa78;
        case 0x1caa7cu: goto label_1caa7c;
        case 0x1caa80u: goto label_1caa80;
        case 0x1caa84u: goto label_1caa84;
        case 0x1caa88u: goto label_1caa88;
        case 0x1caa8cu: goto label_1caa8c;
        case 0x1caa90u: goto label_1caa90;
        case 0x1caa94u: goto label_1caa94;
        case 0x1caa98u: goto label_1caa98;
        case 0x1caa9cu: goto label_1caa9c;
        case 0x1caaa0u: goto label_1caaa0;
        case 0x1caaa4u: goto label_1caaa4;
        case 0x1caaa8u: goto label_1caaa8;
        case 0x1caaacu: goto label_1caaac;
        case 0x1caab0u: goto label_1caab0;
        case 0x1caab4u: goto label_1caab4;
        case 0x1caab8u: goto label_1caab8;
        case 0x1caabcu: goto label_1caabc;
        case 0x1caac0u: goto label_1caac0;
        case 0x1caac4u: goto label_1caac4;
        case 0x1caac8u: goto label_1caac8;
        case 0x1caaccu: goto label_1caacc;
        case 0x1caad0u: goto label_1caad0;
        case 0x1caad4u: goto label_1caad4;
        case 0x1caad8u: goto label_1caad8;
        case 0x1caadcu: goto label_1caadc;
        case 0x1caae0u: goto label_1caae0;
        case 0x1caae4u: goto label_1caae4;
        case 0x1caae8u: goto label_1caae8;
        case 0x1caaecu: goto label_1caaec;
        case 0x1caaf0u: goto label_1caaf0;
        case 0x1caaf4u: goto label_1caaf4;
        case 0x1caaf8u: goto label_1caaf8;
        case 0x1caafcu: goto label_1caafc;
        case 0x1cab00u: goto label_1cab00;
        case 0x1cab04u: goto label_1cab04;
        case 0x1cab08u: goto label_1cab08;
        case 0x1cab0cu: goto label_1cab0c;
        case 0x1cab10u: goto label_1cab10;
        case 0x1cab14u: goto label_1cab14;
        case 0x1cab18u: goto label_1cab18;
        case 0x1cab1cu: goto label_1cab1c;
        case 0x1cab20u: goto label_1cab20;
        case 0x1cab24u: goto label_1cab24;
        case 0x1cab28u: goto label_1cab28;
        case 0x1cab2cu: goto label_1cab2c;
        case 0x1cab30u: goto label_1cab30;
        case 0x1cab34u: goto label_1cab34;
        case 0x1cab38u: goto label_1cab38;
        case 0x1cab3cu: goto label_1cab3c;
        case 0x1cab40u: goto label_1cab40;
        case 0x1cab44u: goto label_1cab44;
        case 0x1cab48u: goto label_1cab48;
        case 0x1cab4cu: goto label_1cab4c;
        case 0x1cab50u: goto label_1cab50;
        case 0x1cab54u: goto label_1cab54;
        case 0x1cab58u: goto label_1cab58;
        case 0x1cab5cu: goto label_1cab5c;
        case 0x1cab60u: goto label_1cab60;
        case 0x1cab64u: goto label_1cab64;
        case 0x1cab68u: goto label_1cab68;
        case 0x1cab6cu: goto label_1cab6c;
        case 0x1cab70u: goto label_1cab70;
        case 0x1cab74u: goto label_1cab74;
        case 0x1cab78u: goto label_1cab78;
        case 0x1cab7cu: goto label_1cab7c;
        case 0x1cab80u: goto label_1cab80;
        case 0x1cab84u: goto label_1cab84;
        case 0x1cab88u: goto label_1cab88;
        case 0x1cab8cu: goto label_1cab8c;
        default: break;
    }

    ctx->pc = 0x1ca950u;

label_1ca950:
    // 0x1ca950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ca950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ca954:
    // 0x1ca954: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1ca954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1ca958:
    // 0x1ca958: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1ca958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1ca95c:
    // 0x1ca95c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1ca95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1ca960:
    // 0x1ca960: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca964:
    // 0x1ca964: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1ca964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1ca968:
    // 0x1ca968: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca96c:
    // 0x1ca96c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1ca96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1ca970:
    // 0x1ca970: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ca974:
    // 0x1ca974: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1ca974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1ca978:
    // 0x1ca978: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_1ca97c:
    if (ctx->pc == 0x1CA97Cu) {
        ctx->pc = 0x1CA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA978u;
        // 0x1ca97c: 0xac64ea78  sw          $a0, -0x1588($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961784), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA980u;
        goto label_1ca980;
    }
    ctx->pc = 0x1CA978u;
    {
        const bool branch_taken_0x1ca978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA978u;
        // 0x1ca97c: 0xac64ea78  sw          $a0, -0x1588($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961784), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca978) {
            ctx->pc = 0x1CAB6Cu;
            goto label_1cab6c;
        }
    }
    ctx->pc = 0x1CA980u;
label_1ca980:
    // 0x1ca980: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x1ca980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1ca984:
    // 0x1ca984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca988:
    // 0x1ca988: 0x38c20002  xori        $v0, $a2, 0x2
    ctx->pc = 0x1ca988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
label_1ca98c:
    // 0x1ca98c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1ca990:
    if (ctx->pc == 0x1CA990u) {
        ctx->pc = 0x1CA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA98Cu;
        // 0x1ca990: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA994u;
        goto label_1ca994;
    }
    ctx->pc = 0x1CA98Cu;
    {
        const bool branch_taken_0x1ca98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA98Cu;
        // 0x1ca990: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca98c) {
            ctx->pc = 0x1CA9A8u;
            goto label_1ca9a8;
        }
    }
    ctx->pc = 0x1CA994u;
label_1ca994:
    // 0x1ca994: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ca994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ca998:
    // 0x1ca998: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ca998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca99c:
    // 0x1ca99c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1ca99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1ca9a0:
    // 0x1ca9a0: 0x8c640438  lw          $a0, 0x438($v1)
    ctx->pc = 0x1ca9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1080)));
label_1ca9a4:
    // 0x1ca9a4: 0x4280b  movn        $a1, $zero, $a0
    ctx->pc = 0x1ca9a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
label_1ca9a8:
    // 0x1ca9a8: 0x14a00071  bnez        $a1, . + 4 + (0x71 << 2)
label_1ca9ac:
    if (ctx->pc == 0x1CA9ACu) {
        ctx->pc = 0x1CA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9A8u;
        // 0x1ca9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9B0u;
        goto label_1ca9b0;
    }
    ctx->pc = 0x1CA9A8u;
    {
        const bool branch_taken_0x1ca9a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9A8u;
        // 0x1ca9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9a8) {
            ctx->pc = 0x1CAB70u;
            goto label_1cab70;
        }
    }
    ctx->pc = 0x1CA9B0u;
label_1ca9b0:
    // 0x1ca9b0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1ca9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1ca9b4:
    // 0x1ca9b4: 0x10a0006d  beqz        $a1, . + 4 + (0x6D << 2)
label_1ca9b8:
    if (ctx->pc == 0x1CA9B8u) {
        ctx->pc = 0x1CA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9B4u;
        // 0x1ca9b8: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9BCu;
        goto label_1ca9bc;
    }
    ctx->pc = 0x1CA9B4u;
    {
        const bool branch_taken_0x1ca9b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9B4u;
        // 0x1ca9b8: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9b4) {
            ctx->pc = 0x1CAB6Cu;
            goto label_1cab6c;
        }
    }
    ctx->pc = 0x1CA9BCu;
label_1ca9bc:
    // 0x1ca9bc: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
label_1ca9c0:
    if (ctx->pc == 0x1CA9C0u) {
        ctx->pc = 0x1CA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9BCu;
        // 0x1ca9c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9C4u;
        goto label_1ca9c4;
    }
    ctx->pc = 0x1CA9BCu;
    {
        const bool branch_taken_0x1ca9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9BCu;
        // 0x1ca9c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9bc) {
            ctx->pc = 0x1CAB70u;
            goto label_1cab70;
        }
    }
    ctx->pc = 0x1CA9C4u;
label_1ca9c4:
    // 0x1ca9c4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1ca9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_1ca9c8:
    // 0x1ca9c8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1ca9c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1ca9cc:
    // 0x1ca9cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ca9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca9d0:
    // 0x1ca9d0: 0x14d30004  bne         $a2, $s3, . + 4 + (0x4 << 2)
label_1ca9d4:
    if (ctx->pc == 0x1CA9D4u) {
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9D0u;
        // 0x1ca9d4: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9D8u;
        goto label_1ca9d8;
    }
    ctx->pc = 0x1CA9D0u;
    {
        const bool branch_taken_0x1ca9d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 19));
        ctx->pc = 0x1CA9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9D0u;
        // 0x1ca9d4: 0x26300060  addiu       $s0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca9d0) {
            ctx->pc = 0x1CA9E4u;
            goto label_1ca9e4;
        }
    }
    ctx->pc = 0x1CA9D8u;
label_1ca9d8:
    // 0x1ca9d8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1ca9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_1ca9dc:
    // 0x1ca9dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ca9dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1ca9e0:
    // 0x1ca9e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ca9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ca9e4:
    // 0x1ca9e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca9e8:
    // 0x1ca9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ca9ec:
    // 0x1ca9ec: 0xc070630  jal         func_1C18C0
label_1ca9f0:
    if (ctx->pc == 0x1CA9F0u) {
        ctx->pc = 0x1CA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA9ECu;
        // 0x1ca9f0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CA9F4u;
        goto label_1ca9f4;
    }
    ctx->pc = 0x1CA9ECu;
    SET_GPR_U32(ctx, 31, 0x1CA9F4u);
    ctx->pc = 0x1CA9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA9ECu;
    // 0x1ca9f0: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C18C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C18C0u, 0x1CA9ECu, 0x1CA9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9F4u;
label_1ca9f4:
    // 0x1ca9f4: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1ca9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
label_1ca9f8:
    // 0x1ca9f8: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1ca9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1ca9fc:
    // 0x1ca9fc: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1ca9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1caa00:
    // 0x1caa00: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1caa00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1caa04:
    // 0x1caa04: 0x14930051  bne         $a0, $s3, . + 4 + (0x51 << 2)
label_1caa08:
    if (ctx->pc == 0x1CAA08u) {
        ctx->pc = 0x1CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA04u;
        // 0x1caa08: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAA0Cu;
        goto label_1caa0c;
    }
    ctx->pc = 0x1CAA04u;
    {
        const bool branch_taken_0x1caa04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x1CAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA04u;
        // 0x1caa08: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa04) {
            ctx->pc = 0x1CAB4Cu;
            goto label_1cab4c;
        }
    }
    ctx->pc = 0x1CAA0Cu;
label_1caa0c:
    // 0x1caa0c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1caa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1caa10:
    // 0x1caa10: 0x241305dc  addiu       $s3, $zero, 0x5DC
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_1caa14:
    // 0x1caa14: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1caa14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1caa18:
    // 0x1caa18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1caa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1caa1c:
    // 0x1caa1c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1caa1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1caa20:
    // 0x1caa20: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1caa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1caa24:
    // 0x1caa24: 0x40f809  jalr        $v0
label_1caa28:
    if (ctx->pc == 0x1CAA28u) {
        ctx->pc = 0x1CAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA24u;
        // 0x1caa28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAA2Cu;
        goto label_1caa2c;
    }
    ctx->pc = 0x1CAA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAA2Cu);
        ctx->pc = 0x1CAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA24u;
        // 0x1caa28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAA24u, 0x1CAA2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CAA2Cu;
label_1caa2c:
    // 0x1caa2c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x1caa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_1caa30:
    // 0x1caa30: 0x2442ec78  addiu       $v0, $v0, -0x1388
    ctx->pc = 0x1caa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962296));
label_1caa34:
    // 0x1caa34: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x1caa34u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1caa38:
    // 0x1caa38: 0x2e020dac  sltiu       $v0, $s0, 0xDAC
    ctx->pc = 0x1caa38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3500) ? 1 : 0);
label_1caa3c:
    // 0x1caa3c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1caa40:
    if (ctx->pc == 0x1CAA40u) {
        ctx->pc = 0x1CAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA3Cu;
        // 0x1caa40: 0x270102b  sltu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAA44u;
        goto label_1caa44;
    }
    ctx->pc = 0x1CAA3Cu;
    {
        const bool branch_taken_0x1caa3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA3Cu;
        // 0x1caa40: 0x270102b  sltu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa3c) {
            ctx->pc = 0x1CAAB4u;
            goto label_1caab4;
        }
    }
    ctx->pc = 0x1CAA44u;
label_1caa44:
    // 0x1caa44: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1caa48:
    if (ctx->pc == 0x1CAA48u) {
        ctx->pc = 0x1CAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA44u;
        // 0x1caa48: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAA4Cu;
        goto label_1caa4c;
    }
    ctx->pc = 0x1CAA44u;
    {
        const bool branch_taken_0x1caa44 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1CAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAA44u;
        // 0x1caa48: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caa44) {
            ctx->pc = 0x1CAA60u;
            goto label_1caa60;
        }
    }
    ctx->pc = 0x1CAA4Cu;
label_1caa4c:
    // 0x1caa4c: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1caa4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caa50:
    // 0x1caa50: 0x0  nop
    ctx->pc = 0x1caa50u;
    // NOP
label_1caa54:
    // 0x1caa54: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1caa54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1caa58:
    // 0x1caa58: 0x10000007  b           . + 4 + (0x7 << 2)
label_1caa5c:
    if (ctx->pc == 0x1CAA5Cu) {
        ctx->pc = 0x1CAA60u;
        goto label_1caa60;
    }
    ctx->pc = 0x1CAA58u;
    {
        const bool branch_taken_0x1caa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caa58) {
            ctx->pc = 0x1CAA78u;
            goto label_1caa78;
        }
    }
    ctx->pc = 0x1CAA60u;
label_1caa60:
    // 0x1caa60: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1caa64:
    // 0x1caa64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1caa64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1caa68:
    // 0x1caa68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1caa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caa6c:
    // 0x1caa6c: 0x0  nop
    ctx->pc = 0x1caa6cu;
    // NOP
label_1caa70:
    // 0x1caa70: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1caa70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1caa74:
    // 0x1caa74: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1caa74u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1caa78:
    // 0x1caa78: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x1caa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
label_1caa7c:
    // 0x1caa7c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1caa7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
label_1caa80:
    // 0x1caa80: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1caa80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1caa84:
    // 0x1caa84: 0x3c01455a  lui         $at, 0x455A
    ctx->pc = 0x1caa84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17754 << 16));
label_1caa88:
    // 0x1caa88: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x1caa88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
label_1caa8c:
    // 0x1caa8c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1caa8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1caa90:
    // 0x1caa90: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1caa90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1caa94:
    // 0x1caa94: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1caa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1caa98:
    // 0x1caa98: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1caa98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1caa9c:
    // 0x1caa9c: 0xc0cdd5a  jal         func_337568
label_1caaa0:
    if (ctx->pc == 0x1CAAA0u) {
        ctx->pc = 0x1CAAA4u;
        goto label_1caaa4;
    }
    ctx->pc = 0x1CAA9Cu;
    SET_GPR_U32(ctx, 31, 0x1CAAA4u);
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1CAA9Cu, 0x1CAAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAA4u;
label_1caaa4:
    // 0x1caaa4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1caaa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1caaa8:
    // 0x1caaa8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1caaa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1caaac:
    // 0x1caaac: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1caaacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_1caab0:
    // 0x1caab0: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x1caab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1caab4:
    // 0x1caab4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_1caab8:
    if (ctx->pc == 0x1CAAB8u) {
        ctx->pc = 0x1CAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAB4u;
        // 0x1caab8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAABCu;
        goto label_1caabc;
    }
    ctx->pc = 0x1CAAB4u;
    {
        const bool branch_taken_0x1caab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAAB4u;
        // 0x1caab8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caab4) {
            ctx->pc = 0x1CAB50u;
            goto label_1cab50;
        }
    }
    ctx->pc = 0x1CAABCu;
label_1caabc:
    // 0x1caabc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_1caac0:
    if (ctx->pc == 0x1CAAC0u) {
        ctx->pc = 0x1CAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAABCu;
        // 0x1caac0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAAC4u;
        goto label_1caac4;
    }
    ctx->pc = 0x1CAABCu;
    {
        const bool branch_taken_0x1caabc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1CAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAABCu;
        // 0x1caac0: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caabc) {
            ctx->pc = 0x1CAAD8u;
            goto label_1caad8;
        }
    }
    ctx->pc = 0x1CAAC4u;
label_1caac4:
    // 0x1caac4: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1caac4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caac8:
    // 0x1caac8: 0x0  nop
    ctx->pc = 0x1caac8u;
    // NOP
label_1caacc:
    // 0x1caacc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1caaccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1caad0:
    // 0x1caad0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1caad4:
    if (ctx->pc == 0x1CAAD4u) {
        ctx->pc = 0x1CAAD8u;
        goto label_1caad8;
    }
    ctx->pc = 0x1CAAD0u;
    {
        const bool branch_taken_0x1caad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caad0) {
            ctx->pc = 0x1CAAF0u;
            goto label_1caaf0;
        }
    }
    ctx->pc = 0x1CAAD8u;
label_1caad8:
    // 0x1caad8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1caad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_1caadc:
    // 0x1caadc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1caadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1caae0:
    // 0x1caae0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1caae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1caae4:
    // 0x1caae4: 0x0  nop
    ctx->pc = 0x1caae4u;
    // NOP
label_1caae8:
    // 0x1caae8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1caae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1caaec:
    // 0x1caaec: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1caaecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1caaf0:
    // 0x1caaf0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1caaf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1caaf4:
    // 0x1caaf4: 0x44936800  mtc1        $s3, $f13
    ctx->pc = 0x1caaf4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1caaf8:
    // 0x1caaf8: 0x0  nop
    ctx->pc = 0x1caaf8u;
    // NOP
label_1caafc:
    // 0x1caafc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x1caafcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_1cab00:
    // 0x1cab00: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1cab00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1cab04:
    // 0x1cab04: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1cab04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1cab08:
    // 0x1cab08: 0xc0cdd5a  jal         func_337568
label_1cab0c:
    if (ctx->pc == 0x1CAB0Cu) {
        ctx->pc = 0x1CAB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB08u;
        // 0x1cab0c: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
        ctx->f[16] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB10u;
        goto label_1cab10;
    }
    ctx->pc = 0x1CAB08u;
    SET_GPR_U32(ctx, 31, 0x1CAB10u);
    ctx->pc = 0x1CAB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB08u;
    // 0x1cab0c: 0x46007406  mov.s       $f16, $f14 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x337568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337568u, 0x1CAB08u, 0x1CAB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB10u;
label_1cab10:
    // 0x1cab10: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1cab10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1cab14:
    // 0x1cab14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1cab14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1cab18:
    // 0x1cab18: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1cab18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1cab1c:
    // 0x1cab1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cab1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cab20:
    // 0x1cab20: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1cab20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1cab24:
    // 0x1cab24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cab24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cab28:
    // 0x1cab28: 0x0  nop
    ctx->pc = 0x1cab28u;
    // NOP
label_1cab2c:
    // 0x1cab2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cab2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cab30:
    // 0x1cab30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cab30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cab34:
    // 0x1cab34: 0x0  nop
    ctx->pc = 0x1cab34u;
    // NOP
label_1cab38:
    // 0x1cab38: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1cab3c:
    if (ctx->pc == 0x1CAB3Cu) {
        ctx->pc = 0x1CAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB38u;
        // 0x1cab3c: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB40u;
        goto label_1cab40;
    }
    ctx->pc = 0x1CAB38u;
    {
        const bool branch_taken_0x1cab38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CAB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB38u;
        // 0x1cab3c: 0xa3a30003  sb          $v1, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab38) {
            ctx->pc = 0x1CAB4Cu;
            goto label_1cab4c;
        }
    }
    ctx->pc = 0x1CAB40u;
label_1cab40:
    // 0x1cab40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cab40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cab44:
    // 0x1cab44: 0xc072c04  jal         func_1CB010
label_1cab48:
    if (ctx->pc == 0x1CAB48u) {
        ctx->pc = 0x1CAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB44u;
        // 0x1cab48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB4Cu;
        goto label_1cab4c;
    }
    ctx->pc = 0x1CAB44u;
    SET_GPR_U32(ctx, 31, 0x1CAB4Cu);
    ctx->pc = 0x1CAB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB44u;
    // 0x1cab48: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x1CAB44u, 0x1CAB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB4Cu;
label_1cab4c:
    // 0x1cab4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1cab50:
    // 0x1cab50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cab50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cab54:
    // 0x1cab54: 0xc0706c4  jal         func_1C1B10
label_1cab58:
    if (ctx->pc == 0x1CAB58u) {
        ctx->pc = 0x1CAB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB54u;
        // 0x1cab58: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB5Cu;
        goto label_1cab5c;
    }
    ctx->pc = 0x1CAB54u;
    SET_GPR_U32(ctx, 31, 0x1CAB5Cu);
    ctx->pc = 0x1CAB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB54u;
    // 0x1cab58: 0xae4200b4  sw          $v0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B10u, 0x1CAB54u, 0x1CAB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB5Cu;
label_1cab5c:
    // 0x1cab5c: 0xc0706d6  jal         func_1C1B58
label_1cab60:
    if (ctx->pc == 0x1CAB60u) {
        ctx->pc = 0x1CAB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB5Cu;
        // 0x1cab60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB64u;
        goto label_1cab64;
    }
    ctx->pc = 0x1CAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB64u);
    ctx->pc = 0x1CAB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAB5Cu;
    // 0x1cab60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1B58u, 0x1CAB5Cu, 0x1CAB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB64u;
label_1cab64:
    // 0x1cab64: 0x10000002  b           . + 4 + (0x2 << 2)
label_1cab68:
    if (ctx->pc == 0x1CAB68u) {
        ctx->pc = 0x1CAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB64u;
        // 0x1cab68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB6Cu;
        goto label_1cab6c;
    }
    ctx->pc = 0x1CAB64u;
    {
        const bool branch_taken_0x1cab64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB64u;
        // 0x1cab68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cab64) {
            ctx->pc = 0x1CAB70u;
            goto label_1cab70;
        }
    }
    ctx->pc = 0x1CAB6Cu;
label_1cab6c:
    // 0x1cab6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cab6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cab70:
    // 0x1cab70: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1cab70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cab74:
    // 0x1cab74: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1cab74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cab78:
    // 0x1cab78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1cab78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cab7c:
    // 0x1cab7c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1cab7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cab80:
    // 0x1cab80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cab80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cab84:
    // 0x1cab84: 0x3e00008  jr          $ra
label_1cab88:
    if (ctx->pc == 0x1CAB88u) {
        ctx->pc = 0x1CAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB84u;
        // 0x1cab88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAB8Cu;
        goto label_1cab8c;
    }
    ctx->pc = 0x1CAB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAB84u;
        // 0x1cab88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAB8Cu;
label_1cab8c:
    // 0x1cab8c: 0x0  nop
    ctx->pc = 0x1cab8cu;
    // NOP
    ctx->pc = 0x1cab90u;
}
