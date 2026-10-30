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

// Function: sub_004E8F68
// Address: 0x4e8f68 - 0x4e9108
void sub_004E8F68_0x4e8f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8F68_0x4e8f68");
#endif

    switch (ctx->pc) {
        case 0x4e8f68u: goto label_4e8f68;
        case 0x4e8f6cu: goto label_4e8f6c;
        case 0x4e8f70u: goto label_4e8f70;
        case 0x4e8f74u: goto label_4e8f74;
        case 0x4e8f78u: goto label_4e8f78;
        case 0x4e8f7cu: goto label_4e8f7c;
        case 0x4e8f80u: goto label_4e8f80;
        case 0x4e8f84u: goto label_4e8f84;
        case 0x4e8f88u: goto label_4e8f88;
        case 0x4e8f8cu: goto label_4e8f8c;
        case 0x4e8f90u: goto label_4e8f90;
        case 0x4e8f94u: goto label_4e8f94;
        case 0x4e8f98u: goto label_4e8f98;
        case 0x4e8f9cu: goto label_4e8f9c;
        case 0x4e8fa0u: goto label_4e8fa0;
        case 0x4e8fa4u: goto label_4e8fa4;
        case 0x4e8fa8u: goto label_4e8fa8;
        case 0x4e8facu: goto label_4e8fac;
        case 0x4e8fb0u: goto label_4e8fb0;
        case 0x4e8fb4u: goto label_4e8fb4;
        case 0x4e8fb8u: goto label_4e8fb8;
        case 0x4e8fbcu: goto label_4e8fbc;
        case 0x4e8fc0u: goto label_4e8fc0;
        case 0x4e8fc4u: goto label_4e8fc4;
        case 0x4e8fc8u: goto label_4e8fc8;
        case 0x4e8fccu: goto label_4e8fcc;
        case 0x4e8fd0u: goto label_4e8fd0;
        case 0x4e8fd4u: goto label_4e8fd4;
        case 0x4e8fd8u: goto label_4e8fd8;
        case 0x4e8fdcu: goto label_4e8fdc;
        case 0x4e8fe0u: goto label_4e8fe0;
        case 0x4e8fe4u: goto label_4e8fe4;
        case 0x4e8fe8u: goto label_4e8fe8;
        case 0x4e8fecu: goto label_4e8fec;
        case 0x4e8ff0u: goto label_4e8ff0;
        case 0x4e8ff4u: goto label_4e8ff4;
        case 0x4e8ff8u: goto label_4e8ff8;
        case 0x4e8ffcu: goto label_4e8ffc;
        case 0x4e9000u: goto label_4e9000;
        case 0x4e9004u: goto label_4e9004;
        case 0x4e9008u: goto label_4e9008;
        case 0x4e900cu: goto label_4e900c;
        case 0x4e9010u: goto label_4e9010;
        case 0x4e9014u: goto label_4e9014;
        case 0x4e9018u: goto label_4e9018;
        case 0x4e901cu: goto label_4e901c;
        case 0x4e9020u: goto label_4e9020;
        case 0x4e9024u: goto label_4e9024;
        case 0x4e9028u: goto label_4e9028;
        case 0x4e902cu: goto label_4e902c;
        case 0x4e9030u: goto label_4e9030;
        case 0x4e9034u: goto label_4e9034;
        case 0x4e9038u: goto label_4e9038;
        case 0x4e903cu: goto label_4e903c;
        case 0x4e9040u: goto label_4e9040;
        case 0x4e9044u: goto label_4e9044;
        case 0x4e9048u: goto label_4e9048;
        case 0x4e904cu: goto label_4e904c;
        case 0x4e9050u: goto label_4e9050;
        case 0x4e9054u: goto label_4e9054;
        case 0x4e9058u: goto label_4e9058;
        case 0x4e905cu: goto label_4e905c;
        case 0x4e9060u: goto label_4e9060;
        case 0x4e9064u: goto label_4e9064;
        case 0x4e9068u: goto label_4e9068;
        case 0x4e906cu: goto label_4e906c;
        case 0x4e9070u: goto label_4e9070;
        case 0x4e9074u: goto label_4e9074;
        case 0x4e9078u: goto label_4e9078;
        case 0x4e907cu: goto label_4e907c;
        case 0x4e9080u: goto label_4e9080;
        case 0x4e9084u: goto label_4e9084;
        case 0x4e9088u: goto label_4e9088;
        case 0x4e908cu: goto label_4e908c;
        case 0x4e9090u: goto label_4e9090;
        case 0x4e9094u: goto label_4e9094;
        case 0x4e9098u: goto label_4e9098;
        case 0x4e909cu: goto label_4e909c;
        case 0x4e90a0u: goto label_4e90a0;
        case 0x4e90a4u: goto label_4e90a4;
        case 0x4e90a8u: goto label_4e90a8;
        case 0x4e90acu: goto label_4e90ac;
        case 0x4e90b0u: goto label_4e90b0;
        case 0x4e90b4u: goto label_4e90b4;
        case 0x4e90b8u: goto label_4e90b8;
        case 0x4e90bcu: goto label_4e90bc;
        case 0x4e90c0u: goto label_4e90c0;
        case 0x4e90c4u: goto label_4e90c4;
        case 0x4e90c8u: goto label_4e90c8;
        case 0x4e90ccu: goto label_4e90cc;
        case 0x4e90d0u: goto label_4e90d0;
        case 0x4e90d4u: goto label_4e90d4;
        case 0x4e90d8u: goto label_4e90d8;
        case 0x4e90dcu: goto label_4e90dc;
        case 0x4e90e0u: goto label_4e90e0;
        case 0x4e90e4u: goto label_4e90e4;
        case 0x4e90e8u: goto label_4e90e8;
        case 0x4e90ecu: goto label_4e90ec;
        case 0x4e90f0u: goto label_4e90f0;
        case 0x4e90f4u: goto label_4e90f4;
        case 0x4e90f8u: goto label_4e90f8;
        case 0x4e90fcu: goto label_4e90fc;
        case 0x4e9100u: goto label_4e9100;
        case 0x4e9104u: goto label_4e9104;
        default: break;
    }

    ctx->pc = 0x4e8f68u;

label_4e8f68:
    // 0x4e8f68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e8f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e8f6c:
    // 0x4e8f6c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e8f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e8f70:
    // 0x4e8f70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e8f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e8f74:
    // 0x4e8f74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e8f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8f78:
    // 0x4e8f78: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e8f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e8f7c:
    // 0x4e8f7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e8f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e8f80:
    // 0x4e8f80: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e8f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e8f84:
    // 0x4e8f84: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e8f88:
    // 0x4e8f88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e8f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e8f8c:
    // 0x4e8f8c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e8f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e8f90:
    // 0x4e8f90: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e8f94:
    // 0x4e8f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e8f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e8f98:
    // 0x4e8f98: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e8f9c:
    // 0x4e8f9c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e8fa0:
    // 0x4e8fa0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e8fa4:
    if (ctx->pc == 0x4E8FA4u) {
        ctx->pc = 0x4E8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8FA0u;
        // 0x4e8fa4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8FA8u;
        goto label_4e8fa8;
    }
    ctx->pc = 0x4E8FA0u;
    {
        const bool branch_taken_0x4e8fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8FA0u;
        // 0x4e8fa4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8fa0) {
            ctx->pc = 0x4E8FECu;
            goto label_4e8fec;
        }
    }
    ctx->pc = 0x4E8FA8u;
label_4e8fa8:
    // 0x4e8fa8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e8fac:
    if (ctx->pc == 0x4E8FACu) {
        ctx->pc = 0x4E8FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8FA8u;
        // 0x4e8fac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8FB0u;
        goto label_4e8fb0;
    }
    ctx->pc = 0x4E8FA8u;
    {
        const bool branch_taken_0x4e8fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8fa8) {
            ctx->pc = 0x4E8FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8FA8u;
            // 0x4e8fac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8FBCu;
            goto label_4e8fbc;
        }
    }
    ctx->pc = 0x4E8FB0u;
label_4e8fb0:
    // 0x4e8fb0: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e8fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e8fb4:
    // 0x4e8fb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e8fb8:
    // 0x4e8fb8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e8fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e8fbc:
    // 0x4e8fbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e8fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e8fc0:
    // 0x4e8fc0: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e8fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e8fc4:
    // 0x4e8fc4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e8fc8:
    // 0x4e8fc8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e8fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e8fcc:
    // 0x4e8fcc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e8fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e8fd0:
    // 0x4e8fd0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e8fd0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e8fd4:
    // 0x4e8fd4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e8fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e8fd8:
    // 0x4e8fd8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e8fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e8fdc:
    // 0x4e8fdc: 0xc10c1bb  jal         func_4306EC
label_4e8fe0:
    if (ctx->pc == 0x4E8FE0u) {
        ctx->pc = 0x4E8FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8FDCu;
        // 0x4e8fe0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8FE4u;
        goto label_4e8fe4;
    }
    ctx->pc = 0x4E8FDCu;
    SET_GPR_U32(ctx, 31, 0x4E8FE4u);
    ctx->pc = 0x4E8FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8FDCu;
    // 0x4e8fe0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E8FDCu, 0x4E8FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8FE4u;
label_4e8fe4:
    // 0x4e8fe4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e8fe8:
    if (ctx->pc == 0x4E8FE8u) {
        ctx->pc = 0x4E8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8FE4u;
        // 0x4e8fe8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8FECu;
        goto label_4e8fec;
    }
    ctx->pc = 0x4E8FE4u;
    {
        const bool branch_taken_0x4e8fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E8FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8FE4u;
        // 0x4e8fe8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8fe4) {
            ctx->pc = 0x4E90DCu;
            goto label_4e90dc;
        }
    }
    ctx->pc = 0x4E8FECu;
label_4e8fec:
    // 0x4e8fec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e8fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e8ff0:
    // 0x4e8ff0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e8ff0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e8ff4:
    // 0x4e8ff4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e8ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e8ff8:
    // 0x4e8ff8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e8ffc:
    // 0x4e8ffc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e9000:
    // 0x4e9000: 0x24966660  addiu       $s6, $a0, 0x6660
    ctx->pc = 0x4e9000u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 26208));
label_4e9004:
    // 0x4e9004: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e9004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e9008:
    // 0x4e9008: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e9008u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e900c:
    // 0x4e900c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e900cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e9010:
    // 0x4e9010: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e9010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e9014:
    // 0x4e9014: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e9014u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e9018:
    // 0x4e9018: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e9018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e901c:
    // 0x4e901c: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e901cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e9020:
    // 0x4e9020: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e9020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e9024:
    // 0x4e9024: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e9024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e9028:
    // 0x4e9028: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e9028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e902c:
    // 0x4e902c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e902cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e9030:
    // 0x4e9030: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e9030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e9034:
    // 0x4e9034: 0x24a56658  addiu       $a1, $a1, 0x6658
    ctx->pc = 0x4e9034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26200));
label_4e9038:
    // 0x4e9038: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e9038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e903c:
    // 0x4e903c: 0x254a6688  addiu       $t2, $t2, 0x6688
    ctx->pc = 0x4e903cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 26248));
label_4e9040:
    // 0x4e9040: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e9040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e9044:
    // 0x4e9044: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e9044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e9048:
    // 0x4e9048: 0x40f809  jalr        $v0
label_4e904c:
    if (ctx->pc == 0x4E904Cu) {
        ctx->pc = 0x4E904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9048u;
        // 0x4e904c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9050u;
        goto label_4e9050;
    }
    ctx->pc = 0x4E9048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E9050u);
        ctx->pc = 0x4E904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9048u;
        // 0x4e904c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9048u, 0x4E9050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9050u;
label_4e9050:
    // 0x4e9050: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e9050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e9054:
    // 0x4e9054: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e9054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e9058:
    // 0x4e9058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e9058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e905c:
    // 0x4e905c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e905cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e9060:
    // 0x4e9060: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e9060u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e9064:
    // 0x4e9064: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e9064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e9068:
    // 0x4e9068: 0xc10c1bb  jal         func_4306EC
label_4e906c:
    if (ctx->pc == 0x4E906Cu) {
        ctx->pc = 0x4E906Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9068u;
        // 0x4e906c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9070u;
        goto label_4e9070;
    }
    ctx->pc = 0x4E9068u;
    SET_GPR_U32(ctx, 31, 0x4E9070u);
    ctx->pc = 0x4E906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9068u;
    // 0x4e906c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E9068u, 0x4E9070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9070u;
label_4e9070:
    // 0x4e9070: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e9074:
    if (ctx->pc == 0x4E9074u) {
        ctx->pc = 0x4E9074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9070u;
        // 0x4e9074: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9078u;
        goto label_4e9078;
    }
    ctx->pc = 0x4E9070u;
    {
        const bool branch_taken_0x4e9070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9070) {
            ctx->pc = 0x4E9074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9070u;
            // 0x4e9074: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9084u;
            goto label_4e9084;
        }
    }
    ctx->pc = 0x4E9078u;
label_4e9078:
    // 0x4e9078: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e9078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e907c:
    // 0x4e907c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e907cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e9080:
    // 0x4e9080: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e9080u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9084:
    // 0x4e9084: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e9084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e9088:
    // 0x4e9088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e9088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e908c:
    // 0x4e908c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e908cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e9090:
    // 0x4e9090: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e9090u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e9094:
    // 0x4e9094: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e9094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e9098:
    // 0x4e9098: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e9098u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e909c:
    // 0x4e909c: 0xc10c1bb  jal         func_4306EC
label_4e90a0:
    if (ctx->pc == 0x4E90A0u) {
        ctx->pc = 0x4E90A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E909Cu;
        // 0x4e90a0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E90A4u;
        goto label_4e90a4;
    }
    ctx->pc = 0x4E909Cu;
    SET_GPR_U32(ctx, 31, 0x4E90A4u);
    ctx->pc = 0x4E90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E909Cu;
    // 0x4e90a0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E909Cu, 0x4E90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E90A4u;
label_4e90a4:
    // 0x4e90a4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e90a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e90a8:
    // 0x4e90a8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e90ac:
    if (ctx->pc == 0x4E90ACu) {
        ctx->pc = 0x4E90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E90A8u;
        // 0x4e90ac: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E90B0u;
        goto label_4e90b0;
    }
    ctx->pc = 0x4E90A8u;
    {
        const bool branch_taken_0x4e90a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E90ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E90A8u;
        // 0x4e90ac: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e90a8) {
            ctx->pc = 0x4E90CCu;
            goto label_4e90cc;
        }
    }
    ctx->pc = 0x4E90B0u;
label_4e90b0:
    // 0x4e90b0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e90b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e90b4:
    // 0x4e90b4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e90b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e90b8:
    // 0x4e90b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e90b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e90bc:
    // 0x4e90bc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e90bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e90c0:
    // 0x4e90c0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e90c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e90c4:
    // 0x4e90c4: 0x60f809  jalr        $v1
label_4e90c8:
    if (ctx->pc == 0x4E90C8u) {
        ctx->pc = 0x4E90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E90C4u;
        // 0x4e90c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E90CCu;
        goto label_4e90cc;
    }
    ctx->pc = 0x4E90C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E90CCu);
        ctx->pc = 0x4E90C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E90C4u;
        // 0x4e90c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E90C4u, 0x4E90CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E90CCu;
label_4e90cc:
    // 0x4e90cc: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e90d0:
    // 0x4e90d0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e90d4:
    // 0x4e90d4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e90d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e90d8:
    // 0x4e90d8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e90d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e90dc:
    // 0x4e90dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e90dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e90e0:
    // 0x4e90e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e90e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e90e4:
    // 0x4e90e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e90e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e90e8:
    // 0x4e90e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e90e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e90ec:
    // 0x4e90ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e90ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e90f0:
    // 0x4e90f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e90f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e90f4:
    // 0x4e90f4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e90f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e90f8:
    // 0x4e90f8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e90f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e90fc:
    // 0x4e90fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e90fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9100:
    // 0x4e9100: 0x3e00008  jr          $ra
label_4e9104:
    if (ctx->pc == 0x4E9104u) {
        ctx->pc = 0x4E9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9100u;
        // 0x4e9104: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9108u;
        goto label_fallthrough_0x4e9100;
    }
    ctx->pc = 0x4E9100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9100u;
        // 0x4e9104: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e9100:
    ctx->pc = 0x4E9108u;
}
