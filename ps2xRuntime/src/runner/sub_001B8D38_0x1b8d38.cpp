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

// Function: sub_001B8D38
// Address: 0x1b8d38 - 0x1b8ed0
void sub_001B8D38_0x1b8d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8D38_0x1b8d38");
#endif

    switch (ctx->pc) {
        case 0x1b8d38u: goto label_1b8d38;
        case 0x1b8d3cu: goto label_1b8d3c;
        case 0x1b8d40u: goto label_1b8d40;
        case 0x1b8d44u: goto label_1b8d44;
        case 0x1b8d48u: goto label_1b8d48;
        case 0x1b8d4cu: goto label_1b8d4c;
        case 0x1b8d50u: goto label_1b8d50;
        case 0x1b8d54u: goto label_1b8d54;
        case 0x1b8d58u: goto label_1b8d58;
        case 0x1b8d5cu: goto label_1b8d5c;
        case 0x1b8d60u: goto label_1b8d60;
        case 0x1b8d64u: goto label_1b8d64;
        case 0x1b8d68u: goto label_1b8d68;
        case 0x1b8d6cu: goto label_1b8d6c;
        case 0x1b8d70u: goto label_1b8d70;
        case 0x1b8d74u: goto label_1b8d74;
        case 0x1b8d78u: goto label_1b8d78;
        case 0x1b8d7cu: goto label_1b8d7c;
        case 0x1b8d80u: goto label_1b8d80;
        case 0x1b8d84u: goto label_1b8d84;
        case 0x1b8d88u: goto label_1b8d88;
        case 0x1b8d8cu: goto label_1b8d8c;
        case 0x1b8d90u: goto label_1b8d90;
        case 0x1b8d94u: goto label_1b8d94;
        case 0x1b8d98u: goto label_1b8d98;
        case 0x1b8d9cu: goto label_1b8d9c;
        case 0x1b8da0u: goto label_1b8da0;
        case 0x1b8da4u: goto label_1b8da4;
        case 0x1b8da8u: goto label_1b8da8;
        case 0x1b8dacu: goto label_1b8dac;
        case 0x1b8db0u: goto label_1b8db0;
        case 0x1b8db4u: goto label_1b8db4;
        case 0x1b8db8u: goto label_1b8db8;
        case 0x1b8dbcu: goto label_1b8dbc;
        case 0x1b8dc0u: goto label_1b8dc0;
        case 0x1b8dc4u: goto label_1b8dc4;
        case 0x1b8dc8u: goto label_1b8dc8;
        case 0x1b8dccu: goto label_1b8dcc;
        case 0x1b8dd0u: goto label_1b8dd0;
        case 0x1b8dd4u: goto label_1b8dd4;
        case 0x1b8dd8u: goto label_1b8dd8;
        case 0x1b8ddcu: goto label_1b8ddc;
        case 0x1b8de0u: goto label_1b8de0;
        case 0x1b8de4u: goto label_1b8de4;
        case 0x1b8de8u: goto label_1b8de8;
        case 0x1b8decu: goto label_1b8dec;
        case 0x1b8df0u: goto label_1b8df0;
        case 0x1b8df4u: goto label_1b8df4;
        case 0x1b8df8u: goto label_1b8df8;
        case 0x1b8dfcu: goto label_1b8dfc;
        case 0x1b8e00u: goto label_1b8e00;
        case 0x1b8e04u: goto label_1b8e04;
        case 0x1b8e08u: goto label_1b8e08;
        case 0x1b8e0cu: goto label_1b8e0c;
        case 0x1b8e10u: goto label_1b8e10;
        case 0x1b8e14u: goto label_1b8e14;
        case 0x1b8e18u: goto label_1b8e18;
        case 0x1b8e1cu: goto label_1b8e1c;
        case 0x1b8e20u: goto label_1b8e20;
        case 0x1b8e24u: goto label_1b8e24;
        case 0x1b8e28u: goto label_1b8e28;
        case 0x1b8e2cu: goto label_1b8e2c;
        case 0x1b8e30u: goto label_1b8e30;
        case 0x1b8e34u: goto label_1b8e34;
        case 0x1b8e38u: goto label_1b8e38;
        case 0x1b8e3cu: goto label_1b8e3c;
        case 0x1b8e40u: goto label_1b8e40;
        case 0x1b8e44u: goto label_1b8e44;
        case 0x1b8e48u: goto label_1b8e48;
        case 0x1b8e4cu: goto label_1b8e4c;
        case 0x1b8e50u: goto label_1b8e50;
        case 0x1b8e54u: goto label_1b8e54;
        case 0x1b8e58u: goto label_1b8e58;
        case 0x1b8e5cu: goto label_1b8e5c;
        case 0x1b8e60u: goto label_1b8e60;
        case 0x1b8e64u: goto label_1b8e64;
        case 0x1b8e68u: goto label_1b8e68;
        case 0x1b8e6cu: goto label_1b8e6c;
        case 0x1b8e70u: goto label_1b8e70;
        case 0x1b8e74u: goto label_1b8e74;
        case 0x1b8e78u: goto label_1b8e78;
        case 0x1b8e7cu: goto label_1b8e7c;
        case 0x1b8e80u: goto label_1b8e80;
        case 0x1b8e84u: goto label_1b8e84;
        case 0x1b8e88u: goto label_1b8e88;
        case 0x1b8e8cu: goto label_1b8e8c;
        case 0x1b8e90u: goto label_1b8e90;
        case 0x1b8e94u: goto label_1b8e94;
        case 0x1b8e98u: goto label_1b8e98;
        case 0x1b8e9cu: goto label_1b8e9c;
        case 0x1b8ea0u: goto label_1b8ea0;
        case 0x1b8ea4u: goto label_1b8ea4;
        case 0x1b8ea8u: goto label_1b8ea8;
        case 0x1b8eacu: goto label_1b8eac;
        case 0x1b8eb0u: goto label_1b8eb0;
        case 0x1b8eb4u: goto label_1b8eb4;
        case 0x1b8eb8u: goto label_1b8eb8;
        case 0x1b8ebcu: goto label_1b8ebc;
        case 0x1b8ec0u: goto label_1b8ec0;
        case 0x1b8ec4u: goto label_1b8ec4;
        case 0x1b8ec8u: goto label_1b8ec8;
        case 0x1b8eccu: goto label_1b8ecc;
        default: break;
    }

    ctx->pc = 0x1b8d38u;

label_1b8d38:
    // 0x1b8d38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b8d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1b8d3c:
    // 0x1b8d3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8d40:
    // 0x1b8d40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1b8d44:
    // 0x1b8d44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b8d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1b8d48:
    // 0x1b8d48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b8d48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b8d4c:
    // 0x1b8d4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b8d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1b8d50:
    // 0x1b8d50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b8d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1b8d54:
    // 0x1b8d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b8d58:
    // 0x1b8d58: 0xc440d6c4  lwc1        $f0, -0x293C($v0)
    ctx->pc = 0x1b8d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8d5c:
    // 0x1b8d5c: 0xc6420454  lwc1        $f2, 0x454($s2)
    ctx->pc = 0x1b8d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b8d60:
    // 0x1b8d60: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b8d60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8d64:
    // 0x1b8d64: 0x0  nop
    ctx->pc = 0x1b8d64u;
    // NOP
label_1b8d68:
    // 0x1b8d68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b8d6c:
    if (ctx->pc == 0x1B8D6Cu) {
        ctx->pc = 0x1B8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D68u;
        // 0x1b8d6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D70u;
        goto label_1b8d70;
    }
    ctx->pc = 0x1B8D68u;
    {
        const bool branch_taken_0x1b8d68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D68u;
        // 0x1b8d6c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d68) {
            ctx->pc = 0x1B8D88u;
            goto label_1b8d88;
        }
    }
    ctx->pc = 0x1B8D70u;
label_1b8d70:
    // 0x1b8d70: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8d74:
    // 0x1b8d74: 0xc440d6c8  lwc1        $f0, -0x2938($v0)
    ctx->pc = 0x1b8d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8d78:
    // 0x1b8d78: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1b8d78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8d7c:
    // 0x1b8d7c: 0x0  nop
    ctx->pc = 0x1b8d7cu;
    // NOP
label_1b8d80:
    // 0x1b8d80: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_1b8d84:
    if (ctx->pc == 0x1B8D84u) {
        ctx->pc = 0x1B8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D80u;
        // 0x1b8d84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8D88u;
        goto label_1b8d88;
    }
    ctx->pc = 0x1B8D80u;
    {
        const bool branch_taken_0x1b8d80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8D80u;
        // 0x1b8d84: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8d80) {
            ctx->pc = 0x1B8E54u;
            goto label_1b8e54;
        }
    }
    ctx->pc = 0x1B8D88u;
label_1b8d88:
    // 0x1b8d88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1b8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1b8d8c:
    // 0x1b8d8c: 0xc440d6cc  lwc1        $f0, -0x2934($v0)
    ctx->pc = 0x1b8d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8d90:
    // 0x1b8d90: 0xc461d70c  lwc1        $f1, -0x28F4($v1)
    ctx->pc = 0x1b8d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b8d94:
    // 0x1b8d94: 0x8e420468  lw          $v0, 0x468($s2)
    ctx->pc = 0x1b8d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
label_1b8d98:
    // 0x1b8d98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b8d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b8d9c:
    // 0x1b8d9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b8da0:
    // 0x1b8da0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1b8da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8da4:
    // 0x1b8da4: 0x0  nop
    ctx->pc = 0x1b8da4u;
    // NOP
label_1b8da8:
    // 0x1b8da8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b8dac:
    if (ctx->pc == 0x1B8DACu) {
        ctx->pc = 0x1B8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DA8u;
        // 0x1b8dac: 0xae420468  sw          $v0, 0x468($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DB0u;
        goto label_1b8db0;
    }
    ctx->pc = 0x1B8DA8u;
    {
        const bool branch_taken_0x1b8da8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DA8u;
        // 0x1b8dac: 0xae420468  sw          $v0, 0x468($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8da8) {
            ctx->pc = 0x1B8DC8u;
            goto label_1b8dc8;
        }
    }
    ctx->pc = 0x1B8DB0u;
label_1b8db0:
    // 0x1b8db0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8db4:
    // 0x1b8db4: 0xc440d6d0  lwc1        $f0, -0x2930($v0)
    ctx->pc = 0x1b8db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8db8:
    // 0x1b8db8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1b8db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b8dbc:
    // 0x1b8dbc: 0x0  nop
    ctx->pc = 0x1b8dbcu;
    // NOP
label_1b8dc0:
    // 0x1b8dc0: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_1b8dc4:
    if (ctx->pc == 0x1B8DC4u) {
        ctx->pc = 0x1B8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DC0u;
        // 0x1b8dc4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DC8u;
        goto label_1b8dc8;
    }
    ctx->pc = 0x1B8DC0u;
    {
        const bool branch_taken_0x1b8dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B8DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DC0u;
        // 0x1b8dc4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8dc0) {
            ctx->pc = 0x1B8E14u;
            goto label_1b8e14;
        }
    }
    ctx->pc = 0x1B8DC8u;
label_1b8dc8:
    // 0x1b8dc8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1b8dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1b8dcc:
    // 0x1b8dcc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b8dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b8dd0:
    // 0x1b8dd0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1b8dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1b8dd4:
    // 0x1b8dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8dd8:
    // 0x1b8dd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8ddc:
    // 0x1b8ddc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b8ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8de0:
    // 0x1b8de0: 0x24a54910  addiu       $a1, $a1, 0x4910
    ctx->pc = 0x1b8de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18704));
label_1b8de4:
    // 0x1b8de4: 0xc043f1c  jal         func_10FC70
label_1b8de8:
    if (ctx->pc == 0x1B8DE8u) {
        ctx->pc = 0x1B8DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DE4u;
        // 0x1b8de8: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DECu;
        goto label_1b8dec;
    }
    ctx->pc = 0x1B8DE4u;
    SET_GPR_U32(ctx, 31, 0x1B8DECu);
    ctx->pc = 0x1B8DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8DE4u;
    // 0x1b8de8: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1B8DE4u, 0x1B8DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DECu;
label_1b8dec:
    // 0x1b8dec: 0x8e252e48  lw          $a1, 0x2E48($s1)
    ctx->pc = 0x1b8decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11848)));
label_1b8df0:
    // 0x1b8df0: 0xc044096  jal         func_110258
label_1b8df4:
    if (ctx->pc == 0x1B8DF4u) {
        ctx->pc = 0x1B8DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8DF0u;
        // 0x1b8df4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8DF8u;
        goto label_1b8df8;
    }
    ctx->pc = 0x1B8DF0u;
    SET_GPR_U32(ctx, 31, 0x1B8DF8u);
    ctx->pc = 0x1B8DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8DF0u;
    // 0x1b8df4: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x1B8DF0u, 0x1B8DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8DF8u;
label_1b8df8:
    // 0x1b8df8: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1b8df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1b8dfc:
    // 0x1b8dfc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b8dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b8e00:
    // 0x1b8e00: 0xc04402c  jal         func_1100B0
label_1b8e04:
    if (ctx->pc == 0x1B8E04u) {
        ctx->pc = 0x1B8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E00u;
        // 0x1b8e04: 0x24a548f8  addiu       $a1, $a1, 0x48F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E08u;
        goto label_1b8e08;
    }
    ctx->pc = 0x1B8E00u;
    SET_GPR_U32(ctx, 31, 0x1B8E08u);
    ctx->pc = 0x1B8E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E00u;
    // 0x1b8e04: 0x24a548f8  addiu       $a1, $a1, 0x48F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100B0u, 0x1B8E00u, 0x1B8E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E08u;
label_1b8e08:
    // 0x1b8e08: 0xae222e48  sw          $v0, 0x2E48($s1)
    ctx->pc = 0x1b8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11848), GPR_U32(ctx, 2));
label_1b8e0c:
    // 0x1b8e0c: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b8e10:
    if (ctx->pc == 0x1B8E10u) {
        ctx->pc = 0x1B8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E0Cu;
        // 0x1b8e10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E14u;
        goto label_1b8e14;
    }
    ctx->pc = 0x1B8E0Cu;
    {
        const bool branch_taken_0x1b8e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E0Cu;
        // 0x1b8e10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e0c) {
            ctx->pc = 0x1B8E3Cu;
            goto label_1b8e3c;
        }
    }
    ctx->pc = 0x1B8E14u;
label_1b8e14:
    // 0x1b8e14: 0x3c110062  lui         $s1, 0x62
    ctx->pc = 0x1b8e14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
label_1b8e18:
    // 0x1b8e18: 0x8e252e48  lw          $a1, 0x2E48($s1)
    ctx->pc = 0x1b8e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11848)));
label_1b8e1c:
    // 0x1b8e1c: 0xc044096  jal         func_110258
label_1b8e20:
    if (ctx->pc == 0x1B8E20u) {
        ctx->pc = 0x1B8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E1Cu;
        // 0x1b8e20: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E24u;
        goto label_1b8e24;
    }
    ctx->pc = 0x1B8E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E24u);
    ctx->pc = 0x1B8E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E1Cu;
    // 0x1b8e20: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x1B8E1Cu, 0x1B8E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E24u;
label_1b8e24:
    // 0x1b8e24: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1b8e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1b8e28:
    // 0x1b8e28: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b8e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b8e2c:
    // 0x1b8e2c: 0xc04402c  jal         func_1100B0
label_1b8e30:
    if (ctx->pc == 0x1B8E30u) {
        ctx->pc = 0x1B8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E2Cu;
        // 0x1b8e30: 0x24a548f8  addiu       $a1, $a1, 0x48F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E34u;
        goto label_1b8e34;
    }
    ctx->pc = 0x1B8E2Cu;
    SET_GPR_U32(ctx, 31, 0x1B8E34u);
    ctx->pc = 0x1B8E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E2Cu;
    // 0x1b8e30: 0x24a548f8  addiu       $a1, $a1, 0x48F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1100B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1100B0u, 0x1B8E2Cu, 0x1B8E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E34u;
label_1b8e34:
    // 0x1b8e34: 0xae222e48  sw          $v0, 0x2E48($s1)
    ctx->pc = 0x1b8e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11848), GPR_U32(ctx, 2));
label_1b8e38:
    // 0x1b8e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8e3c:
    // 0x1b8e3c: 0x8e430468  lw          $v1, 0x468($s2)
    ctx->pc = 0x1b8e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1128)));
label_1b8e40:
    // 0x1b8e40: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1b8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1b8e44:
    // 0x1b8e44: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1b8e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1b8e48:
    // 0x1b8e48: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x1b8e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8e4c:
    // 0x1b8e4c: 0x10000019  b           . + 4 + (0x19 << 2)
label_1b8e50:
    if (ctx->pc == 0x1B8E50u) {
        ctx->pc = 0x1B8E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E4Cu;
        // 0x1b8e50: 0xe6400454  swc1        $f0, 0x454($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E54u;
        goto label_1b8e54;
    }
    ctx->pc = 0x1B8E4Cu;
    {
        const bool branch_taken_0x1b8e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E4Cu;
        // 0x1b8e50: 0xe6400454  swc1        $f0, 0x454($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8e4c) {
            ctx->pc = 0x1B8EB4u;
            goto label_1b8eb4;
        }
    }
    ctx->pc = 0x1B8E54u;
label_1b8e54:
    // 0x1b8e54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b8e58:
    // 0x1b8e58: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1b8e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1b8e5c:
    // 0x1b8e5c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x1b8e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_1b8e60:
    // 0x1b8e60: 0x24a54910  addiu       $a1, $a1, 0x4910
    ctx->pc = 0x1b8e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18704));
label_1b8e64:
    // 0x1b8e64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e68:
    // 0x1b8e68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b8e68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e6c:
    // 0x1b8e6c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b8e6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b8e70:
    // 0x1b8e70: 0xc043f1c  jal         func_10FC70
label_1b8e74:
    if (ctx->pc == 0x1B8E74u) {
        ctx->pc = 0x1B8E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8E70u;
        // 0x1b8e74: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8E78u;
        goto label_1b8e78;
    }
    ctx->pc = 0x1B8E70u;
    SET_GPR_U32(ctx, 31, 0x1B8E78u);
    ctx->pc = 0x1B8E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8E70u;
    // 0x1b8e74: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x1B8E70u, 0x1B8E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8E78u;
label_1b8e78:
    // 0x1b8e78: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1b8e78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_1b8e7c:
    // 0x1b8e7c: 0xae400468  sw          $zero, 0x468($s2)
    ctx->pc = 0x1b8e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 0));
label_1b8e80:
    // 0x1b8e80: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1b8e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b8e84:
    // 0x1b8e84: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1b8e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b8e88:
    // 0x1b8e88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b8e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b8e8c:
    // 0x1b8e8c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b8e8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1b8e90:
    // 0x1b8e90: 0xc66cd6e4  lwc1        $f12, -0x291C($s3)
    ctx->pc = 0x1b8e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294956772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b8e94:
    // 0x1b8e94: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b8e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b8e98:
    // 0x1b8e98: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1b8e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1b8e9c:
    // 0x1b8e9c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x1b8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_1b8ea0:
    // 0x1b8ea0: 0x60f809  jalr        $v1
label_1b8ea4:
    if (ctx->pc == 0x1B8EA4u) {
        ctx->pc = 0x1B8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EA0u;
        // 0x1b8ea4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EA8u;
        goto label_1b8ea8;
    }
    ctx->pc = 0x1B8EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B8EA8u);
        ctx->pc = 0x1B8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EA0u;
        // 0x1b8ea4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8EA0u, 0x1B8EA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B8EA8u;
label_1b8ea8:
    // 0x1b8ea8: 0x641fff7  bgez        $s2, . + 4 + (-0x9 << 2)
label_1b8eac:
    if (ctx->pc == 0x1B8EACu) {
        ctx->pc = 0x1B8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EA8u;
        // 0x1b8eac: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8EB0u;
        goto label_1b8eb0;
    }
    ctx->pc = 0x1B8EA8u;
    {
        const bool branch_taken_0x1b8ea8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1B8EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EA8u;
        // 0x1b8eac: 0x26310100  addiu       $s1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ea8) {
            ctx->pc = 0x1B8E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8e88;
        }
    }
    ctx->pc = 0x1B8EB0u;
label_1b8eb0:
    // 0x1b8eb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b8eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b8eb4:
    // 0x1b8eb4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b8eb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b8eb8:
    // 0x1b8eb8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b8eb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b8ebc:
    // 0x1b8ebc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b8ebcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b8ec0:
    // 0x1b8ec0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b8ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b8ec4:
    // 0x1b8ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b8ec8:
    // 0x1b8ec8: 0x3e00008  jr          $ra
label_1b8ecc:
    if (ctx->pc == 0x1B8ECCu) {
        ctx->pc = 0x1B8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EC8u;
        // 0x1b8ecc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B8ED0u;
        goto label_fallthrough_0x1b8ec8;
    }
    ctx->pc = 0x1B8EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8EC8u;
        // 0x1b8ecc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b8ec8:
    ctx->pc = 0x1B8ED0u;
}
