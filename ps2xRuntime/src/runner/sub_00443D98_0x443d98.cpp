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

// Function: sub_00443D98
// Address: 0x443d98 - 0x444040
void sub_00443D98_0x443d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443D98_0x443d98");
#endif

    switch (ctx->pc) {
        case 0x443d98u: goto label_443d98;
        case 0x443d9cu: goto label_443d9c;
        case 0x443da0u: goto label_443da0;
        case 0x443da4u: goto label_443da4;
        case 0x443da8u: goto label_443da8;
        case 0x443dacu: goto label_443dac;
        case 0x443db0u: goto label_443db0;
        case 0x443db4u: goto label_443db4;
        case 0x443db8u: goto label_443db8;
        case 0x443dbcu: goto label_443dbc;
        case 0x443dc0u: goto label_443dc0;
        case 0x443dc4u: goto label_443dc4;
        case 0x443dc8u: goto label_443dc8;
        case 0x443dccu: goto label_443dcc;
        case 0x443dd0u: goto label_443dd0;
        case 0x443dd4u: goto label_443dd4;
        case 0x443dd8u: goto label_443dd8;
        case 0x443ddcu: goto label_443ddc;
        case 0x443de0u: goto label_443de0;
        case 0x443de4u: goto label_443de4;
        case 0x443de8u: goto label_443de8;
        case 0x443decu: goto label_443dec;
        case 0x443df0u: goto label_443df0;
        case 0x443df4u: goto label_443df4;
        case 0x443df8u: goto label_443df8;
        case 0x443dfcu: goto label_443dfc;
        case 0x443e00u: goto label_443e00;
        case 0x443e04u: goto label_443e04;
        case 0x443e08u: goto label_443e08;
        case 0x443e0cu: goto label_443e0c;
        case 0x443e10u: goto label_443e10;
        case 0x443e14u: goto label_443e14;
        case 0x443e18u: goto label_443e18;
        case 0x443e1cu: goto label_443e1c;
        case 0x443e20u: goto label_443e20;
        case 0x443e24u: goto label_443e24;
        case 0x443e28u: goto label_443e28;
        case 0x443e2cu: goto label_443e2c;
        case 0x443e30u: goto label_443e30;
        case 0x443e34u: goto label_443e34;
        case 0x443e38u: goto label_443e38;
        case 0x443e3cu: goto label_443e3c;
        case 0x443e40u: goto label_443e40;
        case 0x443e44u: goto label_443e44;
        case 0x443e48u: goto label_443e48;
        case 0x443e4cu: goto label_443e4c;
        case 0x443e50u: goto label_443e50;
        case 0x443e54u: goto label_443e54;
        case 0x443e58u: goto label_443e58;
        case 0x443e5cu: goto label_443e5c;
        case 0x443e60u: goto label_443e60;
        case 0x443e64u: goto label_443e64;
        case 0x443e68u: goto label_443e68;
        case 0x443e6cu: goto label_443e6c;
        case 0x443e70u: goto label_443e70;
        case 0x443e74u: goto label_443e74;
        case 0x443e78u: goto label_443e78;
        case 0x443e7cu: goto label_443e7c;
        case 0x443e80u: goto label_443e80;
        case 0x443e84u: goto label_443e84;
        case 0x443e88u: goto label_443e88;
        case 0x443e8cu: goto label_443e8c;
        case 0x443e90u: goto label_443e90;
        case 0x443e94u: goto label_443e94;
        case 0x443e98u: goto label_443e98;
        case 0x443e9cu: goto label_443e9c;
        case 0x443ea0u: goto label_443ea0;
        case 0x443ea4u: goto label_443ea4;
        case 0x443ea8u: goto label_443ea8;
        case 0x443eacu: goto label_443eac;
        case 0x443eb0u: goto label_443eb0;
        case 0x443eb4u: goto label_443eb4;
        case 0x443eb8u: goto label_443eb8;
        case 0x443ebcu: goto label_443ebc;
        case 0x443ec0u: goto label_443ec0;
        case 0x443ec4u: goto label_443ec4;
        case 0x443ec8u: goto label_443ec8;
        case 0x443eccu: goto label_443ecc;
        case 0x443ed0u: goto label_443ed0;
        case 0x443ed4u: goto label_443ed4;
        case 0x443ed8u: goto label_443ed8;
        case 0x443edcu: goto label_443edc;
        case 0x443ee0u: goto label_443ee0;
        case 0x443ee4u: goto label_443ee4;
        case 0x443ee8u: goto label_443ee8;
        case 0x443eecu: goto label_443eec;
        case 0x443ef0u: goto label_443ef0;
        case 0x443ef4u: goto label_443ef4;
        case 0x443ef8u: goto label_443ef8;
        case 0x443efcu: goto label_443efc;
        case 0x443f00u: goto label_443f00;
        case 0x443f04u: goto label_443f04;
        case 0x443f08u: goto label_443f08;
        case 0x443f0cu: goto label_443f0c;
        case 0x443f10u: goto label_443f10;
        case 0x443f14u: goto label_443f14;
        case 0x443f18u: goto label_443f18;
        case 0x443f1cu: goto label_443f1c;
        case 0x443f20u: goto label_443f20;
        case 0x443f24u: goto label_443f24;
        case 0x443f28u: goto label_443f28;
        case 0x443f2cu: goto label_443f2c;
        case 0x443f30u: goto label_443f30;
        case 0x443f34u: goto label_443f34;
        case 0x443f38u: goto label_443f38;
        case 0x443f3cu: goto label_443f3c;
        case 0x443f40u: goto label_443f40;
        case 0x443f44u: goto label_443f44;
        case 0x443f48u: goto label_443f48;
        case 0x443f4cu: goto label_443f4c;
        case 0x443f50u: goto label_443f50;
        case 0x443f54u: goto label_443f54;
        case 0x443f58u: goto label_443f58;
        case 0x443f5cu: goto label_443f5c;
        case 0x443f60u: goto label_443f60;
        case 0x443f64u: goto label_443f64;
        case 0x443f68u: goto label_443f68;
        case 0x443f6cu: goto label_443f6c;
        case 0x443f70u: goto label_443f70;
        case 0x443f74u: goto label_443f74;
        case 0x443f78u: goto label_443f78;
        case 0x443f7cu: goto label_443f7c;
        case 0x443f80u: goto label_443f80;
        case 0x443f84u: goto label_443f84;
        case 0x443f88u: goto label_443f88;
        case 0x443f8cu: goto label_443f8c;
        case 0x443f90u: goto label_443f90;
        case 0x443f94u: goto label_443f94;
        case 0x443f98u: goto label_443f98;
        case 0x443f9cu: goto label_443f9c;
        case 0x443fa0u: goto label_443fa0;
        case 0x443fa4u: goto label_443fa4;
        case 0x443fa8u: goto label_443fa8;
        case 0x443facu: goto label_443fac;
        case 0x443fb0u: goto label_443fb0;
        case 0x443fb4u: goto label_443fb4;
        case 0x443fb8u: goto label_443fb8;
        case 0x443fbcu: goto label_443fbc;
        case 0x443fc0u: goto label_443fc0;
        case 0x443fc4u: goto label_443fc4;
        case 0x443fc8u: goto label_443fc8;
        case 0x443fccu: goto label_443fcc;
        case 0x443fd0u: goto label_443fd0;
        case 0x443fd4u: goto label_443fd4;
        case 0x443fd8u: goto label_443fd8;
        case 0x443fdcu: goto label_443fdc;
        case 0x443fe0u: goto label_443fe0;
        case 0x443fe4u: goto label_443fe4;
        case 0x443fe8u: goto label_443fe8;
        case 0x443fecu: goto label_443fec;
        case 0x443ff0u: goto label_443ff0;
        case 0x443ff4u: goto label_443ff4;
        case 0x443ff8u: goto label_443ff8;
        case 0x443ffcu: goto label_443ffc;
        case 0x444000u: goto label_444000;
        case 0x444004u: goto label_444004;
        case 0x444008u: goto label_444008;
        case 0x44400cu: goto label_44400c;
        case 0x444010u: goto label_444010;
        case 0x444014u: goto label_444014;
        case 0x444018u: goto label_444018;
        case 0x44401cu: goto label_44401c;
        case 0x444020u: goto label_444020;
        case 0x444024u: goto label_444024;
        case 0x444028u: goto label_444028;
        case 0x44402cu: goto label_44402c;
        case 0x444030u: goto label_444030;
        case 0x444034u: goto label_444034;
        case 0x444038u: goto label_444038;
        case 0x44403cu: goto label_44403c;
        default: break;
    }

    ctx->pc = 0x443d98u;

label_443d98:
    // 0x443d98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x443d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_443d9c:
    // 0x443d9c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x443d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_443da0:
    // 0x443da0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x443da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_443da4:
    // 0x443da4: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x443da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_443da8:
    // 0x443da8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x443da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_443dac:
    // 0x443dac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x443dacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_443db0:
    // 0x443db0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x443db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_443db4:
    // 0x443db4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x443db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_443db8:
    // 0x443db8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x443db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_443dbc:
    // 0x443dbc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x443dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_443dc0:
    // 0x443dc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x443dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_443dc4:
    // 0x443dc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x443dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_443dc8:
    // 0x443dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x443dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_443dcc:
    // 0x443dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x443dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_443dd0:
    // 0x443dd0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x443dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_443dd4:
    // 0x443dd4: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
label_443dd8:
    if (ctx->pc == 0x443DD8u) {
        ctx->pc = 0x443DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443DD4u;
        // 0x443dd8: 0x3c150052  lui         $s5, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443DDCu;
        goto label_443ddc;
    }
    ctx->pc = 0x443DD4u;
    {
        const bool branch_taken_0x443dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x443DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443DD4u;
        // 0x443dd8: 0x3c150052  lui         $s5, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443dd4) {
            ctx->pc = 0x443F48u;
            goto label_443f48;
        }
    }
    ctx->pc = 0x443DDCu;
label_443ddc:
    // 0x443ddc: 0x26a29ea0  addiu       $v0, $s5, -0x6160
    ctx->pc = 0x443ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942368));
label_443de0:
    // 0x443de0: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x443de0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_443de4:
    // 0x443de4: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_443de8:
    if (ctx->pc == 0x443DE8u) {
        ctx->pc = 0x443DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443DE4u;
        // 0x443de8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443DECu;
        goto label_443dec;
    }
    ctx->pc = 0x443DE4u;
    {
        const bool branch_taken_0x443de4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x443DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443DE4u;
        // 0x443de8: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443de4) {
            ctx->pc = 0x443F48u;
            goto label_443f48;
        }
    }
    ctx->pc = 0x443DECu;
label_443dec:
    // 0x443dec: 0x24173999  addiu       $s7, $zero, 0x3999
    ctx->pc = 0x443decu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
label_443df0:
    // 0x443df0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x443df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_443df4:
    // 0x443df4: 0x0  nop
    ctx->pc = 0x443df4u;
    // NOP
label_443df8:
    // 0x443df8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x443df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_443dfc:
    // 0x443dfc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x443dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_443e00:
    // 0x443e00: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x443e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_443e04:
    // 0x443e04: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x443e04u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_443e08:
    // 0x443e08: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x443e08u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_443e0c:
    // 0x443e0c: 0xde040020  ld          $a0, 0x20($s0)
    ctx->pc = 0x443e0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_443e10:
    // 0x443e10: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x443e10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_443e14:
    // 0x443e14: 0x32250800  andi        $a1, $s1, 0x800
    ctx->pc = 0x443e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2048);
label_443e18:
    // 0x443e18: 0xde030018  ld          $v1, 0x18($s0)
    ctx->pc = 0x443e18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_443e1c:
    // 0x443e1c: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x443e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_443e20:
    // 0x443e20: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_443e24:
    if (ctx->pc == 0x443E24u) {
        ctx->pc = 0x443E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E20u;
        // 0x443e24: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443E28u;
        goto label_443e28;
    }
    ctx->pc = 0x443E20u;
    {
        const bool branch_taken_0x443e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x443E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E20u;
        // 0x443e24: 0x83982f  dsubu       $s3, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443e20) {
            ctx->pc = 0x443E4Cu;
            goto label_443e4c;
        }
    }
    ctx->pc = 0x443E28u;
label_443e28:
    // 0x443e28: 0xde829ea0  ld          $v0, -0x6160($s4)
    ctx->pc = 0x443e28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 4294942368)));
label_443e2c:
    // 0x443e2c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x443e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_443e30:
    // 0x443e30: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x443e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_443e34:
    // 0x443e34: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x443e34u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_443e38:
    // 0x443e38: 0x2242024  and         $a0, $s1, $a0
    ctx->pc = 0x443e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
label_443e3c:
    // 0x443e3c: 0xc110e4c  jal         func_443930
label_443e40:
    if (ctx->pc == 0x443E40u) {
        ctx->pc = 0x443E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E3Cu;
        // 0x443e40: 0xfe829ea0  sd          $v0, -0x6160($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 4294942368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443E44u;
        goto label_443e44;
    }
    ctx->pc = 0x443E3Cu;
    SET_GPR_U32(ctx, 31, 0x443E44u);
    ctx->pc = 0x443E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443E3Cu;
    // 0x443e40: 0xfe829ea0  sd          $v0, -0x6160($s4) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294942368), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443930u, 0x443E3Cu, 0x443E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443E44u;
label_443e44:
    // 0x443e44: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x443e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_443e48:
    // 0x443e48: 0x8cc61000  lw          $a2, 0x1000($a2)
    ctx->pc = 0x443e48u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 6), 4096))); // MMIO: 0x10001000
label_443e4c:
    // 0x443e4c: 0xde849ea0  ld          $a0, -0x6160($s4)
    ctx->pc = 0x443e4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 4294942368)));
label_443e50:
    // 0x443e50: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x443e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_443e54:
    // 0x443e54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x443e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_443e58:
    // 0x443e58: 0x32230003  andi        $v1, $s1, 0x3
    ctx->pc = 0x443e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
label_443e5c:
    // 0x443e5c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x443e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_443e60:
    // 0x443e60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x443e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_443e64:
    // 0x443e64: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x443e64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_443e68:
    // 0x443e68: 0x648814  dsllv       $s1, $a0, $v1
    ctx->pc = 0x443e68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
label_443e6c:
    // 0x443e6c: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x443e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_443e70:
    // 0x443e70: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_443e74:
    if (ctx->pc == 0x443E74u) {
        ctx->pc = 0x443E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E70u;
        // 0x443e74: 0x26929ea0  addiu       $s2, $s4, -0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443E78u;
        goto label_443e78;
    }
    ctx->pc = 0x443E70u;
    {
        const bool branch_taken_0x443e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x443E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E70u;
        // 0x443e74: 0x26929ea0  addiu       $s2, $s4, -0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294942368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443e70) {
            ctx->pc = 0x443F48u;
            goto label_443f48;
        }
    }
    ctx->pc = 0x443E78u;
label_443e78:
    // 0x443e78: 0xc110f58  jal         func_443D60
label_443e7c:
    if (ctx->pc == 0x443E7Cu) {
        ctx->pc = 0x443E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443E78u;
        // 0x443e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443E80u;
        goto label_443e80;
    }
    ctx->pc = 0x443E78u;
    SET_GPR_U32(ctx, 31, 0x443E80u);
    ctx->pc = 0x443E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443E78u;
    // 0x443e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D60u, 0x443E78u, 0x443E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443E80u;
label_443e80:
    // 0x443e80: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x443e80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443e84:
    // 0x443e84: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x443e84u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_443e88:
    // 0x443e88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x443e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_443e8c:
    // 0x443e8c: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x443e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_443e90:
    // 0x443e90: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x443e90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_443e94:
    // 0x443e94: 0x226302d  daddu       $a2, $s1, $a2
    ctx->pc = 0x443e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 6));
label_443e98:
    // 0x443e98: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x443e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_443e9c:
    // 0x443e9c: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x443e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_443ea0:
    // 0x443ea0: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x443ea0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_443ea4:
    // 0x443ea4: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x443ea4u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_443ea8:
    // 0x443ea8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x443ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_443eac:
    // 0x443eac: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x443eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_443eb0:
    // 0x443eb0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x443eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_443eb4:
    // 0x443eb4: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x443eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_443eb8:
    // 0x443eb8: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x443eb8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_443ebc:
    // 0x443ebc: 0x40f809  jalr        $v0
label_443ec0:
    if (ctx->pc == 0x443EC0u) {
        ctx->pc = 0x443EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EBCu;
        // 0x443ec0: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443EC4u;
        goto label_443ec4;
    }
    ctx->pc = 0x443EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x443EC4u);
        ctx->pc = 0x443EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EBCu;
        // 0x443ec0: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443EBCu, 0x443EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x443EC4u;
label_443ec4:
    // 0x443ec4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x443ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_443ec8:
    // 0x443ec8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_443ecc:
    if (ctx->pc == 0x443ECCu) {
        ctx->pc = 0x443ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EC8u;
        // 0x443ecc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443ED0u;
        goto label_443ed0;
    }
    ctx->pc = 0x443EC8u;
    {
        const bool branch_taken_0x443ec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x443ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EC8u;
        // 0x443ecc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443ec8) {
            ctx->pc = 0x443EE8u;
            goto label_443ee8;
        }
    }
    ctx->pc = 0x443ED0u;
label_443ed0:
    // 0x443ed0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x443ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_443ed4:
    // 0x443ed4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_443ed8:
    // 0x443ed8: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x443ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_443edc:
    // 0x443edc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x443edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_443ee0:
    // 0x443ee0: 0x10000014  b           . + 4 + (0x14 << 2)
label_443ee4:
    if (ctx->pc == 0x443EE4u) {
        ctx->pc = 0x443EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EE0u;
        // 0x443ee4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443EE8u;
        goto label_443ee8;
    }
    ctx->pc = 0x443EE0u;
    {
        const bool branch_taken_0x443ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EE0u;
        // 0x443ee4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443ee0) {
            ctx->pc = 0x443F34u;
            goto label_443f34;
        }
    }
    ctx->pc = 0x443EE8u;
label_443ee8:
    // 0x443ee8: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_443eec:
    if (ctx->pc == 0x443EECu) {
        ctx->pc = 0x443EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EE8u;
        // 0x443eec: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443EF0u;
        goto label_443ef0;
    }
    ctx->pc = 0x443EE8u;
    {
        const bool branch_taken_0x443ee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x443EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443EE8u;
        // 0x443eec: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443ee8) {
            ctx->pc = 0x443F18u;
            goto label_443f18;
        }
    }
    ctx->pc = 0x443EF0u;
label_443ef0:
    // 0x443ef0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x443ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_443ef4:
    // 0x443ef4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x443ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_443ef8:
    // 0x443ef8: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x443ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_443efc:
    // 0x443efc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x443efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_443f00:
    // 0x443f00: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x443f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_443f04:
    // 0x443f04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x443f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_443f08:
    // 0x443f08: 0xae500014  sw          $s0, 0x14($s2)
    ctx->pc = 0x443f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
label_443f0c:
    // 0x443f0c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x443f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_443f10:
    // 0x443f10: 0x10000009  b           . + 4 + (0x9 << 2)
label_443f14:
    if (ctx->pc == 0x443F14u) {
        ctx->pc = 0x443F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F10u;
        // 0x443f14: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443F18u;
        goto label_443f18;
    }
    ctx->pc = 0x443F10u;
    {
        const bool branch_taken_0x443f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F10u;
        // 0x443f14: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443f10) {
            ctx->pc = 0x443F38u;
            goto label_443f38;
        }
    }
    ctx->pc = 0x443F18u;
label_443f18:
    // 0x443f18: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x443f18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_443f1c:
    // 0x443f1c: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x443f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_443f20:
    // 0x443f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x443f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_443f24:
    // 0x443f24: 0x2e2280a  movz        $a1, $s7, $v0
    ctx->pc = 0x443f24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 23));
label_443f28:
    // 0x443f28: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x443f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_443f2c:
    // 0x443f2c: 0xc110f36  jal         func_443CD8
label_443f30:
    if (ctx->pc == 0x443F30u) {
        ctx->pc = 0x443F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F2Cu;
        // 0x443f30: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443F34u;
        goto label_443f34;
    }
    ctx->pc = 0x443F2Cu;
    SET_GPR_U32(ctx, 31, 0x443F34u);
    ctx->pc = 0x443F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443F2Cu;
    // 0x443f30: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443CD8u, 0x443F2Cu, 0x443F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443F34u;
label_443f34:
    // 0x443f34: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x443f34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_443f38:
    // 0x443f38: 0x1600ffaf  bnez        $s0, . + 4 + (-0x51 << 2)
label_443f3c:
    if (ctx->pc == 0x443F3Cu) {
        ctx->pc = 0x443F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F38u;
        // 0x443f3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443F40u;
        goto label_443f40;
    }
    ctx->pc = 0x443F38u;
    {
        const bool branch_taken_0x443f38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x443F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F38u;
        // 0x443f3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443f38) {
            ctx->pc = 0x443DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_443df8;
        }
    }
    ctx->pc = 0x443F40u;
label_443f40:
    // 0x443f40: 0x10000002  b           . + 4 + (0x2 << 2)
label_443f44:
    if (ctx->pc == 0x443F44u) {
        ctx->pc = 0x443F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F40u;
        // 0x443f44: 0x26a49ea0  addiu       $a0, $s5, -0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443F48u;
        goto label_443f48;
    }
    ctx->pc = 0x443F40u;
    {
        const bool branch_taken_0x443f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F40u;
        // 0x443f44: 0x26a49ea0  addiu       $a0, $s5, -0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443f40) {
            ctx->pc = 0x443F4Cu;
            goto label_443f4c;
        }
    }
    ctx->pc = 0x443F48u;
label_443f48:
    // 0x443f48: 0x26a49ea0  addiu       $a0, $s5, -0x6160
    ctx->pc = 0x443f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942368));
label_443f4c:
    // 0x443f4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x443f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_443f50:
    // 0x443f50: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x443f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_443f54:
    // 0x443f54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x443f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_443f58:
    // 0x443f58: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x443f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
label_443f5c:
    // 0x443f5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x443f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_443f60:
    // 0x443f60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x443f60u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_443f64:
    // 0x443f64: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x443f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
label_443f68:
    // 0x443f68: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x443f68u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_443f6c:
    // 0x443f6c: 0x32020800  andi        $v0, $s0, 0x800
    ctx->pc = 0x443f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2048);
label_443f70:
    // 0x443f70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_443f74:
    if (ctx->pc == 0x443F74u) {
        ctx->pc = 0x443F78u;
        goto label_443f78;
    }
    ctx->pc = 0x443F70u;
    {
        const bool branch_taken_0x443f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x443f70) {
            ctx->pc = 0x443F9Cu;
            goto label_443f9c;
        }
    }
    ctx->pc = 0x443F78u;
label_443f78:
    // 0x443f78: 0xdea29ea0  ld          $v0, -0x6160($s5)
    ctx->pc = 0x443f78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294942368)));
label_443f7c:
    // 0x443f7c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x443f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_443f80:
    // 0x443f80: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x443f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_443f84:
    // 0x443f84: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x443f84u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_443f88:
    // 0x443f88: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x443f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_443f8c:
    // 0x443f8c: 0xc110e4c  jal         func_443930
label_443f90:
    if (ctx->pc == 0x443F90u) {
        ctx->pc = 0x443F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443F8Cu;
        // 0x443f90: 0xfea29ea0  sd          $v0, -0x6160($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294942368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443F94u;
        goto label_443f94;
    }
    ctx->pc = 0x443F8Cu;
    SET_GPR_U32(ctx, 31, 0x443F94u);
    ctx->pc = 0x443F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443F8Cu;
    // 0x443f90: 0xfea29ea0  sd          $v0, -0x6160($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294942368), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443930u, 0x443F8Cu, 0x443F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443F94u;
label_443f94:
    // 0x443f94: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x443f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_443f98:
    // 0x443f98: 0x8c841000  lw          $a0, 0x1000($a0)
    ctx->pc = 0x443f98u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 4096))); // MMIO: 0x10001000
label_443f9c:
    // 0x443f9c: 0xdea29ea0  ld          $v0, -0x6160($s5)
    ctx->pc = 0x443f9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294942368)));
label_443fa0:
    // 0x443fa0: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x443fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
label_443fa4:
    // 0x443fa4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x443fa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_443fa8:
    // 0x443fa8: 0x32040003  andi        $a0, $s0, 0x3
    ctx->pc = 0x443fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
label_443fac:
    // 0x443fac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x443facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_443fb0:
    // 0x443fb0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x443fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_443fb4:
    // 0x443fb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x443fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_443fb8:
    // 0x443fb8: 0xc110ed2  jal         func_443B48
label_443fbc:
    if (ctx->pc == 0x443FBCu) {
        ctx->pc = 0x443FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443FB8u;
        // 0x443fbc: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443FC0u;
        goto label_443fc0;
    }
    ctx->pc = 0x443FB8u;
    SET_GPR_U32(ctx, 31, 0x443FC0u);
    ctx->pc = 0x443FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443FB8u;
    // 0x443fbc: 0x822014  dsllv       $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443B48u, 0x443FB8u, 0x443FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443FC0u;
label_443fc0:
    // 0x443fc0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x443fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_443fc4:
    // 0x443fc4: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x443fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_443fc8:
    // 0x443fc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x443fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_443fcc:
    // 0x443fcc: 0x8c631010  lw          $v1, 0x1010($v1)
    ctx->pc = 0x443fccu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4112))); // MMIO: 0x10001010
label_443fd0:
    // 0x443fd0: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x443fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_443fd4:
    // 0x443fd4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_443fd8:
    if (ctx->pc == 0x443FD8u) {
        ctx->pc = 0x443FDCu;
        goto label_443fdc;
    }
    ctx->pc = 0x443FD4u;
    {
        const bool branch_taken_0x443fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x443fd4) {
            ctx->pc = 0x444000u;
            goto label_444000;
        }
    }
    ctx->pc = 0x443FDCu;
label_443fdc:
    // 0x443fdc: 0xdea29ea0  ld          $v0, -0x6160($s5)
    ctx->pc = 0x443fdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294942368)));
label_443fe0:
    // 0x443fe0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x443fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_443fe4:
    // 0x443fe4: 0x3484fbff  ori         $a0, $a0, 0xFBFF
    ctx->pc = 0x443fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64511);
label_443fe8:
    // 0x443fe8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x443fe8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_443fec:
    // 0x443fec: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x443fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_443ff0:
    // 0x443ff0: 0xc110e4c  jal         func_443930
label_443ff4:
    if (ctx->pc == 0x443FF4u) {
        ctx->pc = 0x443FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443FF0u;
        // 0x443ff4: 0xfea29ea0  sd          $v0, -0x6160($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 4294942368), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443FF8u;
        goto label_443ff8;
    }
    ctx->pc = 0x443FF0u;
    SET_GPR_U32(ctx, 31, 0x443FF8u);
    ctx->pc = 0x443FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443FF0u;
    // 0x443ff4: 0xfea29ea0  sd          $v0, -0x6160($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 4294942368), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443930u, 0x443FF0u, 0x443FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443FF8u;
label_443ff8:
    // 0x443ff8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x443ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_443ffc:
    // 0x443ffc: 0x8c421000  lw          $v0, 0x1000($v0)
    ctx->pc = 0x443ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 4096))); // MMIO: 0x10001000
label_444000:
    // 0x444000: 0xdea29ea0  ld          $v0, -0x6160($s5)
    ctx->pc = 0x444000u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 4294942368)));
label_444004:
    // 0x444004: 0xf  sync
    ctx->pc = 0x444004u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_444008:
    // 0x444008: 0x42000038  ei
    ctx->pc = 0x444008u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_44400c:
    // 0x44400c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x44400cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_444010:
    // 0x444010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x444010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_444014:
    // 0x444014: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x444014u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_444018:
    // 0x444018: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x444018u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_44401c:
    // 0x44401c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x44401cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_444020:
    // 0x444020: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x444020u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_444024:
    // 0x444024: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x444024u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_444028:
    // 0x444028: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x444028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44402c:
    // 0x44402c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44402cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_444030:
    // 0x444030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x444030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_444034:
    // 0x444034: 0x3e00008  jr          $ra
label_444038:
    if (ctx->pc == 0x444038u) {
        ctx->pc = 0x444038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444034u;
        // 0x444038: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44403Cu;
        goto label_44403c;
    }
    ctx->pc = 0x444034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x444038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x444034u;
        // 0x444038: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x444034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44403Cu;
label_44403c:
    // 0x44403c: 0x0  nop
    ctx->pc = 0x44403cu;
    // NOP
    ctx->pc = 0x444040u;
}
