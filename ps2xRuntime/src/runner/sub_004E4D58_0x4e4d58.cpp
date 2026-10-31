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

// Function: sub_004E4D58
// Address: 0x4e4d58 - 0x4e4ef8
void sub_004E4D58_0x4e4d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4D58_0x4e4d58");
#endif

    switch (ctx->pc) {
        case 0x4e4d58u: goto label_4e4d58;
        case 0x4e4d5cu: goto label_4e4d5c;
        case 0x4e4d60u: goto label_4e4d60;
        case 0x4e4d64u: goto label_4e4d64;
        case 0x4e4d68u: goto label_4e4d68;
        case 0x4e4d6cu: goto label_4e4d6c;
        case 0x4e4d70u: goto label_4e4d70;
        case 0x4e4d74u: goto label_4e4d74;
        case 0x4e4d78u: goto label_4e4d78;
        case 0x4e4d7cu: goto label_4e4d7c;
        case 0x4e4d80u: goto label_4e4d80;
        case 0x4e4d84u: goto label_4e4d84;
        case 0x4e4d88u: goto label_4e4d88;
        case 0x4e4d8cu: goto label_4e4d8c;
        case 0x4e4d90u: goto label_4e4d90;
        case 0x4e4d94u: goto label_4e4d94;
        case 0x4e4d98u: goto label_4e4d98;
        case 0x4e4d9cu: goto label_4e4d9c;
        case 0x4e4da0u: goto label_4e4da0;
        case 0x4e4da4u: goto label_4e4da4;
        case 0x4e4da8u: goto label_4e4da8;
        case 0x4e4dacu: goto label_4e4dac;
        case 0x4e4db0u: goto label_4e4db0;
        case 0x4e4db4u: goto label_4e4db4;
        case 0x4e4db8u: goto label_4e4db8;
        case 0x4e4dbcu: goto label_4e4dbc;
        case 0x4e4dc0u: goto label_4e4dc0;
        case 0x4e4dc4u: goto label_4e4dc4;
        case 0x4e4dc8u: goto label_4e4dc8;
        case 0x4e4dccu: goto label_4e4dcc;
        case 0x4e4dd0u: goto label_4e4dd0;
        case 0x4e4dd4u: goto label_4e4dd4;
        case 0x4e4dd8u: goto label_4e4dd8;
        case 0x4e4ddcu: goto label_4e4ddc;
        case 0x4e4de0u: goto label_4e4de0;
        case 0x4e4de4u: goto label_4e4de4;
        case 0x4e4de8u: goto label_4e4de8;
        case 0x4e4decu: goto label_4e4dec;
        case 0x4e4df0u: goto label_4e4df0;
        case 0x4e4df4u: goto label_4e4df4;
        case 0x4e4df8u: goto label_4e4df8;
        case 0x4e4dfcu: goto label_4e4dfc;
        case 0x4e4e00u: goto label_4e4e00;
        case 0x4e4e04u: goto label_4e4e04;
        case 0x4e4e08u: goto label_4e4e08;
        case 0x4e4e0cu: goto label_4e4e0c;
        case 0x4e4e10u: goto label_4e4e10;
        case 0x4e4e14u: goto label_4e4e14;
        case 0x4e4e18u: goto label_4e4e18;
        case 0x4e4e1cu: goto label_4e4e1c;
        case 0x4e4e20u: goto label_4e4e20;
        case 0x4e4e24u: goto label_4e4e24;
        case 0x4e4e28u: goto label_4e4e28;
        case 0x4e4e2cu: goto label_4e4e2c;
        case 0x4e4e30u: goto label_4e4e30;
        case 0x4e4e34u: goto label_4e4e34;
        case 0x4e4e38u: goto label_4e4e38;
        case 0x4e4e3cu: goto label_4e4e3c;
        case 0x4e4e40u: goto label_4e4e40;
        case 0x4e4e44u: goto label_4e4e44;
        case 0x4e4e48u: goto label_4e4e48;
        case 0x4e4e4cu: goto label_4e4e4c;
        case 0x4e4e50u: goto label_4e4e50;
        case 0x4e4e54u: goto label_4e4e54;
        case 0x4e4e58u: goto label_4e4e58;
        case 0x4e4e5cu: goto label_4e4e5c;
        case 0x4e4e60u: goto label_4e4e60;
        case 0x4e4e64u: goto label_4e4e64;
        case 0x4e4e68u: goto label_4e4e68;
        case 0x4e4e6cu: goto label_4e4e6c;
        case 0x4e4e70u: goto label_4e4e70;
        case 0x4e4e74u: goto label_4e4e74;
        case 0x4e4e78u: goto label_4e4e78;
        case 0x4e4e7cu: goto label_4e4e7c;
        case 0x4e4e80u: goto label_4e4e80;
        case 0x4e4e84u: goto label_4e4e84;
        case 0x4e4e88u: goto label_4e4e88;
        case 0x4e4e8cu: goto label_4e4e8c;
        case 0x4e4e90u: goto label_4e4e90;
        case 0x4e4e94u: goto label_4e4e94;
        case 0x4e4e98u: goto label_4e4e98;
        case 0x4e4e9cu: goto label_4e4e9c;
        case 0x4e4ea0u: goto label_4e4ea0;
        case 0x4e4ea4u: goto label_4e4ea4;
        case 0x4e4ea8u: goto label_4e4ea8;
        case 0x4e4eacu: goto label_4e4eac;
        case 0x4e4eb0u: goto label_4e4eb0;
        case 0x4e4eb4u: goto label_4e4eb4;
        case 0x4e4eb8u: goto label_4e4eb8;
        case 0x4e4ebcu: goto label_4e4ebc;
        case 0x4e4ec0u: goto label_4e4ec0;
        case 0x4e4ec4u: goto label_4e4ec4;
        case 0x4e4ec8u: goto label_4e4ec8;
        case 0x4e4eccu: goto label_4e4ecc;
        case 0x4e4ed0u: goto label_4e4ed0;
        case 0x4e4ed4u: goto label_4e4ed4;
        case 0x4e4ed8u: goto label_4e4ed8;
        case 0x4e4edcu: goto label_4e4edc;
        case 0x4e4ee0u: goto label_4e4ee0;
        case 0x4e4ee4u: goto label_4e4ee4;
        case 0x4e4ee8u: goto label_4e4ee8;
        case 0x4e4eecu: goto label_4e4eec;
        case 0x4e4ef0u: goto label_4e4ef0;
        case 0x4e4ef4u: goto label_4e4ef4;
        default: break;
    }

    ctx->pc = 0x4e4d58u;

label_4e4d58:
    // 0x4e4d58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e4d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e4d5c:
    // 0x4e4d5c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e4d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e4d60:
    // 0x4e4d60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e4d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e4d64:
    // 0x4e4d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e4d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4d68:
    // 0x4e4d68: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e4d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e4d6c:
    // 0x4e4d6c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e4d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4d70:
    // 0x4e4d70: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e4d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e4d74:
    // 0x4e4d74: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e4d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e4d78:
    // 0x4e4d78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e4d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e4d7c:
    // 0x4e4d7c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e4d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e4d80:
    // 0x4e4d80: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e4d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e4d84:
    // 0x4e4d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4d88:
    // 0x4e4d88: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e4d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e4d8c:
    // 0x4e4d8c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e4d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e4d90:
    // 0x4e4d90: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e4d94:
    if (ctx->pc == 0x4E4D94u) {
        ctx->pc = 0x4E4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D90u;
        // 0x4e4d94: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4D98u;
        goto label_4e4d98;
    }
    ctx->pc = 0x4E4D90u;
    {
        const bool branch_taken_0x4e4d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D90u;
        // 0x4e4d94: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4d90) {
            ctx->pc = 0x4E4DDCu;
            goto label_4e4ddc;
        }
    }
    ctx->pc = 0x4E4D98u;
label_4e4d98:
    // 0x4e4d98: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e4d9c:
    if (ctx->pc == 0x4E4D9Cu) {
        ctx->pc = 0x4E4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D98u;
        // 0x4e4d9c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4DA0u;
        goto label_4e4da0;
    }
    ctx->pc = 0x4E4D98u;
    {
        const bool branch_taken_0x4e4d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4d98) {
            ctx->pc = 0x4E4D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4D98u;
            // 0x4e4d9c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4DACu;
            goto label_4e4dac;
        }
    }
    ctx->pc = 0x4E4DA0u;
label_4e4da0:
    // 0x4e4da0: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e4da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e4da4:
    // 0x4e4da4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e4da4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e4da8:
    // 0x4e4da8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e4da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e4dac:
    // 0x4e4dac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e4dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e4db0:
    // 0x4e4db0: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e4db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e4db4:
    // 0x4e4db4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e4db8:
    // 0x4e4db8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e4db8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e4dbc:
    // 0x4e4dbc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e4dc0:
    // 0x4e4dc0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e4dc0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e4dc4:
    // 0x4e4dc4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e4dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e4dc8:
    // 0x4e4dc8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e4dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e4dcc:
    // 0x4e4dcc: 0xc10c1bb  jal         func_4306EC
label_4e4dd0:
    if (ctx->pc == 0x4E4DD0u) {
        ctx->pc = 0x4E4DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4DCCu;
        // 0x4e4dd0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4DD4u;
        goto label_4e4dd4;
    }
    ctx->pc = 0x4E4DCCu;
    SET_GPR_U32(ctx, 31, 0x4E4DD4u);
    ctx->pc = 0x4E4DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4DCCu;
    // 0x4e4dd0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E4DCCu, 0x4E4DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4DD4u;
label_4e4dd4:
    // 0x4e4dd4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e4dd8:
    if (ctx->pc == 0x4E4DD8u) {
        ctx->pc = 0x4E4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4DD4u;
        // 0x4e4dd8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4DDCu;
        goto label_4e4ddc;
    }
    ctx->pc = 0x4E4DD4u;
    {
        const bool branch_taken_0x4e4dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4DD4u;
        // 0x4e4dd8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4dd4) {
            ctx->pc = 0x4E4ECCu;
            goto label_4e4ecc;
        }
    }
    ctx->pc = 0x4E4DDCu;
label_4e4ddc:
    // 0x4e4ddc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e4de0:
    // 0x4e4de0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e4de0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e4de4:
    // 0x4e4de4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e4de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e4de8:
    // 0x4e4de8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e4dec:
    // 0x4e4dec: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e4decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e4df0:
    // 0x4e4df0: 0x24964b20  addiu       $s6, $a0, 0x4B20
    ctx->pc = 0x4e4df0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
label_4e4df4:
    // 0x4e4df4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e4df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e4df8:
    // 0x4e4df8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e4df8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e4dfc:
    // 0x4e4dfc: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e4e00:
    // 0x4e4e00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e4e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4e04:
    // 0x4e4e04: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e4e04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e4e08:
    // 0x4e4e08: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e4e08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e4e0c:
    // 0x4e4e0c: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e4e0cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e4e10:
    // 0x4e4e10: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e4e14:
    // 0x4e4e14: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e4e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e4e18:
    // 0x4e4e18: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e4e1c:
    // 0x4e4e1c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e4e1cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e4e20:
    // 0x4e4e20: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e4e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e4e24:
    // 0x4e4e24: 0x24a54c78  addiu       $a1, $a1, 0x4C78
    ctx->pc = 0x4e4e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19576));
label_4e4e28:
    // 0x4e4e28: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e4e28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e4e2c:
    // 0x4e4e2c: 0x254a4c80  addiu       $t2, $t2, 0x4C80
    ctx->pc = 0x4e4e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 19584));
label_4e4e30:
    // 0x4e4e30: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e4e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e4e34:
    // 0x4e4e34: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e4e34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e4e38:
    // 0x4e4e38: 0x40f809  jalr        $v0
label_4e4e3c:
    if (ctx->pc == 0x4E4E3Cu) {
        ctx->pc = 0x4E4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E38u;
        // 0x4e4e3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4E40u;
        goto label_4e4e40;
    }
    ctx->pc = 0x4E4E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E4E40u);
        ctx->pc = 0x4E4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E38u;
        // 0x4e4e3c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4E38u, 0x4E4E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4E40u;
label_4e4e40:
    // 0x4e4e40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e4e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e4e44:
    // 0x4e4e44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e4e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e4e48:
    // 0x4e4e48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4e4c:
    // 0x4e4e4c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e4e50:
    // 0x4e4e50: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e4e50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e4e54:
    // 0x4e4e54: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e4e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e4e58:
    // 0x4e4e58: 0xc10c1bb  jal         func_4306EC
label_4e4e5c:
    if (ctx->pc == 0x4E4E5Cu) {
        ctx->pc = 0x4E4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E58u;
        // 0x4e4e5c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4E60u;
        goto label_4e4e60;
    }
    ctx->pc = 0x4E4E58u;
    SET_GPR_U32(ctx, 31, 0x4E4E60u);
    ctx->pc = 0x4E4E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4E58u;
    // 0x4e4e5c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E4E58u, 0x4E4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4E60u;
label_4e4e60:
    // 0x4e4e60: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e4e64:
    if (ctx->pc == 0x4E4E64u) {
        ctx->pc = 0x4E4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E60u;
        // 0x4e4e64: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4E68u;
        goto label_4e4e68;
    }
    ctx->pc = 0x4E4E60u;
    {
        const bool branch_taken_0x4e4e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4e60) {
            ctx->pc = 0x4E4E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4E60u;
            // 0x4e4e64: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4E74u;
            goto label_4e4e74;
        }
    }
    ctx->pc = 0x4E4E68u;
label_4e4e68:
    // 0x4e4e68: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e4e6c:
    // 0x4e4e6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e4e70:
    // 0x4e4e70: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e4e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e4e74:
    // 0x4e4e74: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e4e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e4e78:
    // 0x4e4e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e4e7c:
    // 0x4e4e7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e4e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e4e80:
    // 0x4e4e80: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e4e80u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e4e84:
    // 0x4e4e84: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e4e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e4e88:
    // 0x4e4e88: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e4e88u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e4e8c:
    // 0x4e4e8c: 0xc10c1bb  jal         func_4306EC
label_4e4e90:
    if (ctx->pc == 0x4E4E90u) {
        ctx->pc = 0x4E4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E8Cu;
        // 0x4e4e90: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4E94u;
        goto label_4e4e94;
    }
    ctx->pc = 0x4E4E8Cu;
    SET_GPR_U32(ctx, 31, 0x4E4E94u);
    ctx->pc = 0x4E4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4E8Cu;
    // 0x4e4e90: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E4E8Cu, 0x4E4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4E94u;
label_4e4e94:
    // 0x4e4e94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e4e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e4e98:
    // 0x4e4e98: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e4e9c:
    if (ctx->pc == 0x4E4E9Cu) {
        ctx->pc = 0x4E4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E98u;
        // 0x4e4e9c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4EA0u;
        goto label_4e4ea0;
    }
    ctx->pc = 0x4E4E98u;
    {
        const bool branch_taken_0x4e4e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4E98u;
        // 0x4e4e9c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4e98) {
            ctx->pc = 0x4E4EBCu;
            goto label_4e4ebc;
        }
    }
    ctx->pc = 0x4E4EA0u;
label_4e4ea0:
    // 0x4e4ea0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e4ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e4ea4:
    // 0x4e4ea4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e4ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e4ea8:
    // 0x4e4ea8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e4eac:
    // 0x4e4eac: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e4eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e4eb0:
    // 0x4e4eb0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e4eb4:
    // 0x4e4eb4: 0x60f809  jalr        $v1
label_4e4eb8:
    if (ctx->pc == 0x4E4EB8u) {
        ctx->pc = 0x4E4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4EB4u;
        // 0x4e4eb8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4EBCu;
        goto label_4e4ebc;
    }
    ctx->pc = 0x4E4EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4EBCu);
        ctx->pc = 0x4E4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4EB4u;
        // 0x4e4eb8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4EB4u, 0x4E4EBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4EBCu;
label_4e4ebc:
    // 0x4e4ebc: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e4ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e4ec0:
    // 0x4e4ec0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e4ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e4ec4:
    // 0x4e4ec4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e4ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e4ec8:
    // 0x4e4ec8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e4ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e4ecc:
    // 0x4e4ecc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e4eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e4ed0:
    // 0x4e4ed0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e4ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e4ed4:
    // 0x4e4ed4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e4ed4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e4ed8:
    // 0x4e4ed8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e4ed8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e4edc:
    // 0x4e4edc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e4edcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e4ee0:
    // 0x4e4ee0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e4ee0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4ee4:
    // 0x4e4ee4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e4ee4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4ee8:
    // 0x4e4ee8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e4ee8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4eec:
    // 0x4e4eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4ef0:
    // 0x4e4ef0: 0x3e00008  jr          $ra
label_4e4ef4:
    if (ctx->pc == 0x4E4EF4u) {
        ctx->pc = 0x4E4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4EF0u;
        // 0x4e4ef4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4EF8u;
        goto label_fallthrough_0x4e4ef0;
    }
    ctx->pc = 0x4E4EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4EF0u;
        // 0x4e4ef4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e4ef0:
    ctx->pc = 0x4E4EF8u;
}
