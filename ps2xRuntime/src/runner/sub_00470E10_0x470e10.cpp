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

// Function: sub_00470E10
// Address: 0x470e10 - 0x471078
void sub_00470E10_0x470e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470E10_0x470e10");
#endif

    switch (ctx->pc) {
        case 0x470e10u: goto label_470e10;
        case 0x470e14u: goto label_470e14;
        case 0x470e18u: goto label_470e18;
        case 0x470e1cu: goto label_470e1c;
        case 0x470e20u: goto label_470e20;
        case 0x470e24u: goto label_470e24;
        case 0x470e28u: goto label_470e28;
        case 0x470e2cu: goto label_470e2c;
        case 0x470e30u: goto label_470e30;
        case 0x470e34u: goto label_470e34;
        case 0x470e38u: goto label_470e38;
        case 0x470e3cu: goto label_470e3c;
        case 0x470e40u: goto label_470e40;
        case 0x470e44u: goto label_470e44;
        case 0x470e48u: goto label_470e48;
        case 0x470e4cu: goto label_470e4c;
        case 0x470e50u: goto label_470e50;
        case 0x470e54u: goto label_470e54;
        case 0x470e58u: goto label_470e58;
        case 0x470e5cu: goto label_470e5c;
        case 0x470e60u: goto label_470e60;
        case 0x470e64u: goto label_470e64;
        case 0x470e68u: goto label_470e68;
        case 0x470e6cu: goto label_470e6c;
        case 0x470e70u: goto label_470e70;
        case 0x470e74u: goto label_470e74;
        case 0x470e78u: goto label_470e78;
        case 0x470e7cu: goto label_470e7c;
        case 0x470e80u: goto label_470e80;
        case 0x470e84u: goto label_470e84;
        case 0x470e88u: goto label_470e88;
        case 0x470e8cu: goto label_470e8c;
        case 0x470e90u: goto label_470e90;
        case 0x470e94u: goto label_470e94;
        case 0x470e98u: goto label_470e98;
        case 0x470e9cu: goto label_470e9c;
        case 0x470ea0u: goto label_470ea0;
        case 0x470ea4u: goto label_470ea4;
        case 0x470ea8u: goto label_470ea8;
        case 0x470eacu: goto label_470eac;
        case 0x470eb0u: goto label_470eb0;
        case 0x470eb4u: goto label_470eb4;
        case 0x470eb8u: goto label_470eb8;
        case 0x470ebcu: goto label_470ebc;
        case 0x470ec0u: goto label_470ec0;
        case 0x470ec4u: goto label_470ec4;
        case 0x470ec8u: goto label_470ec8;
        case 0x470eccu: goto label_470ecc;
        case 0x470ed0u: goto label_470ed0;
        case 0x470ed4u: goto label_470ed4;
        case 0x470ed8u: goto label_470ed8;
        case 0x470edcu: goto label_470edc;
        case 0x470ee0u: goto label_470ee0;
        case 0x470ee4u: goto label_470ee4;
        case 0x470ee8u: goto label_470ee8;
        case 0x470eecu: goto label_470eec;
        case 0x470ef0u: goto label_470ef0;
        case 0x470ef4u: goto label_470ef4;
        case 0x470ef8u: goto label_470ef8;
        case 0x470efcu: goto label_470efc;
        case 0x470f00u: goto label_470f00;
        case 0x470f04u: goto label_470f04;
        case 0x470f08u: goto label_470f08;
        case 0x470f0cu: goto label_470f0c;
        case 0x470f10u: goto label_470f10;
        case 0x470f14u: goto label_470f14;
        case 0x470f18u: goto label_470f18;
        case 0x470f1cu: goto label_470f1c;
        case 0x470f20u: goto label_470f20;
        case 0x470f24u: goto label_470f24;
        case 0x470f28u: goto label_470f28;
        case 0x470f2cu: goto label_470f2c;
        case 0x470f30u: goto label_470f30;
        case 0x470f34u: goto label_470f34;
        case 0x470f38u: goto label_470f38;
        case 0x470f3cu: goto label_470f3c;
        case 0x470f40u: goto label_470f40;
        case 0x470f44u: goto label_470f44;
        case 0x470f48u: goto label_470f48;
        case 0x470f4cu: goto label_470f4c;
        case 0x470f50u: goto label_470f50;
        case 0x470f54u: goto label_470f54;
        case 0x470f58u: goto label_470f58;
        case 0x470f5cu: goto label_470f5c;
        case 0x470f60u: goto label_470f60;
        case 0x470f64u: goto label_470f64;
        case 0x470f68u: goto label_470f68;
        case 0x470f6cu: goto label_470f6c;
        case 0x470f70u: goto label_470f70;
        case 0x470f74u: goto label_470f74;
        case 0x470f78u: goto label_470f78;
        case 0x470f7cu: goto label_470f7c;
        case 0x470f80u: goto label_470f80;
        case 0x470f84u: goto label_470f84;
        case 0x470f88u: goto label_470f88;
        case 0x470f8cu: goto label_470f8c;
        case 0x470f90u: goto label_470f90;
        case 0x470f94u: goto label_470f94;
        case 0x470f98u: goto label_470f98;
        case 0x470f9cu: goto label_470f9c;
        case 0x470fa0u: goto label_470fa0;
        case 0x470fa4u: goto label_470fa4;
        case 0x470fa8u: goto label_470fa8;
        case 0x470facu: goto label_470fac;
        case 0x470fb0u: goto label_470fb0;
        case 0x470fb4u: goto label_470fb4;
        case 0x470fb8u: goto label_470fb8;
        case 0x470fbcu: goto label_470fbc;
        case 0x470fc0u: goto label_470fc0;
        case 0x470fc4u: goto label_470fc4;
        case 0x470fc8u: goto label_470fc8;
        case 0x470fccu: goto label_470fcc;
        case 0x470fd0u: goto label_470fd0;
        case 0x470fd4u: goto label_470fd4;
        case 0x470fd8u: goto label_470fd8;
        case 0x470fdcu: goto label_470fdc;
        case 0x470fe0u: goto label_470fe0;
        case 0x470fe4u: goto label_470fe4;
        case 0x470fe8u: goto label_470fe8;
        case 0x470fecu: goto label_470fec;
        case 0x470ff0u: goto label_470ff0;
        case 0x470ff4u: goto label_470ff4;
        case 0x470ff8u: goto label_470ff8;
        case 0x470ffcu: goto label_470ffc;
        case 0x471000u: goto label_471000;
        case 0x471004u: goto label_471004;
        case 0x471008u: goto label_471008;
        case 0x47100cu: goto label_47100c;
        case 0x471010u: goto label_471010;
        case 0x471014u: goto label_471014;
        case 0x471018u: goto label_471018;
        case 0x47101cu: goto label_47101c;
        case 0x471020u: goto label_471020;
        case 0x471024u: goto label_471024;
        case 0x471028u: goto label_471028;
        case 0x47102cu: goto label_47102c;
        case 0x471030u: goto label_471030;
        case 0x471034u: goto label_471034;
        case 0x471038u: goto label_471038;
        case 0x47103cu: goto label_47103c;
        case 0x471040u: goto label_471040;
        case 0x471044u: goto label_471044;
        case 0x471048u: goto label_471048;
        case 0x47104cu: goto label_47104c;
        case 0x471050u: goto label_471050;
        case 0x471054u: goto label_471054;
        case 0x471058u: goto label_471058;
        case 0x47105cu: goto label_47105c;
        case 0x471060u: goto label_471060;
        case 0x471064u: goto label_471064;
        case 0x471068u: goto label_471068;
        case 0x47106cu: goto label_47106c;
        case 0x471070u: goto label_471070;
        case 0x471074u: goto label_471074;
        default: break;
    }

    ctx->pc = 0x470e10u;

label_470e10:
    // 0x470e10: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x470e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_470e14:
    // 0x470e14: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x470e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_470e18:
    // 0x470e18: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x470e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_470e1c:
    // 0x470e1c: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x470e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
label_470e20:
    // 0x470e20: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x470e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
label_470e24:
    // 0x470e24: 0x2442ad1c  addiu       $v0, $v0, -0x52E4
    ctx->pc = 0x470e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946076));
label_470e28:
    // 0x470e28: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x470e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
label_470e2c:
    // 0x470e2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x470e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_470e30:
    // 0x470e30: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x470e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
label_470e34:
    // 0x470e34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x470e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_470e38:
    // 0x470e38: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x470e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
label_470e3c:
    // 0x470e3c: 0x3c150071  lui         $s5, 0x71
    ctx->pc = 0x470e3cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
label_470e40:
    // 0x470e40: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x470e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
label_470e44:
    // 0x470e44: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x470e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
label_470e48:
    // 0x470e48: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x470e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_470e4c:
    // 0x470e4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x470e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_470e50:
    // 0x470e50: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_470e54:
    if (ctx->pc == 0x470E54u) {
        ctx->pc = 0x470E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E50u;
        // 0x470e54: 0x3c160053  lui         $s6, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470E58u;
        goto label_470e58;
    }
    ctx->pc = 0x470E50u;
    {
        const bool branch_taken_0x470e50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x470E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E50u;
        // 0x470e54: 0x3c160053  lui         $s6, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470e50) {
            ctx->pc = 0x470E74u;
            goto label_470e74;
        }
    }
    ctx->pc = 0x470E58u;
label_470e58:
    // 0x470e58: 0x8c82fff8  lw          $v0, -0x8($a0)
    ctx->pc = 0x470e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_470e5c:
    // 0x470e5c: 0x0  nop
    ctx->pc = 0x470e5cu;
    // NOP
label_470e60:
    // 0x470e60: 0x1054004e  beq         $v0, $s4, . + 4 + (0x4E << 2)
label_470e64:
    if (ctx->pc == 0x470E64u) {
        ctx->pc = 0x470E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E60u;
        // 0x470e64: 0x2487fff8  addiu       $a3, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470E68u;
        goto label_470e68;
    }
    ctx->pc = 0x470E60u;
    {
        const bool branch_taken_0x470e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x470E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E60u;
        // 0x470e64: 0x2487fff8  addiu       $a3, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470e60) {
            ctx->pc = 0x470F9Cu;
            goto label_470f9c;
        }
    }
    ctx->pc = 0x470E68u;
label_470e68:
    // 0x470e68: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x470e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_470e6c:
    // 0x470e6c: 0x5483fffc  bnel        $a0, $v1, . + 4 + (-0x4 << 2)
label_470e70:
    if (ctx->pc == 0x470E70u) {
        ctx->pc = 0x470E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E6Cu;
        // 0x470e70: 0x8c82fff8  lw          $v0, -0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470E74u;
        goto label_470e74;
    }
    ctx->pc = 0x470E6Cu;
    {
        const bool branch_taken_0x470e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x470e6c) {
            ctx->pc = 0x470E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470E6Cu;
            // 0x470e70: 0x8c82fff8  lw          $v0, -0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470e60;
        }
    }
    ctx->pc = 0x470E74u;
label_470e74:
    // 0x470e74: 0x8e90001c  lw          $s0, 0x1C($s4)
    ctx->pc = 0x470e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_470e78:
    // 0x470e78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x470e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470e7c:
    // 0x470e7c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_470e80:
    if (ctx->pc == 0x470E80u) {
        ctx->pc = 0x470E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E7Cu;
        // 0x470e80: 0x26930010  addiu       $s3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470E84u;
        goto label_470e84;
    }
    ctx->pc = 0x470E7Cu;
    {
        const bool branch_taken_0x470e7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x470E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E7Cu;
        // 0x470e80: 0x26930010  addiu       $s3, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470e7c) {
            ctx->pc = 0x470EDCu;
            goto label_470edc;
        }
    }
    ctx->pc = 0x470E84u;
label_470e84:
    // 0x470e84: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x470e84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_470e88:
    // 0x470e88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x470e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_470e8c:
    // 0x470e8c: 0x0  nop
    ctx->pc = 0x470e8cu;
    // NOP
label_470e90:
    // 0x470e90: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
label_470e94:
    if (ctx->pc == 0x470E94u) {
        ctx->pc = 0x470E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E90u;
        // 0x470e94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470E98u;
        goto label_470e98;
    }
    ctx->pc = 0x470E90u;
    {
        const bool branch_taken_0x470e90 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x470E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E90u;
        // 0x470e94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470e90) {
            ctx->pc = 0x470EC0u;
            goto label_470ec0;
        }
    }
    ctx->pc = 0x470E98u;
label_470e98:
    // 0x470e98: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x470e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_470e9c:
    // 0x470e9c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_470ea0:
    if (ctx->pc == 0x470EA0u) {
        ctx->pc = 0x470EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470E9Cu;
        // 0x470ea0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470EA4u;
        goto label_470ea4;
    }
    ctx->pc = 0x470E9Cu;
    {
        const bool branch_taken_0x470e9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x470e9c) {
            ctx->pc = 0x470EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470E9Cu;
            // 0x470ea0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470EB4u;
            goto label_470eb4;
        }
    }
    ctx->pc = 0x470EA4u;
label_470ea4:
    // 0x470ea4: 0xc11b780  jal         func_46DE00
label_470ea8:
    if (ctx->pc == 0x470EA8u) {
        ctx->pc = 0x470EACu;
        goto label_470eac;
    }
    ctx->pc = 0x470EA4u;
    SET_GPR_U32(ctx, 31, 0x470EACu);
    ctx->pc = 0x46DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DE00u, 0x470EA4u, 0x470EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470EACu;
label_470eac:
    // 0x470eac: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x470eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_470eb0:
    // 0x470eb0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x470eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_470eb4:
    // 0x470eb4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x470eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_470eb8:
    // 0x470eb8: 0x10000006  b           . + 4 + (0x6 << 2)
label_470ebc:
    if (ctx->pc == 0x470EBCu) {
        ctx->pc = 0x470EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470EB8u;
        // 0x470ebc: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470EC0u;
        goto label_470ec0;
    }
    ctx->pc = 0x470EB8u;
    {
        const bool branch_taken_0x470eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470EB8u;
        // 0x470ebc: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470eb8) {
            ctx->pc = 0x470ED4u;
            goto label_470ed4;
        }
    }
    ctx->pc = 0x470EC0u;
label_470ec0:
    // 0x470ec0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x470ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_470ec4:
    // 0x470ec4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x470ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_470ec8:
    // 0x470ec8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x470ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_470ecc:
    // 0x470ecc: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x470eccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_470ed0:
    // 0x470ed0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x470ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_470ed4:
    // 0x470ed4: 0x643ffee  bgezl       $s2, . + 4 + (-0x12 << 2)
label_470ed8:
    if (ctx->pc == 0x470ED8u) {
        ctx->pc = 0x470ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470ED4u;
        // 0x470ed8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470EDCu;
        goto label_470edc;
    }
    ctx->pc = 0x470ED4u;
    {
        const bool branch_taken_0x470ed4 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x470ed4) {
            ctx->pc = 0x470ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470ED4u;
            // 0x470ed8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470e90;
        }
    }
    ctx->pc = 0x470EDCu;
label_470edc:
    // 0x470edc: 0xc11b596  jal         func_46D658
label_470ee0:
    if (ctx->pc == 0x470EE0u) {
        ctx->pc = 0x470EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470EDCu;
        // 0x470ee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470EE4u;
        goto label_470ee4;
    }
    ctx->pc = 0x470EDCu;
    SET_GPR_U32(ctx, 31, 0x470EE4u);
    ctx->pc = 0x470EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470EDCu;
    // 0x470ee0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D658u, 0x470EDCu, 0x470EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470EE4u;
label_470ee4:
    // 0x470ee4: 0x92830003  lbu         $v1, 0x3($s4)
    ctx->pc = 0x470ee4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_470ee8:
    // 0x470ee8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x470ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_470eec:
    // 0x470eec: 0x5060004c  beql        $v1, $zero, . + 4 + (0x4C << 2)
label_470ef0:
    if (ctx->pc == 0x470EF0u) {
        ctx->pc = 0x470EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470EECu;
        // 0x470ef0: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470EF4u;
        goto label_470ef4;
    }
    ctx->pc = 0x470EECu;
    {
        const bool branch_taken_0x470eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x470eec) {
            ctx->pc = 0x470EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470EECu;
            // 0x470ef0: 0x8e84001c  lw          $a0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471020u;
            goto label_471020;
        }
    }
    ctx->pc = 0x470EF4u;
label_470ef4:
    // 0x470ef4: 0x8e91001c  lw          $s1, 0x1C($s4)
    ctx->pc = 0x470ef4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_470ef8:
    // 0x470ef8: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
label_470efc:
    if (ctx->pc == 0x470EFCu) {
        ctx->pc = 0x470EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470EF8u;
        // 0x470efc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F00u;
        goto label_470f00;
    }
    ctx->pc = 0x470EF8u;
    {
        const bool branch_taken_0x470ef8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x470EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470EF8u;
        // 0x470efc: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470ef8) {
            ctx->pc = 0x470FFCu;
            goto label_470ffc;
        }
    }
    ctx->pc = 0x470F00u;
label_470f00:
    // 0x470f00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x470f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_470f04:
    // 0x470f04: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_470f08:
    if (ctx->pc == 0x470F08u) {
        ctx->pc = 0x470F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F04u;
        // 0x470f08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F0Cu;
        goto label_470f0c;
    }
    ctx->pc = 0x470F04u;
    {
        const bool branch_taken_0x470f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x470F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F04u;
        // 0x470f08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470f04) {
            ctx->pc = 0x470FFCu;
            goto label_470ffc;
        }
    }
    ctx->pc = 0x470F0Cu;
label_470f0c:
    // 0x470f0c: 0x54620032  bnel        $v1, $v0, . + 4 + (0x32 << 2)
label_470f10:
    if (ctx->pc == 0x470F10u) {
        ctx->pc = 0x470F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F0Cu;
        // 0x470f10: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F14u;
        goto label_470f14;
    }
    ctx->pc = 0x470F0Cu;
    {
        const bool branch_taken_0x470f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x470f0c) {
            ctx->pc = 0x470F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470F0Cu;
            // 0x470f10: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470FD8u;
            goto label_470fd8;
        }
    }
    ctx->pc = 0x470F14u;
label_470f14:
    // 0x470f14: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x470f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_470f18:
    // 0x470f18: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_470f1c:
    if (ctx->pc == 0x470F1Cu) {
        ctx->pc = 0x470F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F18u;
        // 0x470f1c: 0x8e300038  lw          $s0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F20u;
        goto label_470f20;
    }
    ctx->pc = 0x470F18u;
    {
        const bool branch_taken_0x470f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x470f18) {
            ctx->pc = 0x470F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470F18u;
            // 0x470f1c: 0x8e300038  lw          $s0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470F2Cu;
            goto label_470f2c;
        }
    }
    ctx->pc = 0x470F20u;
label_470f20:
    // 0x470f20: 0xc11fa54  jal         func_47E950
label_470f24:
    if (ctx->pc == 0x470F24u) {
        ctx->pc = 0x470F28u;
        goto label_470f28;
    }
    ctx->pc = 0x470F20u;
    SET_GPR_U32(ctx, 31, 0x470F28u);
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x470F20u, 0x470F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470F28u;
label_470f28:
    // 0x470f28: 0x8e300038  lw          $s0, 0x38($s1)
    ctx->pc = 0x470f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_470f2c:
    // 0x470f2c: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x470f2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_470f30:
    // 0x470f30: 0x12120007  beq         $s0, $s2, . + 4 + (0x7 << 2)
label_470f34:
    if (ctx->pc == 0x470F34u) {
        ctx->pc = 0x470F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F30u;
        // 0x470f34: 0x26330040  addiu       $s3, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F38u;
        goto label_470f38;
    }
    ctx->pc = 0x470F30u;
    {
        const bool branch_taken_0x470f30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x470F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F30u;
        // 0x470f34: 0x26330040  addiu       $s3, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470f30) {
            ctx->pc = 0x470F50u;
            goto label_470f50;
        }
    }
    ctx->pc = 0x470F38u;
label_470f38:
    // 0x470f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x470f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_470f3c:
    // 0x470f3c: 0x0  nop
    ctx->pc = 0x470f3cu;
    // NOP
label_470f40:
    // 0x470f40: 0xc11cc70  jal         func_4731C0
label_470f44:
    if (ctx->pc == 0x470F44u) {
        ctx->pc = 0x470F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F40u;
        // 0x470f44: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F48u;
        goto label_470f48;
    }
    ctx->pc = 0x470F40u;
    SET_GPR_U32(ctx, 31, 0x470F48u);
    ctx->pc = 0x470F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470F40u;
    // 0x470f44: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4731C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4731C0u, 0x470F40u, 0x470F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470F48u;
label_470f48:
    // 0x470f48: 0x1612fffd  bne         $s0, $s2, . + 4 + (-0x3 << 2)
label_470f4c:
    if (ctx->pc == 0x470F4Cu) {
        ctx->pc = 0x470F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F48u;
        // 0x470f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F50u;
        goto label_470f50;
    }
    ctx->pc = 0x470F48u;
    {
        const bool branch_taken_0x470f48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x470F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F48u;
        // 0x470f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470f48) {
            ctx->pc = 0x470F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470f40;
        }
    }
    ctx->pc = 0x470F50u;
label_470f50:
    // 0x470f50: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x470f50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_470f54:
    // 0x470f54: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
label_470f58:
    if (ctx->pc == 0x470F58u) {
        ctx->pc = 0x470F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F54u;
        // 0x470f58: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F5Cu;
        goto label_470f5c;
    }
    ctx->pc = 0x470F54u;
    {
        const bool branch_taken_0x470f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x470F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F54u;
        // 0x470f58: 0x3c040053  lui         $a0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470f54) {
            ctx->pc = 0x470F74u;
            goto label_470f74;
        }
    }
    ctx->pc = 0x470F5Cu;
label_470f5c:
    // 0x470f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x470f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_470f60:
    // 0x470f60: 0xc11cc90  jal         func_473240
label_470f64:
    if (ctx->pc == 0x470F64u) {
        ctx->pc = 0x470F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F60u;
        // 0x470f64: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F68u;
        goto label_470f68;
    }
    ctx->pc = 0x470F60u;
    SET_GPR_U32(ctx, 31, 0x470F68u);
    ctx->pc = 0x470F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470F60u;
    // 0x470f64: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x473240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x473240u, 0x470F60u, 0x470F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470F68u;
label_470f68:
    // 0x470f68: 0x5613fffd  bnel        $s0, $s3, . + 4 + (-0x3 << 2)
label_470f6c:
    if (ctx->pc == 0x470F6Cu) {
        ctx->pc = 0x470F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F68u;
        // 0x470f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F70u;
        goto label_470f70;
    }
    ctx->pc = 0x470F68u;
    {
        const bool branch_taken_0x470f68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x470f68) {
            ctx->pc = 0x470F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470F68u;
            // 0x470f6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470f60;
        }
    }
    ctx->pc = 0x470F70u;
label_470f70:
    // 0x470f70: 0x3c040053  lui         $a0, 0x53
    ctx->pc = 0x470f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)83 << 16));
label_470f74:
    // 0x470f74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x470f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_470f78:
    // 0x470f78: 0xc11ffb4  jal         func_47FED0
label_470f7c:
    if (ctx->pc == 0x470F7Cu) {
        ctx->pc = 0x470F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F78u;
        // 0x470f7c: 0x2484e750  addiu       $a0, $a0, -0x18B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F80u;
        goto label_470f80;
    }
    ctx->pc = 0x470F78u;
    SET_GPR_U32(ctx, 31, 0x470F80u);
    ctx->pc = 0x470F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x470F78u;
    // 0x470f7c: 0x2484e750  addiu       $a0, $a0, -0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x470F78u, 0x470F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470F80u;
label_470f80:
    // 0x470f80: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x470f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_470f84:
    // 0x470f84: 0x5080001e  beql        $a0, $zero, . + 4 + (0x1E << 2)
label_470f88:
    if (ctx->pc == 0x470F88u) {
        ctx->pc = 0x470F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F84u;
        // 0x470f88: 0x26c4e768  addiu       $a0, $s6, -0x1898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F8Cu;
        goto label_470f8c;
    }
    ctx->pc = 0x470F84u;
    {
        const bool branch_taken_0x470f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x470f84) {
            ctx->pc = 0x470F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470F84u;
            // 0x470f88: 0x26c4e768  addiu       $a0, $s6, -0x1898 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471000u;
            goto label_471000;
        }
    }
    ctx->pc = 0x470F8Cu;
label_470f8c:
    // 0x470f8c: 0xc11b780  jal         func_46DE00
label_470f90:
    if (ctx->pc == 0x470F90u) {
        ctx->pc = 0x470F94u;
        goto label_470f94;
    }
    ctx->pc = 0x470F8Cu;
    SET_GPR_U32(ctx, 31, 0x470F94u);
    ctx->pc = 0x46DE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46DE00u, 0x470F8Cu, 0x470F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470F94u;
label_470f94:
    // 0x470f94: 0x10000019  b           . + 4 + (0x19 << 2)
label_470f98:
    if (ctx->pc == 0x470F98u) {
        ctx->pc = 0x470F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F94u;
        // 0x470f98: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470F9Cu;
        goto label_470f9c;
    }
    ctx->pc = 0x470F94u;
    {
        const bool branch_taken_0x470f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470F94u;
        // 0x470f98: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470f94) {
            ctx->pc = 0x470FFCu;
            goto label_470ffc;
        }
    }
    ctx->pc = 0x470F9Cu;
label_470f9c:
    // 0x470f9c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x470f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_470fa0:
    // 0x470fa0: 0x26a6ad18  addiu       $a2, $s5, -0x52E8
    ctx->pc = 0x470fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_470fa4:
    // 0x470fa4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x470fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_470fa8:
    // 0x470fa8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x470fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_470fac:
    // 0x470fac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x470facu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_470fb0:
    // 0x470fb0: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x470fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_470fb4:
    // 0x470fb4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x470fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_470fb8:
    // 0x470fb8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x470fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_470fbc:
    // 0x470fbc: 0x8f8388f8  lw          $v1, -0x7708($gp)
    ctx->pc = 0x470fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936824)));
label_470fc0:
    // 0x470fc0: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x470fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
label_470fc4:
    // 0x470fc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x470fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_470fc8:
    // 0x470fc8: 0x40f809  jalr        $v0
label_470fcc:
    if (ctx->pc == 0x470FCCu) {
        ctx->pc = 0x470FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470FC8u;
        // 0x470fcc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470FD0u;
        goto label_470fd0;
    }
    ctx->pc = 0x470FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470FD0u);
        ctx->pc = 0x470FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470FC8u;
        // 0x470fcc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470FC8u, 0x470FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470FD0u;
label_470fd0:
    // 0x470fd0: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
label_470fd4:
    if (ctx->pc == 0x470FD4u) {
        ctx->pc = 0x470FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470FD0u;
        // 0x470fd4: 0x8e90001c  lw          $s0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470FD8u;
        goto label_470fd8;
    }
    ctx->pc = 0x470FD0u;
    {
        const bool branch_taken_0x470fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x470FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470FD0u;
        // 0x470fd4: 0x8e90001c  lw          $s0, 0x1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x470fd0) {
            ctx->pc = 0x470E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_470e78;
        }
    }
    ctx->pc = 0x470FD8u;
label_470fd8:
    // 0x470fd8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_470fdc:
    if (ctx->pc == 0x470FDCu) {
        ctx->pc = 0x470FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470FD8u;
        // 0x470fdc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470FE0u;
        goto label_470fe0;
    }
    ctx->pc = 0x470FD8u;
    {
        const bool branch_taken_0x470fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x470fd8) {
            ctx->pc = 0x470FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470FD8u;
            // 0x470fdc: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x470FECu;
            goto label_470fec;
        }
    }
    ctx->pc = 0x470FE0u;
label_470fe0:
    // 0x470fe0: 0xc11c5b8  jal         func_4716E0
label_470fe4:
    if (ctx->pc == 0x470FE4u) {
        ctx->pc = 0x470FE8u;
        goto label_470fe8;
    }
    ctx->pc = 0x470FE0u;
    SET_GPR_U32(ctx, 31, 0x470FE8u);
    ctx->pc = 0x4716E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4716E0u, 0x470FE0u, 0x470FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470FE8u;
label_470fe8:
    // 0x470fe8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x470fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_470fec:
    // 0x470fec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_470ff0:
    if (ctx->pc == 0x470FF0u) {
        ctx->pc = 0x470FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x470FECu;
        // 0x470ff0: 0x26c4e768  addiu       $a0, $s6, -0x1898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x470FF4u;
        goto label_470ff4;
    }
    ctx->pc = 0x470FECu;
    {
        const bool branch_taken_0x470fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x470fec) {
            ctx->pc = 0x470FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x470FECu;
            // 0x470ff0: 0x26c4e768  addiu       $a0, $s6, -0x1898 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471000u;
            goto label_471000;
        }
    }
    ctx->pc = 0x470FF4u;
label_470ff4:
    // 0x470ff4: 0xc11c5b8  jal         func_4716E0
label_470ff8:
    if (ctx->pc == 0x470FF8u) {
        ctx->pc = 0x470FFCu;
        goto label_470ffc;
    }
    ctx->pc = 0x470FF4u;
    SET_GPR_U32(ctx, 31, 0x470FFCu);
    ctx->pc = 0x4716E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4716E0u, 0x470FF4u, 0x470FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470FFCu;
label_470ffc:
    // 0x470ffc: 0x26c4e768  addiu       $a0, $s6, -0x1898
    ctx->pc = 0x470ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
label_471000:
    // 0x471000: 0xc11ffb4  jal         func_47FED0
label_471004:
    if (ctx->pc == 0x471004u) {
        ctx->pc = 0x471004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471000u;
        // 0x471004: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471008u;
        goto label_471008;
    }
    ctx->pc = 0x471000u;
    SET_GPR_U32(ctx, 31, 0x471008u);
    ctx->pc = 0x471004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471000u;
    // 0x471004: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x471000u, 0x471008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471008u;
label_471008:
    // 0x471008: 0x26a3ad18  addiu       $v1, $s5, -0x52E8
    ctx->pc = 0x471008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_47100c:
    // 0x47100c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x47100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_471010:
    // 0x471010: 0x40f809  jalr        $v0
label_471014:
    if (ctx->pc == 0x471014u) {
        ctx->pc = 0x471014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471010u;
        // 0x471014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471018u;
        goto label_471018;
    }
    ctx->pc = 0x471010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471018u);
        ctx->pc = 0x471014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471010u;
        // 0x471014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471010u, 0x471018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471018u;
label_471018:
    // 0x471018: 0x1000000d  b           . + 4 + (0xD << 2)
label_47101c:
    if (ctx->pc == 0x47101Cu) {
        ctx->pc = 0x47101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471018u;
        // 0x47101c: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471020u;
        goto label_471020;
    }
    ctx->pc = 0x471018u;
    {
        const bool branch_taken_0x471018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471018u;
        // 0x47101c: 0x7bb00170  lq          $s0, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471018) {
            ctx->pc = 0x471050u;
            goto label_471050;
        }
    }
    ctx->pc = 0x471020u;
label_471020:
    // 0x471020: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_471024:
    if (ctx->pc == 0x471024u) {
        ctx->pc = 0x471024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471020u;
        // 0x471024: 0x26c4e768  addiu       $a0, $s6, -0x1898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471028u;
        goto label_471028;
    }
    ctx->pc = 0x471020u;
    {
        const bool branch_taken_0x471020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x471020) {
            ctx->pc = 0x471024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471020u;
            // 0x471024: 0x26c4e768  addiu       $a0, $s6, -0x1898 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471034u;
            goto label_471034;
        }
    }
    ctx->pc = 0x471028u;
label_471028:
    // 0x471028: 0xc11c306  jal         func_470C18
label_47102c:
    if (ctx->pc == 0x47102Cu) {
        ctx->pc = 0x471030u;
        goto label_471030;
    }
    ctx->pc = 0x471028u;
    SET_GPR_U32(ctx, 31, 0x471030u);
    ctx->pc = 0x470C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470C18u, 0x471028u, 0x471030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471030u;
label_471030:
    // 0x471030: 0x26c4e768  addiu       $a0, $s6, -0x1898
    ctx->pc = 0x471030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961000));
label_471034:
    // 0x471034: 0xc11ffb4  jal         func_47FED0
label_471038:
    if (ctx->pc == 0x471038u) {
        ctx->pc = 0x471038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471034u;
        // 0x471038: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47103Cu;
        goto label_47103c;
    }
    ctx->pc = 0x471034u;
    SET_GPR_U32(ctx, 31, 0x47103Cu);
    ctx->pc = 0x471038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471034u;
    // 0x471038: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47FED0u, 0x471034u, 0x47103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47103Cu;
label_47103c:
    // 0x47103c: 0x26a3ad18  addiu       $v1, $s5, -0x52E8
    ctx->pc = 0x47103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_471040:
    // 0x471040: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x471040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_471044:
    // 0x471044: 0x40f809  jalr        $v0
label_471048:
    if (ctx->pc == 0x471048u) {
        ctx->pc = 0x471048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471044u;
        // 0x471048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47104Cu;
        goto label_47104c;
    }
    ctx->pc = 0x471044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47104Cu);
        ctx->pc = 0x471048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471044u;
        // 0x471048: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471044u, 0x47104Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47104Cu;
label_47104c:
    // 0x47104c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x47104cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_471050:
    // 0x471050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x471050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_471054:
    // 0x471054: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x471054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_471058:
    // 0x471058: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x471058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_47105c:
    // 0x47105c: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x47105cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_471060:
    // 0x471060: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x471060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_471064:
    // 0x471064: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x471064u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_471068:
    // 0x471068: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x471068u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_47106c:
    // 0x47106c: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x47106cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_471070:
    // 0x471070: 0x3e00008  jr          $ra
label_471074:
    if (ctx->pc == 0x471074u) {
        ctx->pc = 0x471074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471070u;
        // 0x471074: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471078u;
        goto label_fallthrough_0x471070;
    }
    ctx->pc = 0x471070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471070u;
        // 0x471074: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x471070:
    ctx->pc = 0x471078u;
}
