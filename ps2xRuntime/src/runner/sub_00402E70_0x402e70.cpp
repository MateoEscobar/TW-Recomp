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

// Function: sub_00402E70
// Address: 0x402e70 - 0x403090
void sub_00402E70_0x402e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00402E70_0x402e70");
#endif

    switch (ctx->pc) {
        case 0x402e70u: goto label_402e70;
        case 0x402e74u: goto label_402e74;
        case 0x402e78u: goto label_402e78;
        case 0x402e7cu: goto label_402e7c;
        case 0x402e80u: goto label_402e80;
        case 0x402e84u: goto label_402e84;
        case 0x402e88u: goto label_402e88;
        case 0x402e8cu: goto label_402e8c;
        case 0x402e90u: goto label_402e90;
        case 0x402e94u: goto label_402e94;
        case 0x402e98u: goto label_402e98;
        case 0x402e9cu: goto label_402e9c;
        case 0x402ea0u: goto label_402ea0;
        case 0x402ea4u: goto label_402ea4;
        case 0x402ea8u: goto label_402ea8;
        case 0x402eacu: goto label_402eac;
        case 0x402eb0u: goto label_402eb0;
        case 0x402eb4u: goto label_402eb4;
        case 0x402eb8u: goto label_402eb8;
        case 0x402ebcu: goto label_402ebc;
        case 0x402ec0u: goto label_402ec0;
        case 0x402ec4u: goto label_402ec4;
        case 0x402ec8u: goto label_402ec8;
        case 0x402eccu: goto label_402ecc;
        case 0x402ed0u: goto label_402ed0;
        case 0x402ed4u: goto label_402ed4;
        case 0x402ed8u: goto label_402ed8;
        case 0x402edcu: goto label_402edc;
        case 0x402ee0u: goto label_402ee0;
        case 0x402ee4u: goto label_402ee4;
        case 0x402ee8u: goto label_402ee8;
        case 0x402eecu: goto label_402eec;
        case 0x402ef0u: goto label_402ef0;
        case 0x402ef4u: goto label_402ef4;
        case 0x402ef8u: goto label_402ef8;
        case 0x402efcu: goto label_402efc;
        case 0x402f00u: goto label_402f00;
        case 0x402f04u: goto label_402f04;
        case 0x402f08u: goto label_402f08;
        case 0x402f0cu: goto label_402f0c;
        case 0x402f10u: goto label_402f10;
        case 0x402f14u: goto label_402f14;
        case 0x402f18u: goto label_402f18;
        case 0x402f1cu: goto label_402f1c;
        case 0x402f20u: goto label_402f20;
        case 0x402f24u: goto label_402f24;
        case 0x402f28u: goto label_402f28;
        case 0x402f2cu: goto label_402f2c;
        case 0x402f30u: goto label_402f30;
        case 0x402f34u: goto label_402f34;
        case 0x402f38u: goto label_402f38;
        case 0x402f3cu: goto label_402f3c;
        case 0x402f40u: goto label_402f40;
        case 0x402f44u: goto label_402f44;
        case 0x402f48u: goto label_402f48;
        case 0x402f4cu: goto label_402f4c;
        case 0x402f50u: goto label_402f50;
        case 0x402f54u: goto label_402f54;
        case 0x402f58u: goto label_402f58;
        case 0x402f5cu: goto label_402f5c;
        case 0x402f60u: goto label_402f60;
        case 0x402f64u: goto label_402f64;
        case 0x402f68u: goto label_402f68;
        case 0x402f6cu: goto label_402f6c;
        case 0x402f70u: goto label_402f70;
        case 0x402f74u: goto label_402f74;
        case 0x402f78u: goto label_402f78;
        case 0x402f7cu: goto label_402f7c;
        case 0x402f80u: goto label_402f80;
        case 0x402f84u: goto label_402f84;
        case 0x402f88u: goto label_402f88;
        case 0x402f8cu: goto label_402f8c;
        case 0x402f90u: goto label_402f90;
        case 0x402f94u: goto label_402f94;
        case 0x402f98u: goto label_402f98;
        case 0x402f9cu: goto label_402f9c;
        case 0x402fa0u: goto label_402fa0;
        case 0x402fa4u: goto label_402fa4;
        case 0x402fa8u: goto label_402fa8;
        case 0x402facu: goto label_402fac;
        case 0x402fb0u: goto label_402fb0;
        case 0x402fb4u: goto label_402fb4;
        case 0x402fb8u: goto label_402fb8;
        case 0x402fbcu: goto label_402fbc;
        case 0x402fc0u: goto label_402fc0;
        case 0x402fc4u: goto label_402fc4;
        case 0x402fc8u: goto label_402fc8;
        case 0x402fccu: goto label_402fcc;
        case 0x402fd0u: goto label_402fd0;
        case 0x402fd4u: goto label_402fd4;
        case 0x402fd8u: goto label_402fd8;
        case 0x402fdcu: goto label_402fdc;
        case 0x402fe0u: goto label_402fe0;
        case 0x402fe4u: goto label_402fe4;
        case 0x402fe8u: goto label_402fe8;
        case 0x402fecu: goto label_402fec;
        case 0x402ff0u: goto label_402ff0;
        case 0x402ff4u: goto label_402ff4;
        case 0x402ff8u: goto label_402ff8;
        case 0x402ffcu: goto label_402ffc;
        case 0x403000u: goto label_403000;
        case 0x403004u: goto label_403004;
        case 0x403008u: goto label_403008;
        case 0x40300cu: goto label_40300c;
        case 0x403010u: goto label_403010;
        case 0x403014u: goto label_403014;
        case 0x403018u: goto label_403018;
        case 0x40301cu: goto label_40301c;
        case 0x403020u: goto label_403020;
        case 0x403024u: goto label_403024;
        case 0x403028u: goto label_403028;
        case 0x40302cu: goto label_40302c;
        case 0x403030u: goto label_403030;
        case 0x403034u: goto label_403034;
        case 0x403038u: goto label_403038;
        case 0x40303cu: goto label_40303c;
        case 0x403040u: goto label_403040;
        case 0x403044u: goto label_403044;
        case 0x403048u: goto label_403048;
        case 0x40304cu: goto label_40304c;
        case 0x403050u: goto label_403050;
        case 0x403054u: goto label_403054;
        case 0x403058u: goto label_403058;
        case 0x40305cu: goto label_40305c;
        case 0x403060u: goto label_403060;
        case 0x403064u: goto label_403064;
        case 0x403068u: goto label_403068;
        case 0x40306cu: goto label_40306c;
        case 0x403070u: goto label_403070;
        case 0x403074u: goto label_403074;
        case 0x403078u: goto label_403078;
        case 0x40307cu: goto label_40307c;
        case 0x403080u: goto label_403080;
        case 0x403084u: goto label_403084;
        case 0x403088u: goto label_403088;
        case 0x40308cu: goto label_40308c;
        default: break;
    }

    ctx->pc = 0x402e70u;

label_402e70:
    // 0x402e70: 0x27bdfb90  addiu       $sp, $sp, -0x470
    ctx->pc = 0x402e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966160));
label_402e74:
    // 0x402e74: 0x7fb00460  sq          $s0, 0x460($sp)
    ctx->pc = 0x402e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 16));
label_402e78:
    // 0x402e78: 0x7fb10450  sq          $s1, 0x450($sp)
    ctx->pc = 0x402e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 17));
label_402e7c:
    // 0x402e7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x402e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_402e80:
    // 0x402e80: 0x7fb20440  sq          $s2, 0x440($sp)
    ctx->pc = 0x402e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 18));
label_402e84:
    // 0x402e84: 0x7fb30430  sq          $s3, 0x430($sp)
    ctx->pc = 0x402e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 19));
label_402e88:
    // 0x402e88: 0xffbf0420  sd          $ra, 0x420($sp)
    ctx->pc = 0x402e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 31));
label_402e8c:
    // 0x402e8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x402e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_402e90:
    // 0x402e90: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x402e90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_402e94:
    // 0x402e94: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x402e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_402e98:
    // 0x402e98: 0x40f809  jalr        $v0
label_402e9c:
    if (ctx->pc == 0x402E9Cu) {
        ctx->pc = 0x402E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E98u;
        // 0x402e9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402EA0u;
        goto label_402ea0;
    }
    ctx->pc = 0x402E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x402EA0u);
        ctx->pc = 0x402E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402E98u;
        // 0x402e9c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402E98u, 0x402EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402EA0u;
label_402ea0:
    // 0x402ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x402ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_402ea4:
    // 0x402ea4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x402ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_402ea8:
    // 0x402ea8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x402ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_402eac:
    // 0x402eac: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_402eb0:
    if (ctx->pc == 0x402EB0u) {
        ctx->pc = 0x402EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EACu;
        // 0x402eb0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402EB4u;
        goto label_402eb4;
    }
    ctx->pc = 0x402EACu;
    {
        const bool branch_taken_0x402eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x402eac) {
            ctx->pc = 0x402EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402EACu;
            // 0x402eb0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x402ED8u;
            goto label_402ed8;
        }
    }
    ctx->pc = 0x402EB4u;
label_402eb4:
    // 0x402eb4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x402eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_402eb8:
    // 0x402eb8: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
label_402ebc:
    if (ctx->pc == 0x402EBCu) {
        ctx->pc = 0x402EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EB8u;
        // 0x402ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402EC0u;
        goto label_402ec0;
    }
    ctx->pc = 0x402EB8u;
    {
        const bool branch_taken_0x402eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x402EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EB8u;
        // 0x402ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402eb8) {
            ctx->pc = 0x403074u;
            goto label_403074;
        }
    }
    ctx->pc = 0x402EC0u;
label_402ec0:
    // 0x402ec0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x402ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_402ec4:
    // 0x402ec4: 0xc0e91f0  jal         func_3A47C0
label_402ec8:
    if (ctx->pc == 0x402EC8u) {
        ctx->pc = 0x402EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EC4u;
        // 0x402ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402ECCu;
        goto label_402ecc;
    }
    ctx->pc = 0x402EC4u;
    SET_GPR_U32(ctx, 31, 0x402ECCu);
    ctx->pc = 0x402EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402EC4u;
    // 0x402ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A47C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A47C0u, 0x402EC4u, 0x402ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402ECCu;
label_402ecc:
    // 0x402ecc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x402eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_402ed0:
    // 0x402ed0: 0x10000049  b           . + 4 + (0x49 << 2)
label_402ed4:
    if (ctx->pc == 0x402ED4u) {
        ctx->pc = 0x402ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402ED0u;
        // 0x402ed4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402ED8u;
        goto label_402ed8;
    }
    ctx->pc = 0x402ED0u;
    {
        const bool branch_taken_0x402ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402ED0u;
        // 0x402ed4: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ed0) {
            ctx->pc = 0x402FF8u;
            goto label_402ff8;
        }
    }
    ctx->pc = 0x402ED8u;
label_402ed8:
    // 0x402ed8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x402ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_402edc:
    // 0x402edc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x402edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_402ee0:
    // 0x402ee0: 0x40f809  jalr        $v0
label_402ee4:
    if (ctx->pc == 0x402EE4u) {
        ctx->pc = 0x402EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EE0u;
        // 0x402ee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402EE8u;
        goto label_402ee8;
    }
    ctx->pc = 0x402EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x402EE8u);
        ctx->pc = 0x402EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EE0u;
        // 0x402ee4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402EE0u, 0x402EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402EE8u;
label_402ee8:
    // 0x402ee8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x402ee8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_402eec:
    // 0x402eec: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x402eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_402ef0:
    // 0x402ef0: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_402ef4:
    if (ctx->pc == 0x402EF4u) {
        ctx->pc = 0x402EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EF0u;
        // 0x402ef4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402EF8u;
        goto label_402ef8;
    }
    ctx->pc = 0x402EF0u;
    {
        const bool branch_taken_0x402ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x402EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402EF0u;
        // 0x402ef4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ef0) {
            ctx->pc = 0x402FC0u;
            goto label_402fc0;
        }
    }
    ctx->pc = 0x402EF8u;
label_402ef8:
    // 0x402ef8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x402ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_402efc:
    // 0x402efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x402efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_402f00:
    // 0x402f00: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
label_402f04:
    if (ctx->pc == 0x402F04u) {
        ctx->pc = 0x402F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F00u;
        // 0x402f04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402F08u;
        goto label_402f08;
    }
    ctx->pc = 0x402F00u;
    {
        const bool branch_taken_0x402f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x402F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F00u;
        // 0x402f04: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402f00) {
            ctx->pc = 0x402FC0u;
            goto label_402fc0;
        }
    }
    ctx->pc = 0x402F08u;
label_402f08:
    // 0x402f08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x402f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402f0c:
    // 0x402f0c: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x402f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_402f10:
    // 0x402f10: 0x27b20410  addiu       $s2, $sp, 0x410
    ctx->pc = 0x402f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_402f14:
    // 0x402f14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x402f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_402f18:
    // 0x402f18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x402f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_402f1c:
    // 0x402f1c: 0x0  nop
    ctx->pc = 0x402f1cu;
    // NOP
label_402f20:
    // 0x402f20: 0x0  nop
    ctx->pc = 0x402f20u;
    // NOP
label_402f24:
    // 0x402f24: 0x0  nop
    ctx->pc = 0x402f24u;
    // NOP
label_402f28:
    // 0x402f28: 0x0  nop
    ctx->pc = 0x402f28u;
    // NOP
label_402f2c:
    // 0x402f2c: 0x0  nop
    ctx->pc = 0x402f2cu;
    // NOP
label_402f30:
    // 0x402f30: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_402f34:
    if (ctx->pc == 0x402F34u) {
        ctx->pc = 0x402F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F30u;
        // 0x402f34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402F38u;
        goto label_402f38;
    }
    ctx->pc = 0x402F30u;
    {
        const bool branch_taken_0x402f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x402F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F30u;
        // 0x402f34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402f30) {
            ctx->pc = 0x402F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_402f20;
        }
    }
    ctx->pc = 0x402F38u;
label_402f38:
    // 0x402f38: 0xc138ddc  jal         func_4E3770
label_402f3c:
    if (ctx->pc == 0x402F3Cu) {
        ctx->pc = 0x402F40u;
        goto label_402f40;
    }
    ctx->pc = 0x402F38u;
    SET_GPR_U32(ctx, 31, 0x402F40u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x402F38u, 0x402F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F40u;
label_402f40:
    // 0x402f40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x402f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402f44:
    // 0x402f44: 0xc0ea176  jal         func_3A85D8
label_402f48:
    if (ctx->pc == 0x402F48u) {
        ctx->pc = 0x402F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F44u;
        // 0x402f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402F4Cu;
        goto label_402f4c;
    }
    ctx->pc = 0x402F44u;
    SET_GPR_U32(ctx, 31, 0x402F4Cu);
    ctx->pc = 0x402F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F44u;
    // 0x402f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x402F44u, 0x402F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F4Cu;
label_402f4c:
    // 0x402f4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x402f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402f50:
    // 0x402f50: 0xc0ea176  jal         func_3A85D8
label_402f54:
    if (ctx->pc == 0x402F54u) {
        ctx->pc = 0x402F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F50u;
        // 0x402f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402F58u;
        goto label_402f58;
    }
    ctx->pc = 0x402F50u;
    SET_GPR_U32(ctx, 31, 0x402F58u);
    ctx->pc = 0x402F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F50u;
    // 0x402f54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x402F50u, 0x402F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F58u;
label_402f58:
    // 0x402f58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x402f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402f5c:
    // 0x402f5c: 0xc0ea16a  jal         func_3A85A8
label_402f60:
    if (ctx->pc == 0x402F60u) {
        ctx->pc = 0x402F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F5Cu;
        // 0x402f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402F64u;
        goto label_402f64;
    }
    ctx->pc = 0x402F5Cu;
    SET_GPR_U32(ctx, 31, 0x402F64u);
    ctx->pc = 0x402F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F5Cu;
    // 0x402f60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x402F5Cu, 0x402F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F64u;
label_402f64:
    // 0x402f64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x402f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402f68:
    // 0x402f68: 0xc0ea16a  jal         func_3A85A8
label_402f6c:
    if (ctx->pc == 0x402F6Cu) {
        ctx->pc = 0x402F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F68u;
        // 0x402f6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402F70u;
        goto label_402f70;
    }
    ctx->pc = 0x402F68u;
    SET_GPR_U32(ctx, 31, 0x402F70u);
    ctx->pc = 0x402F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F68u;
    // 0x402f6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x402F68u, 0x402F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F70u;
label_402f70:
    // 0x402f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x402f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_402f74:
    // 0x402f74: 0xc0e90ca  jal         func_3A4328
label_402f78:
    if (ctx->pc == 0x402F78u) {
        ctx->pc = 0x402F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F74u;
        // 0x402f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402F7Cu;
        goto label_402f7c;
    }
    ctx->pc = 0x402F74u;
    SET_GPR_U32(ctx, 31, 0x402F7Cu);
    ctx->pc = 0x402F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F74u;
    // 0x402f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x402F74u, 0x402F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F7Cu;
label_402f7c:
    // 0x402f7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x402f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402f80:
    // 0x402f80: 0xc0ea158  jal         func_3A8560
label_402f84:
    if (ctx->pc == 0x402F84u) {
        ctx->pc = 0x402F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F80u;
        // 0x402f84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402F88u;
        goto label_402f88;
    }
    ctx->pc = 0x402F80u;
    SET_GPR_U32(ctx, 31, 0x402F88u);
    ctx->pc = 0x402F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F80u;
    // 0x402f84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x402F80u, 0x402F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402F88u;
label_402f88:
    // 0x402f88: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x402f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_402f8c:
    // 0x402f8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x402f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402f90:
    // 0x402f90: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x402f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_402f94:
    // 0x402f94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x402f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_402f98:
    // 0x402f98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x402f98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_402f9c:
    // 0x402f9c: 0xc0ea158  jal         func_3A8560
label_402fa0:
    if (ctx->pc == 0x402FA0u) {
        ctx->pc = 0x402FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402F9Cu;
        // 0x402fa0: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402FA4u;
        goto label_402fa4;
    }
    ctx->pc = 0x402F9Cu;
    SET_GPR_U32(ctx, 31, 0x402FA4u);
    ctx->pc = 0x402FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402F9Cu;
    // 0x402fa0: 0x7fa30410  sq          $v1, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x402F9Cu, 0x402FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402FA4u;
label_402fa4:
    // 0x402fa4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x402fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_402fa8:
    // 0x402fa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x402fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_402fac:
    // 0x402fac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x402facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_402fb0:
    // 0x402fb0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x402fb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_402fb4:
    // 0x402fb4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x402fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_402fb8:
    // 0x402fb8: 0x40f809  jalr        $v0
label_402fbc:
    if (ctx->pc == 0x402FBCu) {
        ctx->pc = 0x402FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402FB8u;
        // 0x402fbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402FC0u;
        goto label_402fc0;
    }
    ctx->pc = 0x402FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x402FC0u);
        ctx->pc = 0x402FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402FB8u;
        // 0x402fbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x402FB8u, 0x402FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x402FC0u;
label_402fc0:
    // 0x402fc0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x402fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_402fc4:
    // 0x402fc4: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x402fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_402fc8:
    // 0x402fc8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_402fcc:
    if (ctx->pc == 0x402FCCu) {
        ctx->pc = 0x402FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402FC8u;
        // 0x402fcc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402FD0u;
        goto label_402fd0;
    }
    ctx->pc = 0x402FC8u;
    {
        const bool branch_taken_0x402fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x402fc8) {
            ctx->pc = 0x402FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402FC8u;
            // 0x402fcc: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403000u;
            goto label_403000;
        }
    }
    ctx->pc = 0x402FD0u;
label_402fd0:
    // 0x402fd0: 0xc0e87c0  jal         func_3A1F00
label_402fd4:
    if (ctx->pc == 0x402FD4u) {
        ctx->pc = 0x402FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402FD0u;
        // 0x402fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402FD8u;
        goto label_402fd8;
    }
    ctx->pc = 0x402FD0u;
    SET_GPR_U32(ctx, 31, 0x402FD8u);
    ctx->pc = 0x402FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x402FD0u;
    // 0x402fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1F00u, 0x402FD0u, 0x402FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x402FD8u;
label_402fd8:
    // 0x402fd8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x402fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_402fdc:
    // 0x402fdc: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x402fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_402fe0:
    // 0x402fe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x402fe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_402fe4:
    // 0x402fe4: 0x0  nop
    ctx->pc = 0x402fe4u;
    // NOP
label_402fe8:
    // 0x402fe8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x402fe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_402fec:
    // 0x402fec: 0x0  nop
    ctx->pc = 0x402fecu;
    // NOP
label_402ff0:
    // 0x402ff0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_402ff4:
    if (ctx->pc == 0x402FF4u) {
        ctx->pc = 0x402FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402FF0u;
        // 0x402ff4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x402FF8u;
        goto label_402ff8;
    }
    ctx->pc = 0x402FF0u;
    {
        const bool branch_taken_0x402ff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x402ff0) {
            ctx->pc = 0x402FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x402FF0u;
            // 0x402ff4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403000u;
            goto label_403000;
        }
    }
    ctx->pc = 0x402FF8u;
label_402ff8:
    // 0x402ff8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_402ffc:
    if (ctx->pc == 0x402FFCu) {
        ctx->pc = 0x402FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402FF8u;
        // 0x402ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403000u;
        goto label_403000;
    }
    ctx->pc = 0x402FF8u;
    {
        const bool branch_taken_0x402ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x402FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x402FF8u;
        // 0x402ffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x402ff8) {
            ctx->pc = 0x403074u;
            goto label_403074;
        }
    }
    ctx->pc = 0x403000u;
label_403000:
    // 0x403000: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x403000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_403004:
    // 0x403004: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_403008:
    if (ctx->pc == 0x403008u) {
        ctx->pc = 0x403008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403004u;
        // 0x403008: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40300Cu;
        goto label_40300c;
    }
    ctx->pc = 0x403004u;
    {
        const bool branch_taken_0x403004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x403008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403004u;
        // 0x403008: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403004) {
            ctx->pc = 0x403038u;
            goto label_403038;
        }
    }
    ctx->pc = 0x40300Cu;
label_40300c:
    // 0x40300c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x40300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_403010:
    // 0x403010: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x403010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_403014:
    // 0x403014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x403014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_403018:
    // 0x403018: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_40301c:
    if (ctx->pc == 0x40301Cu) {
        ctx->pc = 0x40301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403018u;
        // 0x40301c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403020u;
        goto label_403020;
    }
    ctx->pc = 0x403018u;
    {
        const bool branch_taken_0x403018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403018u;
        // 0x40301c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403018) {
            ctx->pc = 0x403034u;
            goto label_403034;
        }
    }
    ctx->pc = 0x403020u;
label_403020:
    // 0x403020: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x403020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_403024:
    // 0x403024: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x403024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_403028:
    // 0x403028: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x403028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_40302c:
    // 0x40302c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x40302cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_403030:
    // 0x403030: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x403030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_403034:
    // 0x403034: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x403034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_403038:
    // 0x403038: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x403038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_40303c:
    // 0x40303c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_403040:
    if (ctx->pc == 0x403040u) {
        ctx->pc = 0x403040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40303Cu;
        // 0x403040: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403044u;
        goto label_403044;
    }
    ctx->pc = 0x40303Cu;
    {
        const bool branch_taken_0x40303c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40303c) {
            ctx->pc = 0x403040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40303Cu;
            // 0x403040: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403068u;
            goto label_403068;
        }
    }
    ctx->pc = 0x403044u;
label_403044:
    // 0x403044: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x403044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_403048:
    // 0x403048: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x403048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
label_40304c:
    // 0x40304c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x40304cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_403050:
    // 0x403050: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x403050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_403054:
    // 0x403054: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x403054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_403058:
    // 0x403058: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x403058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_40305c:
    // 0x40305c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x40305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_403060:
    // 0x403060: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x403060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_403064:
    // 0x403064: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x403064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_403068:
    // 0x403068: 0xc0e858c  jal         func_3A1630
label_40306c:
    if (ctx->pc == 0x40306Cu) {
        ctx->pc = 0x40306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403068u;
        // 0x40306c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403070u;
        goto label_403070;
    }
    ctx->pc = 0x403068u;
    SET_GPR_U32(ctx, 31, 0x403070u);
    ctx->pc = 0x40306Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403068u;
    // 0x40306c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x403068u, 0x403070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403070u;
label_403070:
    // 0x403070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x403070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_403074:
    // 0x403074: 0x7bb00460  lq          $s0, 0x460($sp)
    ctx->pc = 0x403074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_403078:
    // 0x403078: 0x7bb10450  lq          $s1, 0x450($sp)
    ctx->pc = 0x403078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_40307c:
    // 0x40307c: 0x7bb20440  lq          $s2, 0x440($sp)
    ctx->pc = 0x40307cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1088)));
label_403080:
    // 0x403080: 0x7bb30430  lq          $s3, 0x430($sp)
    ctx->pc = 0x403080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1072)));
label_403084:
    // 0x403084: 0xdfbf0420  ld          $ra, 0x420($sp)
    ctx->pc = 0x403084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_403088:
    // 0x403088: 0x3e00008  jr          $ra
label_40308c:
    if (ctx->pc == 0x40308Cu) {
        ctx->pc = 0x40308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403088u;
        // 0x40308c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x403090u;
        goto label_fallthrough_0x403088;
    }
    ctx->pc = 0x403088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403088u;
        // 0x40308c: 0x27bd0470  addiu       $sp, $sp, 0x470 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x403088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x403088:
    ctx->pc = 0x403090u;
}
