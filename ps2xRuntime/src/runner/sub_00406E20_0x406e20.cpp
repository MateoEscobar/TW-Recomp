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

// Function: sub_00406E20
// Address: 0x406e20 - 0x40704c
void sub_00406E20_0x406e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00406E20_0x406e20");
#endif

    switch (ctx->pc) {
        case 0x406e20u: goto label_406e20;
        case 0x406e24u: goto label_406e24;
        case 0x406e28u: goto label_406e28;
        case 0x406e2cu: goto label_406e2c;
        case 0x406e30u: goto label_406e30;
        case 0x406e34u: goto label_406e34;
        case 0x406e38u: goto label_406e38;
        case 0x406e3cu: goto label_406e3c;
        case 0x406e40u: goto label_406e40;
        case 0x406e44u: goto label_406e44;
        case 0x406e48u: goto label_406e48;
        case 0x406e4cu: goto label_406e4c;
        case 0x406e50u: goto label_406e50;
        case 0x406e54u: goto label_406e54;
        case 0x406e58u: goto label_406e58;
        case 0x406e5cu: goto label_406e5c;
        case 0x406e60u: goto label_406e60;
        case 0x406e64u: goto label_406e64;
        case 0x406e68u: goto label_406e68;
        case 0x406e6cu: goto label_406e6c;
        case 0x406e70u: goto label_406e70;
        case 0x406e74u: goto label_406e74;
        case 0x406e78u: goto label_406e78;
        case 0x406e7cu: goto label_406e7c;
        case 0x406e80u: goto label_406e80;
        case 0x406e84u: goto label_406e84;
        case 0x406e88u: goto label_406e88;
        case 0x406e8cu: goto label_406e8c;
        case 0x406e90u: goto label_406e90;
        case 0x406e94u: goto label_406e94;
        case 0x406e98u: goto label_406e98;
        case 0x406e9cu: goto label_406e9c;
        case 0x406ea0u: goto label_406ea0;
        case 0x406ea4u: goto label_406ea4;
        case 0x406ea8u: goto label_406ea8;
        case 0x406eacu: goto label_406eac;
        case 0x406eb0u: goto label_406eb0;
        case 0x406eb4u: goto label_406eb4;
        case 0x406eb8u: goto label_406eb8;
        case 0x406ebcu: goto label_406ebc;
        case 0x406ec0u: goto label_406ec0;
        case 0x406ec4u: goto label_406ec4;
        case 0x406ec8u: goto label_406ec8;
        case 0x406eccu: goto label_406ecc;
        case 0x406ed0u: goto label_406ed0;
        case 0x406ed4u: goto label_406ed4;
        case 0x406ed8u: goto label_406ed8;
        case 0x406edcu: goto label_406edc;
        case 0x406ee0u: goto label_406ee0;
        case 0x406ee4u: goto label_406ee4;
        case 0x406ee8u: goto label_406ee8;
        case 0x406eecu: goto label_406eec;
        case 0x406ef0u: goto label_406ef0;
        case 0x406ef4u: goto label_406ef4;
        case 0x406ef8u: goto label_406ef8;
        case 0x406efcu: goto label_406efc;
        case 0x406f00u: goto label_406f00;
        case 0x406f04u: goto label_406f04;
        case 0x406f08u: goto label_406f08;
        case 0x406f0cu: goto label_406f0c;
        case 0x406f10u: goto label_406f10;
        case 0x406f14u: goto label_406f14;
        case 0x406f18u: goto label_406f18;
        case 0x406f1cu: goto label_406f1c;
        case 0x406f20u: goto label_406f20;
        case 0x406f24u: goto label_406f24;
        case 0x406f28u: goto label_406f28;
        case 0x406f2cu: goto label_406f2c;
        case 0x406f30u: goto label_406f30;
        case 0x406f34u: goto label_406f34;
        case 0x406f38u: goto label_406f38;
        case 0x406f3cu: goto label_406f3c;
        case 0x406f40u: goto label_406f40;
        case 0x406f44u: goto label_406f44;
        case 0x406f48u: goto label_406f48;
        case 0x406f4cu: goto label_406f4c;
        case 0x406f50u: goto label_406f50;
        case 0x406f54u: goto label_406f54;
        case 0x406f58u: goto label_406f58;
        case 0x406f5cu: goto label_406f5c;
        case 0x406f60u: goto label_406f60;
        case 0x406f64u: goto label_406f64;
        case 0x406f68u: goto label_406f68;
        case 0x406f6cu: goto label_406f6c;
        case 0x406f70u: goto label_406f70;
        case 0x406f74u: goto label_406f74;
        case 0x406f78u: goto label_406f78;
        case 0x406f7cu: goto label_406f7c;
        case 0x406f80u: goto label_406f80;
        case 0x406f84u: goto label_406f84;
        case 0x406f88u: goto label_406f88;
        case 0x406f8cu: goto label_406f8c;
        case 0x406f90u: goto label_406f90;
        case 0x406f94u: goto label_406f94;
        case 0x406f98u: goto label_406f98;
        case 0x406f9cu: goto label_406f9c;
        case 0x406fa0u: goto label_406fa0;
        case 0x406fa4u: goto label_406fa4;
        case 0x406fa8u: goto label_406fa8;
        case 0x406facu: goto label_406fac;
        case 0x406fb0u: goto label_406fb0;
        case 0x406fb4u: goto label_406fb4;
        case 0x406fb8u: goto label_406fb8;
        case 0x406fbcu: goto label_406fbc;
        case 0x406fc0u: goto label_406fc0;
        case 0x406fc4u: goto label_406fc4;
        case 0x406fc8u: goto label_406fc8;
        case 0x406fccu: goto label_406fcc;
        case 0x406fd0u: goto label_406fd0;
        case 0x406fd4u: goto label_406fd4;
        case 0x406fd8u: goto label_406fd8;
        case 0x406fdcu: goto label_406fdc;
        case 0x406fe0u: goto label_406fe0;
        case 0x406fe4u: goto label_406fe4;
        case 0x406fe8u: goto label_406fe8;
        case 0x406fecu: goto label_406fec;
        case 0x406ff0u: goto label_406ff0;
        case 0x406ff4u: goto label_406ff4;
        case 0x406ff8u: goto label_406ff8;
        case 0x406ffcu: goto label_406ffc;
        case 0x407000u: goto label_407000;
        case 0x407004u: goto label_407004;
        case 0x407008u: goto label_407008;
        case 0x40700cu: goto label_40700c;
        case 0x407010u: goto label_407010;
        case 0x407014u: goto label_407014;
        case 0x407018u: goto label_407018;
        case 0x40701cu: goto label_40701c;
        case 0x407020u: goto label_407020;
        case 0x407024u: goto label_407024;
        case 0x407028u: goto label_407028;
        case 0x40702cu: goto label_40702c;
        case 0x407030u: goto label_407030;
        case 0x407034u: goto label_407034;
        case 0x407038u: goto label_407038;
        case 0x40703cu: goto label_40703c;
        case 0x407040u: goto label_407040;
        case 0x407044u: goto label_407044;
        case 0x407048u: goto label_407048;
        default: break;
    }

    ctx->pc = 0x406e20u;

label_406e20:
    // 0x406e20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x406e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_406e24:
    // 0x406e24: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x406e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_406e28:
    // 0x406e28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x406e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_406e2c:
    // 0x406e2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x406e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_406e30:
    // 0x406e30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x406e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_406e34:
    // 0x406e34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x406e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_406e38:
    // 0x406e38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x406e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_406e3c:
    // 0x406e3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x406e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_406e40:
    // 0x406e40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x406e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_406e44:
    // 0x406e44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x406e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_406e48:
    // 0x406e48: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x406e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_406e4c:
    // 0x406e4c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x406e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_406e50:
    // 0x406e50: 0x40f809  jalr        $v0
label_406e54:
    if (ctx->pc == 0x406E54u) {
        ctx->pc = 0x406E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E50u;
        // 0x406e54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406E58u;
        goto label_406e58;
    }
    ctx->pc = 0x406E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x406E58u);
        ctx->pc = 0x406E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E50u;
        // 0x406e54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406E50u, 0x406E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406E58u;
label_406e58:
    // 0x406e58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x406e58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406e5c:
    // 0x406e5c: 0x2e020031  sltiu       $v0, $s0, 0x31
    ctx->pc = 0x406e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
label_406e60:
    // 0x406e60: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_406e64:
    if (ctx->pc == 0x406E64u) {
        ctx->pc = 0x406E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E60u;
        // 0x406e64: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406E68u;
        goto label_406e68;
    }
    ctx->pc = 0x406E60u;
    {
        const bool branch_taken_0x406e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E60u;
        // 0x406e64: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406e60) {
            ctx->pc = 0x40704Cu;
            return;
        }
    }
    ctx->pc = 0x406E68u;
label_406e68:
    // 0x406e68: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x406e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_406e6c:
    // 0x406e6c: 0x24427b90  addiu       $v0, $v0, 0x7B90
    ctx->pc = 0x406e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31632));
label_406e70:
    // 0x406e70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x406e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_406e74:
    // 0x406e74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x406e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_406e78:
    // 0x406e78: 0x800008  jr          $a0
label_406e7c:
    if (ctx->pc == 0x406E7Cu) {
        ctx->pc = 0x406E80u;
        goto label_406e80;
    }
    ctx->pc = 0x406E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x406E80u: goto label_406e80;
            case 0x406EACu: goto label_406eac;
            case 0x406F20u: goto label_406f20;
            case 0x406F38u: goto label_406f38;
            case 0x406FF0u: goto label_406ff0;
            case 0x406FFCu: goto label_406ffc;
            case 0x407014u: goto label_407014;
            case 0x40702Cu: goto label_40702c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406E78u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x406E80u;
label_406e80:
    // 0x406e80: 0xc0ea146  jal         func_3A8518
label_406e84:
    if (ctx->pc == 0x406E84u) {
        ctx->pc = 0x406E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E80u;
        // 0x406e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406E88u;
        goto label_406e88;
    }
    ctx->pc = 0x406E80u;
    SET_GPR_U32(ctx, 31, 0x406E88u);
    ctx->pc = 0x406E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406E80u;
    // 0x406e84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x406E80u, 0x406E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406E88u;
label_406e88:
    // 0x406e88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_406e8c:
    if (ctx->pc == 0x406E8Cu) {
        ctx->pc = 0x406E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E88u;
        // 0x406e8c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406E90u;
        goto label_406e90;
    }
    ctx->pc = 0x406E88u;
    {
        const bool branch_taken_0x406e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x406E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E88u;
        // 0x406e8c: 0x8e220054  lw          $v0, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406e88) {
            ctx->pc = 0x406E9Cu;
            goto label_406e9c;
        }
    }
    ctx->pc = 0x406E90u;
label_406e90:
    // 0x406e90: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x406e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_406e94:
    // 0x406e94: 0x1000006d  b           . + 4 + (0x6D << 2)
label_406e98:
    if (ctx->pc == 0x406E98u) {
        ctx->pc = 0x406E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E94u;
        // 0x406e98: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406E9Cu;
        goto label_406e9c;
    }
    ctx->pc = 0x406E94u;
    {
        const bool branch_taken_0x406e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406E94u;
        // 0x406e98: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406e94) {
            ctx->pc = 0x40704Cu;
            return;
        }
    }
    ctx->pc = 0x406E9Cu;
label_406e9c:
    // 0x406e9c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x406e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_406ea0:
    // 0x406ea0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x406ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_406ea4:
    // 0x406ea4: 0x10000069  b           . + 4 + (0x69 << 2)
label_406ea8:
    if (ctx->pc == 0x406EA8u) {
        ctx->pc = 0x406EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EA4u;
        // 0x406ea8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406EACu;
        goto label_406eac;
    }
    ctx->pc = 0x406EA4u;
    {
        const bool branch_taken_0x406ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EA4u;
        // 0x406ea8: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ea4) {
            ctx->pc = 0x40704Cu;
            return;
        }
    }
    ctx->pc = 0x406EACu;
label_406eac:
    // 0x406eac: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x406eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_406eb0:
    // 0x406eb0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x406eb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_406eb4:
    // 0x406eb4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x406eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_406eb8:
    // 0x406eb8: 0x40f809  jalr        $v0
label_406ebc:
    if (ctx->pc == 0x406EBCu) {
        ctx->pc = 0x406EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EB8u;
        // 0x406ebc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406EC0u;
        goto label_406ec0;
    }
    ctx->pc = 0x406EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x406EC0u);
        ctx->pc = 0x406EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EB8u;
        // 0x406ebc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406EB8u, 0x406EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406EC0u;
label_406ec0:
    // 0x406ec0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x406ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_406ec4:
    // 0x406ec4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x406ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_406ec8:
    // 0x406ec8: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_406ecc:
    if (ctx->pc == 0x406ECCu) {
        ctx->pc = 0x406ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EC8u;
        // 0x406ecc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406ED0u;
        goto label_406ed0;
    }
    ctx->pc = 0x406EC8u;
    {
        const bool branch_taken_0x406ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x406ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EC8u;
        // 0x406ecc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ec8) {
            ctx->pc = 0x407050u;
            return;
        }
    }
    ctx->pc = 0x406ED0u;
label_406ed0:
    // 0x406ed0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x406ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_406ed4:
    // 0x406ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406ed8:
    // 0x406ed8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x406ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_406edc:
    // 0x406edc: 0xc0ea14c  jal         func_3A8530
label_406ee0:
    if (ctx->pc == 0x406EE0u) {
        ctx->pc = 0x406EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EDCu;
        // 0x406ee0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406EE4u;
        goto label_406ee4;
    }
    ctx->pc = 0x406EDCu;
    SET_GPR_U32(ctx, 31, 0x406EE4u);
    ctx->pc = 0x406EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406EDCu;
    // 0x406ee0: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x406EDCu, 0x406EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406EE4u;
label_406ee4:
    // 0x406ee4: 0xc08a61a  jal         func_229868
label_406ee8:
    if (ctx->pc == 0x406EE8u) {
        ctx->pc = 0x406EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EE4u;
        // 0x406ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406EECu;
        goto label_406eec;
    }
    ctx->pc = 0x406EE4u;
    SET_GPR_U32(ctx, 31, 0x406EECu);
    ctx->pc = 0x406EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406EE4u;
    // 0x406ee8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x406EE4u, 0x406EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406EECu;
label_406eec:
    // 0x406eec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x406eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_406ef0:
    // 0x406ef0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406ef4:
    // 0x406ef4: 0xc0ea176  jal         func_3A85D8
label_406ef8:
    if (ctx->pc == 0x406EF8u) {
        ctx->pc = 0x406EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406EF4u;
        // 0x406ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406EFCu;
        goto label_406efc;
    }
    ctx->pc = 0x406EF4u;
    SET_GPR_U32(ctx, 31, 0x406EFCu);
    ctx->pc = 0x406EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406EF4u;
    // 0x406ef8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85D8u, 0x406EF4u, 0x406EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406EFCu;
label_406efc:
    // 0x406efc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x406efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_406f00:
    // 0x406f00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x406f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406f04:
    // 0x406f04: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x406f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_406f08:
    // 0x406f08: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x406f08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_406f0c:
    // 0x406f0c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x406f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_406f10:
    // 0x406f10: 0x40f809  jalr        $v0
label_406f14:
    if (ctx->pc == 0x406F14u) {
        ctx->pc = 0x406F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F10u;
        // 0x406f14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406F18u;
        goto label_406f18;
    }
    ctx->pc = 0x406F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x406F18u);
        ctx->pc = 0x406F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F10u;
        // 0x406f14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406F10u, 0x406F18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406F18u;
label_406f18:
    // 0x406f18: 0x1000004d  b           . + 4 + (0x4D << 2)
label_406f1c:
    if (ctx->pc == 0x406F1Cu) {
        ctx->pc = 0x406F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F18u;
        // 0x406f1c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406F20u;
        goto label_406f20;
    }
    ctx->pc = 0x406F18u;
    {
        const bool branch_taken_0x406f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F18u;
        // 0x406f1c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406f18) {
            ctx->pc = 0x407050u;
            return;
        }
    }
    ctx->pc = 0x406F20u;
label_406f20:
    // 0x406f20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_406f24:
    // 0x406f24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x406f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_406f28:
    // 0x406f28: 0xc101972  jal         func_4065C8
label_406f2c:
    if (ctx->pc == 0x406F2Cu) {
        ctx->pc = 0x406F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F28u;
        // 0x406f2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406F30u;
        goto label_406f30;
    }
    ctx->pc = 0x406F28u;
    SET_GPR_U32(ctx, 31, 0x406F30u);
    ctx->pc = 0x406F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406F28u;
    // 0x406f2c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4065C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4065C8u, 0x406F28u, 0x406F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406F30u;
label_406f30:
    // 0x406f30: 0x10000047  b           . + 4 + (0x47 << 2)
label_406f34:
    if (ctx->pc == 0x406F34u) {
        ctx->pc = 0x406F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F30u;
        // 0x406f34: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406F38u;
        goto label_406f38;
    }
    ctx->pc = 0x406F30u;
    {
        const bool branch_taken_0x406f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F30u;
        // 0x406f34: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406f30) {
            ctx->pc = 0x407050u;
            return;
        }
    }
    ctx->pc = 0x406F38u;
label_406f38:
    // 0x406f38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x406f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_406f3c:
    // 0x406f3c: 0xc0ea12a  jal         func_3A84A8
label_406f40:
    if (ctx->pc == 0x406F40u) {
        ctx->pc = 0x406F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F3Cu;
        // 0x406f40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406F44u;
        goto label_406f44;
    }
    ctx->pc = 0x406F3Cu;
    SET_GPR_U32(ctx, 31, 0x406F44u);
    ctx->pc = 0x406F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406F3Cu;
    // 0x406f40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x406F3Cu, 0x406F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406F44u;
label_406f44:
    // 0x406f44: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x406f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_406f48:
    // 0x406f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x406f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_406f4c:
    // 0x406f4c: 0xc0ea12a  jal         func_3A84A8
label_406f50:
    if (ctx->pc == 0x406F50u) {
        ctx->pc = 0x406F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F4Cu;
        // 0x406f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406F54u;
        goto label_406f54;
    }
    ctx->pc = 0x406F4Cu;
    SET_GPR_U32(ctx, 31, 0x406F54u);
    ctx->pc = 0x406F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406F4Cu;
    // 0x406f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x406F4Cu, 0x406F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406F54u;
label_406f54:
    // 0x406f54: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x406f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_406f58:
    // 0x406f58: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x406f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_406f5c:
    // 0x406f5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x406f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_406f60:
    // 0x406f60: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x406f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_406f64:
    // 0x406f64: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x406f64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_406f68:
    // 0x406f68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x406f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_406f6c:
    // 0x406f6c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x406f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_406f70:
    // 0x406f70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x406f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_406f74:
    // 0x406f74: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x406f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_406f78:
    // 0x406f78: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x406f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_406f7c:
    // 0x406f7c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x406f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_406f80:
    // 0x406f80: 0xc0cd518  jal         func_335460
label_406f84:
    if (ctx->pc == 0x406F84u) {
        ctx->pc = 0x406F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F80u;
        // 0x406f84: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406F88u;
        goto label_406f88;
    }
    ctx->pc = 0x406F80u;
    SET_GPR_U32(ctx, 31, 0x406F88u);
    ctx->pc = 0x406F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406F80u;
    // 0x406f84: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x406F80u, 0x406F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406F88u;
label_406f88:
    // 0x406f88: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x406f88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_406f8c:
    // 0x406f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x406f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406f90:
    // 0x406f90: 0xc136b24  jal         func_4DAC90
label_406f94:
    if (ctx->pc == 0x406F94u) {
        ctx->pc = 0x406F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406F90u;
        // 0x406f94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406F98u;
        goto label_406f98;
    }
    ctx->pc = 0x406F90u;
    SET_GPR_U32(ctx, 31, 0x406F98u);
    ctx->pc = 0x406F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406F90u;
    // 0x406f94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x406F90u, 0x406F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406F98u;
label_406f98:
    // 0x406f98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x406f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_406f9c:
    // 0x406f9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x406f9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_406fa0:
    // 0x406fa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x406fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_406fa4:
    // 0x406fa4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x406fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_406fa8:
    // 0x406fa8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x406fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_406fac:
    // 0x406fac: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x406facu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_406fb0:
    // 0x406fb0: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x406fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_406fb4:
    // 0x406fb4: 0x60f809  jalr        $v1
label_406fb8:
    if (ctx->pc == 0x406FB8u) {
        ctx->pc = 0x406FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FB4u;
        // 0x406fb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406FBCu;
        goto label_406fbc;
    }
    ctx->pc = 0x406FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x406FBCu);
        ctx->pc = 0x406FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FB4u;
        // 0x406fb8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406FB4u, 0x406FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406FBCu;
label_406fbc:
    // 0x406fbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x406fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_406fc0:
    // 0x406fc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x406fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_406fc4:
    // 0x406fc4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x406fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_406fc8:
    // 0x406fc8: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x406fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_406fcc:
    // 0x406fcc: 0x60f809  jalr        $v1
label_406fd0:
    if (ctx->pc == 0x406FD0u) {
        ctx->pc = 0x406FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FCCu;
        // 0x406fd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406FD4u;
        goto label_406fd4;
    }
    ctx->pc = 0x406FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x406FD4u);
        ctx->pc = 0x406FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FCCu;
        // 0x406fd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406FCCu, 0x406FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x406FD4u;
label_406fd4:
    // 0x406fd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x406fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_406fd8:
    // 0x406fd8: 0x3c030420  lui         $v1, 0x420
    ctx->pc = 0x406fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1056 << 16));
label_406fdc:
    // 0x406fdc: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x406fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
label_406fe0:
    // 0x406fe0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x406fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_406fe4:
    // 0x406fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x406fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_406fe8:
    // 0x406fe8: 0x10000018  b           . + 4 + (0x18 << 2)
label_406fec:
    if (ctx->pc == 0x406FECu) {
        ctx->pc = 0x406FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FE8u;
        // 0x406fec: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406FF0u;
        goto label_406ff0;
    }
    ctx->pc = 0x406FE8u;
    {
        const bool branch_taken_0x406fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FE8u;
        // 0x406fec: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406fe8) {
            ctx->pc = 0x40704Cu;
            return;
        }
    }
    ctx->pc = 0x406FF0u;
label_406ff0:
    // 0x406ff0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x406ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_406ff4:
    // 0x406ff4: 0x10000015  b           . + 4 + (0x15 << 2)
label_406ff8:
    if (ctx->pc == 0x406FF8u) {
        ctx->pc = 0x406FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FF4u;
        // 0x406ff8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x406FFCu;
        goto label_406ffc;
    }
    ctx->pc = 0x406FF4u;
    {
        const bool branch_taken_0x406ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406FF4u;
        // 0x406ff8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ff4) {
            ctx->pc = 0x40704Cu;
            return;
        }
    }
    ctx->pc = 0x406FFCu;
label_406ffc:
    // 0x406ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_407000:
    // 0x407000: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x407000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_407004:
    // 0x407004: 0xc101a0e  jal         func_406838
label_407008:
    if (ctx->pc == 0x407008u) {
        ctx->pc = 0x407008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407004u;
        // 0x407008: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40700Cu;
        goto label_40700c;
    }
    ctx->pc = 0x407004u;
    SET_GPR_U32(ctx, 31, 0x40700Cu);
    ctx->pc = 0x407008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407004u;
    // 0x407008: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406838u, 0x407004u, 0x40700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40700Cu;
label_40700c:
    // 0x40700c: 0x10000010  b           . + 4 + (0x10 << 2)
label_407010:
    if (ctx->pc == 0x407010u) {
        ctx->pc = 0x407010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40700Cu;
        // 0x407010: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407014u;
        goto label_407014;
    }
    ctx->pc = 0x40700Cu;
    {
        const bool branch_taken_0x40700c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40700Cu;
        // 0x407010: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40700c) {
            ctx->pc = 0x407050u;
            return;
        }
    }
    ctx->pc = 0x407014u;
label_407014:
    // 0x407014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x407014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_407018:
    // 0x407018: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x407018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40701c:
    // 0x40701c: 0xc101a82  jal         func_406A08
label_407020:
    if (ctx->pc == 0x407020u) {
        ctx->pc = 0x407020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40701Cu;
        // 0x407020: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407024u;
        goto label_407024;
    }
    ctx->pc = 0x40701Cu;
    SET_GPR_U32(ctx, 31, 0x407024u);
    ctx->pc = 0x407020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40701Cu;
    // 0x407020: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406A08u, 0x40701Cu, 0x407024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407024u;
label_407024:
    // 0x407024: 0x1000000a  b           . + 4 + (0xA << 2)
label_407028:
    if (ctx->pc == 0x407028u) {
        ctx->pc = 0x407028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407024u;
        // 0x407028: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40702Cu;
        goto label_40702c;
    }
    ctx->pc = 0x407024u;
    {
        const bool branch_taken_0x407024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x407028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407024u;
        // 0x407028: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407024) {
            ctx->pc = 0x407050u;
            return;
        }
    }
    ctx->pc = 0x40702Cu;
label_40702c:
    // 0x40702c: 0xc043d5e  jal         func_10F578
label_407030:
    if (ctx->pc == 0x407030u) {
        ctx->pc = 0x407030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40702Cu;
        // 0x407030: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x407034u;
        goto label_407034;
    }
    ctx->pc = 0x40702Cu;
    SET_GPR_U32(ctx, 31, 0x407034u);
    ctx->pc = 0x407030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40702Cu;
    // 0x407030: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x40702Cu, 0x407034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x407034u;
label_407034:
    // 0x407034: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_407038:
    if (ctx->pc == 0x407038u) {
        ctx->pc = 0x407038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407034u;
        // 0x407038: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40703Cu;
        goto label_40703c;
    }
    ctx->pc = 0x407034u;
    {
        const bool branch_taken_0x407034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x407038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407034u;
        // 0x407038: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407034) {
            ctx->pc = 0x40704Cu;
            return;
        }
    }
    ctx->pc = 0x40703Cu;
label_40703c:
    // 0x40703c: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x40703cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_407040:
    // 0x407040: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x407040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_407044:
    // 0x407044: 0xc0440c6  jal         func_110318
label_407048:
    if (ctx->pc == 0x407048u) {
        ctx->pc = 0x407048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x407044u;
        // 0x407048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40704Cu;
        goto label_fallthrough_0x407044;
    }
    ctx->pc = 0x407044u;
    SET_GPR_U32(ctx, 31, 0x40704Cu);
    ctx->pc = 0x407048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x407044u;
    // 0x407048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x407044u, 0x40704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_fallthrough_0x407044:
    ctx->pc = 0x40704Cu;
}
