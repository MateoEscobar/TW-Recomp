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

// Function: sub_004F0FA8
// Address: 0x4f0fa8 - 0x4f1148
void sub_004F0FA8_0x4f0fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0FA8_0x4f0fa8");
#endif

    switch (ctx->pc) {
        case 0x4f0fa8u: goto label_4f0fa8;
        case 0x4f0facu: goto label_4f0fac;
        case 0x4f0fb0u: goto label_4f0fb0;
        case 0x4f0fb4u: goto label_4f0fb4;
        case 0x4f0fb8u: goto label_4f0fb8;
        case 0x4f0fbcu: goto label_4f0fbc;
        case 0x4f0fc0u: goto label_4f0fc0;
        case 0x4f0fc4u: goto label_4f0fc4;
        case 0x4f0fc8u: goto label_4f0fc8;
        case 0x4f0fccu: goto label_4f0fcc;
        case 0x4f0fd0u: goto label_4f0fd0;
        case 0x4f0fd4u: goto label_4f0fd4;
        case 0x4f0fd8u: goto label_4f0fd8;
        case 0x4f0fdcu: goto label_4f0fdc;
        case 0x4f0fe0u: goto label_4f0fe0;
        case 0x4f0fe4u: goto label_4f0fe4;
        case 0x4f0fe8u: goto label_4f0fe8;
        case 0x4f0fecu: goto label_4f0fec;
        case 0x4f0ff0u: goto label_4f0ff0;
        case 0x4f0ff4u: goto label_4f0ff4;
        case 0x4f0ff8u: goto label_4f0ff8;
        case 0x4f0ffcu: goto label_4f0ffc;
        case 0x4f1000u: goto label_4f1000;
        case 0x4f1004u: goto label_4f1004;
        case 0x4f1008u: goto label_4f1008;
        case 0x4f100cu: goto label_4f100c;
        case 0x4f1010u: goto label_4f1010;
        case 0x4f1014u: goto label_4f1014;
        case 0x4f1018u: goto label_4f1018;
        case 0x4f101cu: goto label_4f101c;
        case 0x4f1020u: goto label_4f1020;
        case 0x4f1024u: goto label_4f1024;
        case 0x4f1028u: goto label_4f1028;
        case 0x4f102cu: goto label_4f102c;
        case 0x4f1030u: goto label_4f1030;
        case 0x4f1034u: goto label_4f1034;
        case 0x4f1038u: goto label_4f1038;
        case 0x4f103cu: goto label_4f103c;
        case 0x4f1040u: goto label_4f1040;
        case 0x4f1044u: goto label_4f1044;
        case 0x4f1048u: goto label_4f1048;
        case 0x4f104cu: goto label_4f104c;
        case 0x4f1050u: goto label_4f1050;
        case 0x4f1054u: goto label_4f1054;
        case 0x4f1058u: goto label_4f1058;
        case 0x4f105cu: goto label_4f105c;
        case 0x4f1060u: goto label_4f1060;
        case 0x4f1064u: goto label_4f1064;
        case 0x4f1068u: goto label_4f1068;
        case 0x4f106cu: goto label_4f106c;
        case 0x4f1070u: goto label_4f1070;
        case 0x4f1074u: goto label_4f1074;
        case 0x4f1078u: goto label_4f1078;
        case 0x4f107cu: goto label_4f107c;
        case 0x4f1080u: goto label_4f1080;
        case 0x4f1084u: goto label_4f1084;
        case 0x4f1088u: goto label_4f1088;
        case 0x4f108cu: goto label_4f108c;
        case 0x4f1090u: goto label_4f1090;
        case 0x4f1094u: goto label_4f1094;
        case 0x4f1098u: goto label_4f1098;
        case 0x4f109cu: goto label_4f109c;
        case 0x4f10a0u: goto label_4f10a0;
        case 0x4f10a4u: goto label_4f10a4;
        case 0x4f10a8u: goto label_4f10a8;
        case 0x4f10acu: goto label_4f10ac;
        case 0x4f10b0u: goto label_4f10b0;
        case 0x4f10b4u: goto label_4f10b4;
        case 0x4f10b8u: goto label_4f10b8;
        case 0x4f10bcu: goto label_4f10bc;
        case 0x4f10c0u: goto label_4f10c0;
        case 0x4f10c4u: goto label_4f10c4;
        case 0x4f10c8u: goto label_4f10c8;
        case 0x4f10ccu: goto label_4f10cc;
        case 0x4f10d0u: goto label_4f10d0;
        case 0x4f10d4u: goto label_4f10d4;
        case 0x4f10d8u: goto label_4f10d8;
        case 0x4f10dcu: goto label_4f10dc;
        case 0x4f10e0u: goto label_4f10e0;
        case 0x4f10e4u: goto label_4f10e4;
        case 0x4f10e8u: goto label_4f10e8;
        case 0x4f10ecu: goto label_4f10ec;
        case 0x4f10f0u: goto label_4f10f0;
        case 0x4f10f4u: goto label_4f10f4;
        case 0x4f10f8u: goto label_4f10f8;
        case 0x4f10fcu: goto label_4f10fc;
        case 0x4f1100u: goto label_4f1100;
        case 0x4f1104u: goto label_4f1104;
        case 0x4f1108u: goto label_4f1108;
        case 0x4f110cu: goto label_4f110c;
        case 0x4f1110u: goto label_4f1110;
        case 0x4f1114u: goto label_4f1114;
        case 0x4f1118u: goto label_4f1118;
        case 0x4f111cu: goto label_4f111c;
        case 0x4f1120u: goto label_4f1120;
        case 0x4f1124u: goto label_4f1124;
        case 0x4f1128u: goto label_4f1128;
        case 0x4f112cu: goto label_4f112c;
        case 0x4f1130u: goto label_4f1130;
        case 0x4f1134u: goto label_4f1134;
        case 0x4f1138u: goto label_4f1138;
        case 0x4f113cu: goto label_4f113c;
        case 0x4f1140u: goto label_4f1140;
        case 0x4f1144u: goto label_4f1144;
        default: break;
    }

    ctx->pc = 0x4f0fa8u;

label_4f0fa8:
    // 0x4f0fa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4f0fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4f0fac:
    // 0x4f0fac: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4f0facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4f0fb0:
    // 0x4f0fb0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4f0fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4f0fb4:
    // 0x4f0fb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f0fb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f0fb8:
    // 0x4f0fb8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4f0fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4f0fbc:
    // 0x4f0fbc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4f0fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f0fc0:
    // 0x4f0fc0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4f0fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4f0fc4:
    // 0x4f0fc4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4f0fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4f0fc8:
    // 0x4f0fc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f0fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f0fcc:
    // 0x4f0fcc: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4f0fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4f0fd0:
    // 0x4f0fd0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4f0fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4f0fd4:
    // 0x4f0fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f0fd8:
    // 0x4f0fd8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4f0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4f0fdc:
    // 0x4f0fdc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4f0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4f0fe0:
    // 0x4f0fe0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4f0fe4:
    if (ctx->pc == 0x4F0FE4u) {
        ctx->pc = 0x4F0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0FE0u;
        // 0x4f0fe4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0FE8u;
        goto label_4f0fe8;
    }
    ctx->pc = 0x4F0FE0u;
    {
        const bool branch_taken_0x4f0fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F0FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0FE0u;
        // 0x4f0fe4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f0fe0) {
            ctx->pc = 0x4F102Cu;
            goto label_4f102c;
        }
    }
    ctx->pc = 0x4F0FE8u;
label_4f0fe8:
    // 0x4f0fe8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4f0fec:
    if (ctx->pc == 0x4F0FECu) {
        ctx->pc = 0x4F0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F0FE8u;
        // 0x4f0fec: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F0FF0u;
        goto label_4f0ff0;
    }
    ctx->pc = 0x4F0FE8u;
    {
        const bool branch_taken_0x4f0fe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f0fe8) {
            ctx->pc = 0x4F0FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F0FE8u;
            // 0x4f0fec: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F0FFCu;
            goto label_4f0ffc;
        }
    }
    ctx->pc = 0x4F0FF0u;
label_4f0ff0:
    // 0x4f0ff0: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4f0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4f0ff4:
    // 0x4f0ff4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4f0ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4f0ff8:
    // 0x4f0ff8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4f0ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4f0ffc:
    // 0x4f0ffc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f0ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f1000:
    // 0x4f1000: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4f1000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4f1004:
    // 0x4f1004: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4f1004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4f1008:
    // 0x4f1008: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4f1008u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4f100c:
    // 0x4f100c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4f100cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4f1010:
    // 0x4f1010: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f1010u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f1014:
    // 0x4f1014: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f1014u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f1018:
    // 0x4f1018: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4f1018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4f101c:
    // 0x4f101c: 0xc10c1bb  jal         func_4306EC
label_4f1020:
    if (ctx->pc == 0x4F1020u) {
        ctx->pc = 0x4F1020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F101Cu;
        // 0x4f1020: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1024u;
        goto label_4f1024;
    }
    ctx->pc = 0x4F101Cu;
    SET_GPR_U32(ctx, 31, 0x4F1024u);
    ctx->pc = 0x4F1020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F101Cu;
    // 0x4f1020: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F101Cu, 0x4F1024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F1024u;
label_4f1024:
    // 0x4f1024: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4f1028:
    if (ctx->pc == 0x4F1028u) {
        ctx->pc = 0x4F1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1024u;
        // 0x4f1028: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F102Cu;
        goto label_4f102c;
    }
    ctx->pc = 0x4F1024u;
    {
        const bool branch_taken_0x4f1024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1024u;
        // 0x4f1028: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f1024) {
            ctx->pc = 0x4F111Cu;
            goto label_4f111c;
        }
    }
    ctx->pc = 0x4F102Cu;
label_4f102c:
    // 0x4f102c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4f102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f1030:
    // 0x4f1030: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4f1030u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4f1034:
    // 0x4f1034: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4f1034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4f1038:
    // 0x4f1038: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x4f1038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_4f103c:
    // 0x4f103c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4f103cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f1040:
    // 0x4f1040: 0x24967170  addiu       $s6, $a0, 0x7170
    ctx->pc = 0x4f1040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 29040));
label_4f1044:
    // 0x4f1044: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4f1044u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4f1048:
    // 0x4f1048: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4f1048u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4f104c:
    // 0x4f104c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4f104cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4f1050:
    // 0x4f1050: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4f1050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f1054:
    // 0x4f1054: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4f1054u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4f1058:
    // 0x4f1058: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4f1058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4f105c:
    // 0x4f105c: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4f105cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f1060:
    // 0x4f1060: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4f1060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4f1064:
    // 0x4f1064: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4f1064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4f1068:
    // 0x4f1068: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x4f1068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_4f106c:
    // 0x4f106c: 0x3c0a0057  lui         $t2, 0x57
    ctx->pc = 0x4f106cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)87 << 16));
label_4f1070:
    // 0x4f1070: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4f1070u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f1074:
    // 0x4f1074: 0x24a57208  addiu       $a1, $a1, 0x7208
    ctx->pc = 0x4f1074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29192));
label_4f1078:
    // 0x4f1078: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4f1078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f107c:
    // 0x4f107c: 0x254a7210  addiu       $t2, $t2, 0x7210
    ctx->pc = 0x4f107cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29200));
label_4f1080:
    // 0x4f1080: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f1080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f1084:
    // 0x4f1084: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f1084u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f1088:
    // 0x4f1088: 0x40f809  jalr        $v0
label_4f108c:
    if (ctx->pc == 0x4F108Cu) {
        ctx->pc = 0x4F108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1088u;
        // 0x4f108c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1090u;
        goto label_4f1090;
    }
    ctx->pc = 0x4F1088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F1090u);
        ctx->pc = 0x4F108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1088u;
        // 0x4f108c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1088u, 0x4F1090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F1090u;
label_4f1090:
    // 0x4f1090: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4f1090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f1094:
    // 0x4f1094: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4f1094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f1098:
    // 0x4f1098: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f1098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f109c:
    // 0x4f109c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4f109cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4f10a0:
    // 0x4f10a0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4f10a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4f10a4:
    // 0x4f10a4: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4f10a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4f10a8:
    // 0x4f10a8: 0xc10c1bb  jal         func_4306EC
label_4f10ac:
    if (ctx->pc == 0x4F10ACu) {
        ctx->pc = 0x4F10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10A8u;
        // 0x4f10ac: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F10B0u;
        goto label_4f10b0;
    }
    ctx->pc = 0x4F10A8u;
    SET_GPR_U32(ctx, 31, 0x4F10B0u);
    ctx->pc = 0x4F10ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F10A8u;
    // 0x4f10ac: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F10A8u, 0x4F10B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F10B0u;
label_4f10b0:
    // 0x4f10b0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4f10b4:
    if (ctx->pc == 0x4F10B4u) {
        ctx->pc = 0x4F10B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10B0u;
        // 0x4f10b4: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F10B8u;
        goto label_4f10b8;
    }
    ctx->pc = 0x4F10B0u;
    {
        const bool branch_taken_0x4f10b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f10b0) {
            ctx->pc = 0x4F10B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F10B0u;
            // 0x4f10b4: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F10C4u;
            goto label_4f10c4;
        }
    }
    ctx->pc = 0x4F10B8u;
label_4f10b8:
    // 0x4f10b8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4f10b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4f10bc:
    // 0x4f10bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4f10bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4f10c0:
    // 0x4f10c0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4f10c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4f10c4:
    // 0x4f10c4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4f10c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4f10c8:
    // 0x4f10c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f10c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f10cc:
    // 0x4f10cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f10ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f10d0:
    // 0x4f10d0: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4f10d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4f10d4:
    // 0x4f10d4: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4f10d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4f10d8:
    // 0x4f10d8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f10d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f10dc:
    // 0x4f10dc: 0xc10c1bb  jal         func_4306EC
label_4f10e0:
    if (ctx->pc == 0x4F10E0u) {
        ctx->pc = 0x4F10E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10DCu;
        // 0x4f10e0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F10E4u;
        goto label_4f10e4;
    }
    ctx->pc = 0x4F10DCu;
    SET_GPR_U32(ctx, 31, 0x4F10E4u);
    ctx->pc = 0x4F10E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F10DCu;
    // 0x4f10e0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F10DCu, 0x4F10E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F10E4u;
label_4f10e4:
    // 0x4f10e4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4f10e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f10e8:
    // 0x4f10e8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4f10ec:
    if (ctx->pc == 0x4F10ECu) {
        ctx->pc = 0x4F10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10E8u;
        // 0x4f10ec: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F10F0u;
        goto label_4f10f0;
    }
    ctx->pc = 0x4F10E8u;
    {
        const bool branch_taken_0x4f10e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F10ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F10E8u;
        // 0x4f10ec: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f10e8) {
            ctx->pc = 0x4F110Cu;
            goto label_4f110c;
        }
    }
    ctx->pc = 0x4F10F0u;
label_4f10f0:
    // 0x4f10f0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4f10f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f10f4:
    // 0x4f10f4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f10f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f10f8:
    // 0x4f10f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f10fc:
    // 0x4f10fc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f10fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f1100:
    // 0x4f1100: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f1104:
    // 0x4f1104: 0x60f809  jalr        $v1
label_4f1108:
    if (ctx->pc == 0x4F1108u) {
        ctx->pc = 0x4F1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1104u;
        // 0x4f1108: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F110Cu;
        goto label_4f110c;
    }
    ctx->pc = 0x4F1104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F110Cu);
        ctx->pc = 0x4F1108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1104u;
        // 0x4f1108: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1104u, 0x4F110Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F110Cu;
label_4f110c:
    // 0x4f110c: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4f110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4f1110:
    // 0x4f1110: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4f1110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4f1114:
    // 0x4f1114: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4f1114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4f1118:
    // 0x4f1118: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4f1118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4f111c:
    // 0x4f111c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4f111cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f1120:
    // 0x4f1120: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4f1120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f1124:
    // 0x4f1124: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4f1124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f1128:
    // 0x4f1128: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4f1128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f112c:
    // 0x4f112c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f112cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f1130:
    // 0x4f1130: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4f1130u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f1134:
    // 0x4f1134: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4f1134u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f1138:
    // 0x4f1138: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4f1138u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f113c:
    // 0x4f113c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f113cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f1140:
    // 0x4f1140: 0x3e00008  jr          $ra
label_4f1144:
    if (ctx->pc == 0x4F1144u) {
        ctx->pc = 0x4F1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1140u;
        // 0x4f1144: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F1148u;
        goto label_fallthrough_0x4f1140;
    }
    ctx->pc = 0x4F1140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F1144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F1140u;
        // 0x4f1144: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F1140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f1140:
    ctx->pc = 0x4F1148u;
}
