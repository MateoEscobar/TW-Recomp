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

// Function: sub_003A0ED8
// Address: 0x3a0ed8 - 0x3a1120
void sub_003A0ED8_0x3a0ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0ED8_0x3a0ed8");
#endif

    switch (ctx->pc) {
        case 0x3a0ed8u: goto label_3a0ed8;
        case 0x3a0edcu: goto label_3a0edc;
        case 0x3a0ee0u: goto label_3a0ee0;
        case 0x3a0ee4u: goto label_3a0ee4;
        case 0x3a0ee8u: goto label_3a0ee8;
        case 0x3a0eecu: goto label_3a0eec;
        case 0x3a0ef0u: goto label_3a0ef0;
        case 0x3a0ef4u: goto label_3a0ef4;
        case 0x3a0ef8u: goto label_3a0ef8;
        case 0x3a0efcu: goto label_3a0efc;
        case 0x3a0f00u: goto label_3a0f00;
        case 0x3a0f04u: goto label_3a0f04;
        case 0x3a0f08u: goto label_3a0f08;
        case 0x3a0f0cu: goto label_3a0f0c;
        case 0x3a0f10u: goto label_3a0f10;
        case 0x3a0f14u: goto label_3a0f14;
        case 0x3a0f18u: goto label_3a0f18;
        case 0x3a0f1cu: goto label_3a0f1c;
        case 0x3a0f20u: goto label_3a0f20;
        case 0x3a0f24u: goto label_3a0f24;
        case 0x3a0f28u: goto label_3a0f28;
        case 0x3a0f2cu: goto label_3a0f2c;
        case 0x3a0f30u: goto label_3a0f30;
        case 0x3a0f34u: goto label_3a0f34;
        case 0x3a0f38u: goto label_3a0f38;
        case 0x3a0f3cu: goto label_3a0f3c;
        case 0x3a0f40u: goto label_3a0f40;
        case 0x3a0f44u: goto label_3a0f44;
        case 0x3a0f48u: goto label_3a0f48;
        case 0x3a0f4cu: goto label_3a0f4c;
        case 0x3a0f50u: goto label_3a0f50;
        case 0x3a0f54u: goto label_3a0f54;
        case 0x3a0f58u: goto label_3a0f58;
        case 0x3a0f5cu: goto label_3a0f5c;
        case 0x3a0f60u: goto label_3a0f60;
        case 0x3a0f64u: goto label_3a0f64;
        case 0x3a0f68u: goto label_3a0f68;
        case 0x3a0f6cu: goto label_3a0f6c;
        case 0x3a0f70u: goto label_3a0f70;
        case 0x3a0f74u: goto label_3a0f74;
        case 0x3a0f78u: goto label_3a0f78;
        case 0x3a0f7cu: goto label_3a0f7c;
        case 0x3a0f80u: goto label_3a0f80;
        case 0x3a0f84u: goto label_3a0f84;
        case 0x3a0f88u: goto label_3a0f88;
        case 0x3a0f8cu: goto label_3a0f8c;
        case 0x3a0f90u: goto label_3a0f90;
        case 0x3a0f94u: goto label_3a0f94;
        case 0x3a0f98u: goto label_3a0f98;
        case 0x3a0f9cu: goto label_3a0f9c;
        case 0x3a0fa0u: goto label_3a0fa0;
        case 0x3a0fa4u: goto label_3a0fa4;
        case 0x3a0fa8u: goto label_3a0fa8;
        case 0x3a0facu: goto label_3a0fac;
        case 0x3a0fb0u: goto label_3a0fb0;
        case 0x3a0fb4u: goto label_3a0fb4;
        case 0x3a0fb8u: goto label_3a0fb8;
        case 0x3a0fbcu: goto label_3a0fbc;
        case 0x3a0fc0u: goto label_3a0fc0;
        case 0x3a0fc4u: goto label_3a0fc4;
        case 0x3a0fc8u: goto label_3a0fc8;
        case 0x3a0fccu: goto label_3a0fcc;
        case 0x3a0fd0u: goto label_3a0fd0;
        case 0x3a0fd4u: goto label_3a0fd4;
        case 0x3a0fd8u: goto label_3a0fd8;
        case 0x3a0fdcu: goto label_3a0fdc;
        case 0x3a0fe0u: goto label_3a0fe0;
        case 0x3a0fe4u: goto label_3a0fe4;
        case 0x3a0fe8u: goto label_3a0fe8;
        case 0x3a0fecu: goto label_3a0fec;
        case 0x3a0ff0u: goto label_3a0ff0;
        case 0x3a0ff4u: goto label_3a0ff4;
        case 0x3a0ff8u: goto label_3a0ff8;
        case 0x3a0ffcu: goto label_3a0ffc;
        case 0x3a1000u: goto label_3a1000;
        case 0x3a1004u: goto label_3a1004;
        case 0x3a1008u: goto label_3a1008;
        case 0x3a100cu: goto label_3a100c;
        case 0x3a1010u: goto label_3a1010;
        case 0x3a1014u: goto label_3a1014;
        case 0x3a1018u: goto label_3a1018;
        case 0x3a101cu: goto label_3a101c;
        case 0x3a1020u: goto label_3a1020;
        case 0x3a1024u: goto label_3a1024;
        case 0x3a1028u: goto label_3a1028;
        case 0x3a102cu: goto label_3a102c;
        case 0x3a1030u: goto label_3a1030;
        case 0x3a1034u: goto label_3a1034;
        case 0x3a1038u: goto label_3a1038;
        case 0x3a103cu: goto label_3a103c;
        case 0x3a1040u: goto label_3a1040;
        case 0x3a1044u: goto label_3a1044;
        case 0x3a1048u: goto label_3a1048;
        case 0x3a104cu: goto label_3a104c;
        case 0x3a1050u: goto label_3a1050;
        case 0x3a1054u: goto label_3a1054;
        case 0x3a1058u: goto label_3a1058;
        case 0x3a105cu: goto label_3a105c;
        case 0x3a1060u: goto label_3a1060;
        case 0x3a1064u: goto label_3a1064;
        case 0x3a1068u: goto label_3a1068;
        case 0x3a106cu: goto label_3a106c;
        case 0x3a1070u: goto label_3a1070;
        case 0x3a1074u: goto label_3a1074;
        case 0x3a1078u: goto label_3a1078;
        case 0x3a107cu: goto label_3a107c;
        case 0x3a1080u: goto label_3a1080;
        case 0x3a1084u: goto label_3a1084;
        case 0x3a1088u: goto label_3a1088;
        case 0x3a108cu: goto label_3a108c;
        case 0x3a1090u: goto label_3a1090;
        case 0x3a1094u: goto label_3a1094;
        case 0x3a1098u: goto label_3a1098;
        case 0x3a109cu: goto label_3a109c;
        case 0x3a10a0u: goto label_3a10a0;
        case 0x3a10a4u: goto label_3a10a4;
        case 0x3a10a8u: goto label_3a10a8;
        case 0x3a10acu: goto label_3a10ac;
        case 0x3a10b0u: goto label_3a10b0;
        case 0x3a10b4u: goto label_3a10b4;
        case 0x3a10b8u: goto label_3a10b8;
        case 0x3a10bcu: goto label_3a10bc;
        case 0x3a10c0u: goto label_3a10c0;
        case 0x3a10c4u: goto label_3a10c4;
        case 0x3a10c8u: goto label_3a10c8;
        case 0x3a10ccu: goto label_3a10cc;
        case 0x3a10d0u: goto label_3a10d0;
        case 0x3a10d4u: goto label_3a10d4;
        case 0x3a10d8u: goto label_3a10d8;
        case 0x3a10dcu: goto label_3a10dc;
        case 0x3a10e0u: goto label_3a10e0;
        case 0x3a10e4u: goto label_3a10e4;
        case 0x3a10e8u: goto label_3a10e8;
        case 0x3a10ecu: goto label_3a10ec;
        case 0x3a10f0u: goto label_3a10f0;
        case 0x3a10f4u: goto label_3a10f4;
        case 0x3a10f8u: goto label_3a10f8;
        case 0x3a10fcu: goto label_3a10fc;
        case 0x3a1100u: goto label_3a1100;
        case 0x3a1104u: goto label_3a1104;
        case 0x3a1108u: goto label_3a1108;
        case 0x3a110cu: goto label_3a110c;
        case 0x3a1110u: goto label_3a1110;
        case 0x3a1114u: goto label_3a1114;
        case 0x3a1118u: goto label_3a1118;
        case 0x3a111cu: goto label_3a111c;
        default: break;
    }

    ctx->pc = 0x3a0ed8u;

label_3a0ed8:
    // 0x3a0ed8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a0ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3a0edc:
    // 0x3a0edc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3a0edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3a0ee0:
    // 0x3a0ee0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3a0ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3a0ee4:
    // 0x3a0ee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0ee8:
    // 0x3a0ee8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a0ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3a0eec:
    // 0x3a0eec: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x3a0eecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3a0ef0:
    // 0x3a0ef0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3a0ef0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3a0ef4:
    // 0x3a0ef4: 0x8e2200d0  lw          $v0, 0xD0($s1)
    ctx->pc = 0x3a0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_3a0ef8:
    // 0x3a0ef8: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
label_3a0efc:
    if (ctx->pc == 0x3A0EFCu) {
        ctx->pc = 0x3A0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EF8u;
        // 0x3a0efc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F00u;
        goto label_3a0f00;
    }
    ctx->pc = 0x3A0EF8u;
    {
        const bool branch_taken_0x3a0ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0EF8u;
        // 0x3a0efc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ef8) {
            ctx->pc = 0x3A1104u;
            goto label_3a1104;
        }
    }
    ctx->pc = 0x3A0F00u;
label_3a0f00:
    // 0x3a0f00: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x3a0f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_3a0f04:
    // 0x3a0f04: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_3a0f08:
    if (ctx->pc == 0x3A0F08u) {
        ctx->pc = 0x3A0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F04u;
        // 0x3a0f08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F0Cu;
        goto label_3a0f0c;
    }
    ctx->pc = 0x3A0F04u;
    {
        const bool branch_taken_0x3a0f04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F04u;
        // 0x3a0f08: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f04) {
            ctx->pc = 0x3A0F30u;
            goto label_3a0f30;
        }
    }
    ctx->pc = 0x3A0F0Cu;
label_3a0f0c:
    // 0x3a0f0c: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3a0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3a0f10:
    // 0x3a0f10: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x3a0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3a0f14:
    // 0x3a0f14: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x3a0f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a0f18:
    // 0x3a0f18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3a0f1c:
    if (ctx->pc == 0x3A0F1Cu) {
        ctx->pc = 0x3A0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F18u;
        // 0x3a0f1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F20u;
        goto label_3a0f20;
    }
    ctx->pc = 0x3A0F18u;
    {
        const bool branch_taken_0x3a0f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F18u;
        // 0x3a0f1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f18) {
            ctx->pc = 0x3A0F30u;
            goto label_3a0f30;
        }
    }
    ctx->pc = 0x3A0F20u;
label_3a0f20:
    // 0x3a0f20: 0xac402c44  sw          $zero, 0x2C44($v0)
    ctx->pc = 0x3a0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11332), GPR_U32(ctx, 0));
label_3a0f24:
    // 0x3a0f24: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x3a0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_3a0f28:
    // 0x3a0f28: 0x10000076  b           . + 4 + (0x76 << 2)
label_3a0f2c:
    if (ctx->pc == 0x3A0F2Cu) {
        ctx->pc = 0x3A0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F28u;
        // 0x3a0f2c: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F30u;
        goto label_3a0f30;
    }
    ctx->pc = 0x3A0F28u;
    {
        const bool branch_taken_0x3a0f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F28u;
        // 0x3a0f2c: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f28) {
            ctx->pc = 0x3A1104u;
            goto label_3a1104;
        }
    }
    ctx->pc = 0x3A0F30u;
label_3a0f30:
    // 0x3a0f30: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x3a0f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3a0f34:
    // 0x3a0f34: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x3a0f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_3a0f38:
    // 0x3a0f38: 0x10600072  beqz        $v1, . + 4 + (0x72 << 2)
label_3a0f3c:
    if (ctx->pc == 0x3A0F3Cu) {
        ctx->pc = 0x3A0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F38u;
        // 0x3a0f3c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A0F40u;
        goto label_3a0f40;
    }
    ctx->pc = 0x3A0F38u;
    {
        const bool branch_taken_0x3a0f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0F38u;
        // 0x3a0f3c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0f38) {
            ctx->pc = 0x3A1104u;
            goto label_3a1104;
        }
    }
    ctx->pc = 0x3A0F40u;
label_3a0f40:
    // 0x3a0f40: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x3a0f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_3a0f44:
    // 0x3a0f44: 0x78830050  lq          $v1, 0x50($a0)
    ctx->pc = 0x3a0f44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_3a0f48:
    // 0x3a0f48: 0x78820060  lq          $v0, 0x60($a0)
    ctx->pc = 0x3a0f48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 96)));
label_3a0f4c:
    // 0x3a0f4c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a0f4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a0f50:
    // 0x3a0f50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3a0f50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a0f54:
    // 0x3a0f54: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3a0f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a0f58:
    // 0x3a0f58: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a0f58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a0f5c:
    // 0x3a0f5c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3a0f5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a0f60:
    // 0x3a0f60: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a0f60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a0f64:
    // 0x3a0f64: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3a0f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a0f68:
    // 0x3a0f68: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3a0f68u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a0f6c:
    // 0x3a0f6c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a0f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a0f70:
    // 0x3a0f70: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3a0f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a0f74:
    // 0x3a0f74: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3a0f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a0f78:
    // 0x3a0f78: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3a0f78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a0f7c:
    // 0x3a0f7c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3a0f7cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a0f80:
    // 0x3a0f80: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3a0f80u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a0f84:
    // 0x3a0f84: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3a0f84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a0f88:
    // 0x3a0f88: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3a0f88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a0f8c:
    // 0x3a0f8c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3a0f8cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3a0f90:
    // 0x3a0f90: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a0f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3a0f94:
    // 0x3a0f94: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x3a0f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_3a0f98:
    // 0x3a0f98: 0x78820040  lq          $v0, 0x40($a0)
    ctx->pc = 0x3a0f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 64)));
label_3a0f9c:
    // 0x3a0f9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a0f9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a0fa0:
    // 0x3a0fa0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a0fa0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a0fa4:
    // 0x3a0fa4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a0fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a0fa8:
    // 0x3a0fa8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a0fa8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a0fac:
    // 0x3a0fac: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x3a0facu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_3a0fb0:
    // 0x3a0fb0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3a0fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3a0fb4:
    // 0x3a0fb4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a0fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3a0fb8:
    // 0x3a0fb8: 0x78820050  lq          $v0, 0x50($a0)
    ctx->pc = 0x3a0fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 80)));
label_3a0fbc:
    // 0x3a0fbc: 0x78830070  lq          $v1, 0x70($a0)
    ctx->pc = 0x3a0fbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 112)));
label_3a0fc0:
    // 0x3a0fc0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a0fc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a0fc4:
    // 0x3a0fc4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3a0fc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a0fc8:
    // 0x3a0fc8: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3a0fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a0fcc:
    // 0x3a0fcc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3a0fccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a0fd0:
    // 0x3a0fd0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3a0fd0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3a0fd4:
    // 0x3a0fd4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3a0fd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a0fd8:
    // 0x3a0fd8: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3a0fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3a0fdc:
    // 0x3a0fdc: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3a0fdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a0fe0:
    // 0x3a0fe0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3a0fe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3a0fe4:
    // 0x3a0fe4: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3a0fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a0fe8:
    // 0x3a0fe8: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3a0fe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3a0fec:
    // 0x3a0fec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3a0fecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3a0ff0:
    // 0x3a0ff0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x3a0ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_3a0ff4:
    // 0x3a0ff4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3a0ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3a0ff8:
    // 0x3a0ff8: 0x8c832c7c  lw          $v1, 0x2C7C($a0)
    ctx->pc = 0x3a0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11388)));
label_3a0ffc:
    // 0x3a0ffc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3a0ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a1000:
    // 0x3a1000: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3a1000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3a1004:
    // 0x3a1004: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3a1004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a1008:
    // 0x3a1008: 0x8c620850  lw          $v0, 0x850($v1)
    ctx->pc = 0x3a1008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2128)));
label_3a100c:
    // 0x3a100c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a100cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3a1010:
    // 0x3a1010: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a1010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3a1014:
    // 0x3a1014: 0xc0cd8ec  jal         func_3363B0
label_3a1018:
    if (ctx->pc == 0x3A1018u) {
        ctx->pc = 0x3A1018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1014u;
        // 0x3a1018: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A101Cu;
        goto label_3a101c;
    }
    ctx->pc = 0x3A1014u;
    SET_GPR_U32(ctx, 31, 0x3A101Cu);
    ctx->pc = 0x3A1018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1014u;
    // 0x3a1018: 0x8c500014  lw          $s0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x3A1014u, 0x3A101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A101Cu;
label_3a101c:
    // 0x3a101c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a101cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3a1020:
    // 0x3a1020: 0x8c45cdb4  lw          $a1, -0x324C($v0)
    ctx->pc = 0x3a1020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954420)));
label_3a1024:
    // 0x3a1024: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3a1024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3a1028:
    // 0x3a1028: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x3a1028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_3a102c:
    // 0x3a102c: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x3a102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_3a1030:
    // 0x3a1030: 0x40f809  jalr        $v0
label_3a1034:
    if (ctx->pc == 0x3A1034u) {
        ctx->pc = 0x3A1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1030u;
        // 0x3a1034: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1038u;
        goto label_3a1038;
    }
    ctx->pc = 0x3A1030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1038u);
        ctx->pc = 0x3A1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1030u;
        // 0x3a1034: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1030u, 0x3A1038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1038u;
label_3a1038:
    // 0x3a1038: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a103c:
    if (ctx->pc == 0x3A103Cu) {
        ctx->pc = 0x3A103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1038u;
        // 0x3a103c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1040u;
        goto label_3a1040;
    }
    ctx->pc = 0x3A1038u;
    {
        const bool branch_taken_0x3a1038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1038u;
        // 0x3a103c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1038) {
            ctx->pc = 0x3A104Cu;
            goto label_3a104c;
        }
    }
    ctx->pc = 0x3A1040u;
label_3a1040:
    // 0x3a1040: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3a1040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3a1044:
    // 0x3a1044: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3a1044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3a1048:
    // 0x3a1048: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3a1048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3a104c:
    // 0x3a104c: 0x844401f8  lh          $a0, 0x1F8($v0)
    ctx->pc = 0x3a104cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 504)));
label_3a1050:
    // 0x3a1050: 0x8c4301fc  lw          $v1, 0x1FC($v0)
    ctx->pc = 0x3a1050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_3a1054:
    // 0x3a1054: 0x60f809  jalr        $v1
label_3a1058:
    if (ctx->pc == 0x3A1058u) {
        ctx->pc = 0x3A1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1054u;
        // 0x3a1058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A105Cu;
        goto label_3a105c;
    }
    ctx->pc = 0x3A1054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A105Cu);
        ctx->pc = 0x3A1058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1054u;
        // 0x3a1058: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1054u, 0x3A105Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A105Cu;
label_3a105c:
    // 0x3a105c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a1060:
    // 0x3a1060: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a1060u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3a1064:
    // 0x3a1064: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x3a1064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_3a1068:
    // 0x3a1068: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x3a1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_3a106c:
    // 0x3a106c: 0x60f809  jalr        $v1
label_3a1070:
    if (ctx->pc == 0x3A1070u) {
        ctx->pc = 0x3A1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A106Cu;
        // 0x3a1070: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1074u;
        goto label_3a1074;
    }
    ctx->pc = 0x3A106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1074u);
        ctx->pc = 0x3A1070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A106Cu;
        // 0x3a1070: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A106Cu, 0x3A1074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1074u;
label_3a1074:
    // 0x3a1074: 0x3c013c0e  lui         $at, 0x3C0E
    ctx->pc = 0x3a1074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15374 << 16));
label_3a1078:
    // 0x3a1078: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x3a1078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_3a107c:
    // 0x3a107c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3a107cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3a1080:
    // 0x3a1080: 0xc12e34c  jal         func_4B8D30
label_3a1084:
    if (ctx->pc == 0x3A1084u) {
        ctx->pc = 0x3A1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1080u;
        // 0x3a1084: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1088u;
        goto label_3a1088;
    }
    ctx->pc = 0x3A1080u;
    SET_GPR_U32(ctx, 31, 0x3A1088u);
    ctx->pc = 0x3A1084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1080u;
    // 0x3a1084: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8D30u, 0x3A1080u, 0x3A1088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1088u;
label_3a1088:
    // 0x3a1088: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x3a1088u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_3a108c:
    // 0x3a108c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3a108cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1090:
    // 0x3a1090: 0x8e2700d0  lw          $a3, 0xD0($s1)
    ctx->pc = 0x3a1090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 208)));
label_3a1094:
    // 0x3a1094: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a1094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1098:
    // 0x3a1098: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a1098u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a109c:
    // 0x3a109c: 0x0  nop
    ctx->pc = 0x3a109cu;
    // NOP
label_3a10a0:
    // 0x3a10a0: 0x0  nop
    ctx->pc = 0x3a10a0u;
    // NOP
label_3a10a4:
    // 0x3a10a4: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x3a10a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_3a10a8:
    // 0x3a10a8: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x3a10a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a10ac:
    // 0x3a10ac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3a10acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a10b0:
    // 0x3a10b0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3a10b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3a10b4:
    // 0x3a10b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3a10b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3a10b8:
    // 0x3a10b8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3a10b8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3a10bc:
    // 0x3a10bc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3a10bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3a10c0:
    // 0x3a10c0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3a10c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3a10c4:
    // 0x3a10c4: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3a10c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3a10c8:
    // 0x3a10c8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3a10c8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3a10cc:
    // 0x3a10cc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3a10ccu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_3a10d0:
    // 0x3a10d0: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3a10d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3a10d4:
    // 0x3a10d4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3a10d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3a10d8:
    // 0x3a10d8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a10d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3a10dc:
    // 0x3a10dc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3a10dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3a10e0:
    // 0x3a10e0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3a10e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3a10e4:
    // 0x3a10e4: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3a10e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3a10e8:
    // 0x3a10e8: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x3a10e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3a10ec:
    // 0x3a10ec: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3a10ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3a10f0:
    // 0x3a10f0: 0x84c40068  lh          $a0, 0x68($a2)
    ctx->pc = 0x3a10f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 104)));
label_3a10f4:
    // 0x3a10f4: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x3a10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_3a10f8:
    // 0x3a10f8: 0x40f809  jalr        $v0
label_3a10fc:
    if (ctx->pc == 0x3A10FCu) {
        ctx->pc = 0x3A10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10F8u;
        // 0x3a10fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1100u;
        goto label_3a1100;
    }
    ctx->pc = 0x3A10F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1100u);
        ctx->pc = 0x3A10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A10F8u;
        // 0x3a10fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A10F8u, 0x3A1100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1100u;
label_3a1100:
    // 0x3a1100: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3a1100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a1104:
    // 0x3a1104: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3a1104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a1108:
    // 0x3a1108: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a1108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a110c:
    // 0x3a110c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x3a110cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3a1110:
    // 0x3a1110: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3a1110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a1114:
    // 0x3a1114: 0x3e00008  jr          $ra
label_3a1118:
    if (ctx->pc == 0x3A1118u) {
        ctx->pc = 0x3A1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1114u;
        // 0x3a1118: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A111Cu;
        goto label_3a111c;
    }
    ctx->pc = 0x3A1114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1114u;
        // 0x3a1118: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A111Cu;
label_3a111c:
    // 0x3a111c: 0x0  nop
    ctx->pc = 0x3a111cu;
    // NOP
    ctx->pc = 0x3a1120u;
}
