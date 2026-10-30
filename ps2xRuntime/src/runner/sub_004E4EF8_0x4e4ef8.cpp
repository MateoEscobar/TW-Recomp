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

// Function: sub_004E4EF8
// Address: 0x4e4ef8 - 0x4e5098
void sub_004E4EF8_0x4e4ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4EF8_0x4e4ef8");
#endif

    switch (ctx->pc) {
        case 0x4e4ef8u: goto label_4e4ef8;
        case 0x4e4efcu: goto label_4e4efc;
        case 0x4e4f00u: goto label_4e4f00;
        case 0x4e4f04u: goto label_4e4f04;
        case 0x4e4f08u: goto label_4e4f08;
        case 0x4e4f0cu: goto label_4e4f0c;
        case 0x4e4f10u: goto label_4e4f10;
        case 0x4e4f14u: goto label_4e4f14;
        case 0x4e4f18u: goto label_4e4f18;
        case 0x4e4f1cu: goto label_4e4f1c;
        case 0x4e4f20u: goto label_4e4f20;
        case 0x4e4f24u: goto label_4e4f24;
        case 0x4e4f28u: goto label_4e4f28;
        case 0x4e4f2cu: goto label_4e4f2c;
        case 0x4e4f30u: goto label_4e4f30;
        case 0x4e4f34u: goto label_4e4f34;
        case 0x4e4f38u: goto label_4e4f38;
        case 0x4e4f3cu: goto label_4e4f3c;
        case 0x4e4f40u: goto label_4e4f40;
        case 0x4e4f44u: goto label_4e4f44;
        case 0x4e4f48u: goto label_4e4f48;
        case 0x4e4f4cu: goto label_4e4f4c;
        case 0x4e4f50u: goto label_4e4f50;
        case 0x4e4f54u: goto label_4e4f54;
        case 0x4e4f58u: goto label_4e4f58;
        case 0x4e4f5cu: goto label_4e4f5c;
        case 0x4e4f60u: goto label_4e4f60;
        case 0x4e4f64u: goto label_4e4f64;
        case 0x4e4f68u: goto label_4e4f68;
        case 0x4e4f6cu: goto label_4e4f6c;
        case 0x4e4f70u: goto label_4e4f70;
        case 0x4e4f74u: goto label_4e4f74;
        case 0x4e4f78u: goto label_4e4f78;
        case 0x4e4f7cu: goto label_4e4f7c;
        case 0x4e4f80u: goto label_4e4f80;
        case 0x4e4f84u: goto label_4e4f84;
        case 0x4e4f88u: goto label_4e4f88;
        case 0x4e4f8cu: goto label_4e4f8c;
        case 0x4e4f90u: goto label_4e4f90;
        case 0x4e4f94u: goto label_4e4f94;
        case 0x4e4f98u: goto label_4e4f98;
        case 0x4e4f9cu: goto label_4e4f9c;
        case 0x4e4fa0u: goto label_4e4fa0;
        case 0x4e4fa4u: goto label_4e4fa4;
        case 0x4e4fa8u: goto label_4e4fa8;
        case 0x4e4facu: goto label_4e4fac;
        case 0x4e4fb0u: goto label_4e4fb0;
        case 0x4e4fb4u: goto label_4e4fb4;
        case 0x4e4fb8u: goto label_4e4fb8;
        case 0x4e4fbcu: goto label_4e4fbc;
        case 0x4e4fc0u: goto label_4e4fc0;
        case 0x4e4fc4u: goto label_4e4fc4;
        case 0x4e4fc8u: goto label_4e4fc8;
        case 0x4e4fccu: goto label_4e4fcc;
        case 0x4e4fd0u: goto label_4e4fd0;
        case 0x4e4fd4u: goto label_4e4fd4;
        case 0x4e4fd8u: goto label_4e4fd8;
        case 0x4e4fdcu: goto label_4e4fdc;
        case 0x4e4fe0u: goto label_4e4fe0;
        case 0x4e4fe4u: goto label_4e4fe4;
        case 0x4e4fe8u: goto label_4e4fe8;
        case 0x4e4fecu: goto label_4e4fec;
        case 0x4e4ff0u: goto label_4e4ff0;
        case 0x4e4ff4u: goto label_4e4ff4;
        case 0x4e4ff8u: goto label_4e4ff8;
        case 0x4e4ffcu: goto label_4e4ffc;
        case 0x4e5000u: goto label_4e5000;
        case 0x4e5004u: goto label_4e5004;
        case 0x4e5008u: goto label_4e5008;
        case 0x4e500cu: goto label_4e500c;
        case 0x4e5010u: goto label_4e5010;
        case 0x4e5014u: goto label_4e5014;
        case 0x4e5018u: goto label_4e5018;
        case 0x4e501cu: goto label_4e501c;
        case 0x4e5020u: goto label_4e5020;
        case 0x4e5024u: goto label_4e5024;
        case 0x4e5028u: goto label_4e5028;
        case 0x4e502cu: goto label_4e502c;
        case 0x4e5030u: goto label_4e5030;
        case 0x4e5034u: goto label_4e5034;
        case 0x4e5038u: goto label_4e5038;
        case 0x4e503cu: goto label_4e503c;
        case 0x4e5040u: goto label_4e5040;
        case 0x4e5044u: goto label_4e5044;
        case 0x4e5048u: goto label_4e5048;
        case 0x4e504cu: goto label_4e504c;
        case 0x4e5050u: goto label_4e5050;
        case 0x4e5054u: goto label_4e5054;
        case 0x4e5058u: goto label_4e5058;
        case 0x4e505cu: goto label_4e505c;
        case 0x4e5060u: goto label_4e5060;
        case 0x4e5064u: goto label_4e5064;
        case 0x4e5068u: goto label_4e5068;
        case 0x4e506cu: goto label_4e506c;
        case 0x4e5070u: goto label_4e5070;
        case 0x4e5074u: goto label_4e5074;
        case 0x4e5078u: goto label_4e5078;
        case 0x4e507cu: goto label_4e507c;
        case 0x4e5080u: goto label_4e5080;
        case 0x4e5084u: goto label_4e5084;
        case 0x4e5088u: goto label_4e5088;
        case 0x4e508cu: goto label_4e508c;
        case 0x4e5090u: goto label_4e5090;
        case 0x4e5094u: goto label_4e5094;
        default: break;
    }

    ctx->pc = 0x4e4ef8u;

label_4e4ef8:
    // 0x4e4ef8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e4ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e4efc:
    // 0x4e4efc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e4f00:
    // 0x4e4f00: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e4f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e4f04:
    // 0x4e4f04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e4f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4f08:
    // 0x4e4f08: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e4f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e4f0c:
    // 0x4e4f0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e4f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4f10:
    // 0x4e4f10: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e4f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e4f14:
    // 0x4e4f14: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e4f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e4f18:
    // 0x4e4f18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e4f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e4f1c:
    // 0x4e4f1c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e4f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e4f20:
    // 0x4e4f20: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e4f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e4f24:
    // 0x4e4f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4f28:
    // 0x4e4f28: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e4f2c:
    // 0x4e4f2c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e4f30:
    // 0x4e4f30: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e4f34:
    if (ctx->pc == 0x4E4F34u) {
        ctx->pc = 0x4E4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4F30u;
        // 0x4e4f34: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4F38u;
        goto label_4e4f38;
    }
    ctx->pc = 0x4E4F30u;
    {
        const bool branch_taken_0x4e4f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4F30u;
        // 0x4e4f34: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4f30) {
            ctx->pc = 0x4E4F7Cu;
            goto label_4e4f7c;
        }
    }
    ctx->pc = 0x4E4F38u;
label_4e4f38:
    // 0x4e4f38: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e4f3c:
    if (ctx->pc == 0x4E4F3Cu) {
        ctx->pc = 0x4E4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4F38u;
        // 0x4e4f3c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4F40u;
        goto label_4e4f40;
    }
    ctx->pc = 0x4E4F38u;
    {
        const bool branch_taken_0x4e4f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4f38) {
            ctx->pc = 0x4E4F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4F38u;
            // 0x4e4f3c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4F4Cu;
            goto label_4e4f4c;
        }
    }
    ctx->pc = 0x4E4F40u;
label_4e4f40:
    // 0x4e4f40: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e4f44:
    // 0x4e4f44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e4f44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e4f48:
    // 0x4e4f48: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e4f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e4f4c:
    // 0x4e4f4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e4f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e4f50:
    // 0x4e4f50: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e4f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e4f54:
    // 0x4e4f54: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e4f58:
    // 0x4e4f58: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e4f58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e4f5c:
    // 0x4e4f5c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e4f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e4f60:
    // 0x4e4f60: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e4f60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e4f64:
    // 0x4e4f64: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e4f68:
    // 0x4e4f68: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e4f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e4f6c:
    // 0x4e4f6c: 0xc10c1bb  jal         func_4306EC
label_4e4f70:
    if (ctx->pc == 0x4E4F70u) {
        ctx->pc = 0x4E4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4F6Cu;
        // 0x4e4f70: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4F74u;
        goto label_4e4f74;
    }
    ctx->pc = 0x4E4F6Cu;
    SET_GPR_U32(ctx, 31, 0x4E4F74u);
    ctx->pc = 0x4E4F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4F6Cu;
    // 0x4e4f70: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E4F6Cu, 0x4E4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4F74u;
label_4e4f74:
    // 0x4e4f74: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e4f78:
    if (ctx->pc == 0x4E4F78u) {
        ctx->pc = 0x4E4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4F74u;
        // 0x4e4f78: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4F7Cu;
        goto label_4e4f7c;
    }
    ctx->pc = 0x4E4F74u;
    {
        const bool branch_taken_0x4e4f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4F74u;
        // 0x4e4f78: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4f74) {
            ctx->pc = 0x4E506Cu;
            goto label_4e506c;
        }
    }
    ctx->pc = 0x4E4F7Cu;
label_4e4f7c:
    // 0x4e4f7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e4f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e4f80:
    // 0x4e4f80: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e4f80u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e4f84:
    // 0x4e4f84: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e4f84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e4f88:
    // 0x4e4f88: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e4f8c:
    // 0x4e4f8c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e4f90:
    // 0x4e4f90: 0x24964b20  addiu       $s6, $a0, 0x4B20
    ctx->pc = 0x4e4f90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
label_4e4f94:
    // 0x4e4f94: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e4f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e4f98:
    // 0x4e4f98: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e4f98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e4f9c:
    // 0x4e4f9c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e4f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e4fa0:
    // 0x4e4fa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e4fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4fa4:
    // 0x4e4fa4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e4fa4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e4fa8:
    // 0x4e4fa8: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e4fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e4fac:
    // 0x4e4fac: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e4facu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e4fb0:
    // 0x4e4fb0: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e4fb4:
    // 0x4e4fb4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e4fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e4fb8:
    // 0x4e4fb8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e4fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e4fbc:
    // 0x4e4fbc: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e4fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e4fc0:
    // 0x4e4fc0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e4fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e4fc4:
    // 0x4e4fc4: 0x24a54c78  addiu       $a1, $a1, 0x4C78
    ctx->pc = 0x4e4fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19576));
label_4e4fc8:
    // 0x4e4fc8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e4fc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e4fcc:
    // 0x4e4fcc: 0x254a4c80  addiu       $t2, $t2, 0x4C80
    ctx->pc = 0x4e4fccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 19584));
label_4e4fd0:
    // 0x4e4fd0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e4fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e4fd4:
    // 0x4e4fd4: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e4fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e4fd8:
    // 0x4e4fd8: 0x40f809  jalr        $v0
label_4e4fdc:
    if (ctx->pc == 0x4E4FDCu) {
        ctx->pc = 0x4E4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4FD8u;
        // 0x4e4fdc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4FE0u;
        goto label_4e4fe0;
    }
    ctx->pc = 0x4E4FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E4FE0u);
        ctx->pc = 0x4E4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4FD8u;
        // 0x4e4fdc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4FD8u, 0x4E4FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4FE0u;
label_4e4fe0:
    // 0x4e4fe0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e4fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e4fe4:
    // 0x4e4fe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e4fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e4fe8:
    // 0x4e4fe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4fec:
    // 0x4e4fec: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e4ff0:
    // 0x4e4ff0: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e4ff0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e4ff4:
    // 0x4e4ff4: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e4ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e4ff8:
    // 0x4e4ff8: 0xc10c1bb  jal         func_4306EC
label_4e4ffc:
    if (ctx->pc == 0x4E4FFCu) {
        ctx->pc = 0x4E4FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4FF8u;
        // 0x4e4ffc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5000u;
        goto label_4e5000;
    }
    ctx->pc = 0x4E4FF8u;
    SET_GPR_U32(ctx, 31, 0x4E5000u);
    ctx->pc = 0x4E4FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4FF8u;
    // 0x4e4ffc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E4FF8u, 0x4E5000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5000u;
label_4e5000:
    // 0x4e5000: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e5004:
    if (ctx->pc == 0x4E5004u) {
        ctx->pc = 0x4E5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5000u;
        // 0x4e5004: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5008u;
        goto label_4e5008;
    }
    ctx->pc = 0x4E5000u;
    {
        const bool branch_taken_0x4e5000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5000) {
            ctx->pc = 0x4E5004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5000u;
            // 0x4e5004: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E5014u;
            goto label_4e5014;
        }
    }
    ctx->pc = 0x4E5008u;
label_4e5008:
    // 0x4e5008: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e5008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e500c:
    // 0x4e500c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e500cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e5010:
    // 0x4e5010: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e5010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e5014:
    // 0x4e5014: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e5014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e5018:
    // 0x4e5018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e501c:
    // 0x4e501c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e501cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e5020:
    // 0x4e5020: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e5020u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e5024:
    // 0x4e5024: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e5024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e5028:
    // 0x4e5028: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e5028u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e502c:
    // 0x4e502c: 0xc10c1bb  jal         func_4306EC
label_4e5030:
    if (ctx->pc == 0x4E5030u) {
        ctx->pc = 0x4E5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E502Cu;
        // 0x4e5030: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5034u;
        goto label_4e5034;
    }
    ctx->pc = 0x4E502Cu;
    SET_GPR_U32(ctx, 31, 0x4E5034u);
    ctx->pc = 0x4E5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E502Cu;
    // 0x4e5030: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E502Cu, 0x4E5034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E5034u;
label_4e5034:
    // 0x4e5034: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e5034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e5038:
    // 0x4e5038: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e503c:
    if (ctx->pc == 0x4E503Cu) {
        ctx->pc = 0x4E503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5038u;
        // 0x4e503c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5040u;
        goto label_4e5040;
    }
    ctx->pc = 0x4E5038u;
    {
        const bool branch_taken_0x4e5038 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5038u;
        // 0x4e503c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5038) {
            ctx->pc = 0x4E505Cu;
            goto label_4e505c;
        }
    }
    ctx->pc = 0x4E5040u;
label_4e5040:
    // 0x4e5040: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e5040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e5044:
    // 0x4e5044: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e5044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e5048:
    // 0x4e5048: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e504c:
    // 0x4e504c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e504cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e5050:
    // 0x4e5050: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e5050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e5054:
    // 0x4e5054: 0x60f809  jalr        $v1
label_4e5058:
    if (ctx->pc == 0x4E5058u) {
        ctx->pc = 0x4E5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5054u;
        // 0x4e5058: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E505Cu;
        goto label_4e505c;
    }
    ctx->pc = 0x4E5054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E505Cu);
        ctx->pc = 0x4E5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5054u;
        // 0x4e5058: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5054u, 0x4E505Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E505Cu;
label_4e505c:
    // 0x4e505c: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e505cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e5060:
    // 0x4e5060: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e5060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e5064:
    // 0x4e5064: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e5064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e5068:
    // 0x4e5068: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e5068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e506c:
    // 0x4e506c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e506cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e5070:
    // 0x4e5070: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e5070u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e5074:
    // 0x4e5074: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e5074u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e5078:
    // 0x4e5078: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e5078u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e507c:
    // 0x4e507c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e507cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e5080:
    // 0x4e5080: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e5080u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e5084:
    // 0x4e5084: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e5084u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e5088:
    // 0x4e5088: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e5088u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e508c:
    // 0x4e508c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5090:
    // 0x4e5090: 0x3e00008  jr          $ra
label_4e5094:
    if (ctx->pc == 0x4E5094u) {
        ctx->pc = 0x4E5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5090u;
        // 0x4e5094: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E5098u;
        goto label_fallthrough_0x4e5090;
    }
    ctx->pc = 0x4E5090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E5090u;
        // 0x4e5094: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E5090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e5090:
    ctx->pc = 0x4E5098u;
}
