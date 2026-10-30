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

// Function: sub_00124D00
// Address: 0x124d00 - 0x124f38
void sub_00124D00_0x124d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124D00_0x124d00");
#endif

    switch (ctx->pc) {
        case 0x124d00u: goto label_124d00;
        case 0x124d04u: goto label_124d04;
        case 0x124d08u: goto label_124d08;
        case 0x124d0cu: goto label_124d0c;
        case 0x124d10u: goto label_124d10;
        case 0x124d14u: goto label_124d14;
        case 0x124d18u: goto label_124d18;
        case 0x124d1cu: goto label_124d1c;
        case 0x124d20u: goto label_124d20;
        case 0x124d24u: goto label_124d24;
        case 0x124d28u: goto label_124d28;
        case 0x124d2cu: goto label_124d2c;
        case 0x124d30u: goto label_124d30;
        case 0x124d34u: goto label_124d34;
        case 0x124d38u: goto label_124d38;
        case 0x124d3cu: goto label_124d3c;
        case 0x124d40u: goto label_124d40;
        case 0x124d44u: goto label_124d44;
        case 0x124d48u: goto label_124d48;
        case 0x124d4cu: goto label_124d4c;
        case 0x124d50u: goto label_124d50;
        case 0x124d54u: goto label_124d54;
        case 0x124d58u: goto label_124d58;
        case 0x124d5cu: goto label_124d5c;
        case 0x124d60u: goto label_124d60;
        case 0x124d64u: goto label_124d64;
        case 0x124d68u: goto label_124d68;
        case 0x124d6cu: goto label_124d6c;
        case 0x124d70u: goto label_124d70;
        case 0x124d74u: goto label_124d74;
        case 0x124d78u: goto label_124d78;
        case 0x124d7cu: goto label_124d7c;
        case 0x124d80u: goto label_124d80;
        case 0x124d84u: goto label_124d84;
        case 0x124d88u: goto label_124d88;
        case 0x124d8cu: goto label_124d8c;
        case 0x124d90u: goto label_124d90;
        case 0x124d94u: goto label_124d94;
        case 0x124d98u: goto label_124d98;
        case 0x124d9cu: goto label_124d9c;
        case 0x124da0u: goto label_124da0;
        case 0x124da4u: goto label_124da4;
        case 0x124da8u: goto label_124da8;
        case 0x124dacu: goto label_124dac;
        case 0x124db0u: goto label_124db0;
        case 0x124db4u: goto label_124db4;
        case 0x124db8u: goto label_124db8;
        case 0x124dbcu: goto label_124dbc;
        case 0x124dc0u: goto label_124dc0;
        case 0x124dc4u: goto label_124dc4;
        case 0x124dc8u: goto label_124dc8;
        case 0x124dccu: goto label_124dcc;
        case 0x124dd0u: goto label_124dd0;
        case 0x124dd4u: goto label_124dd4;
        case 0x124dd8u: goto label_124dd8;
        case 0x124ddcu: goto label_124ddc;
        case 0x124de0u: goto label_124de0;
        case 0x124de4u: goto label_124de4;
        case 0x124de8u: goto label_124de8;
        case 0x124decu: goto label_124dec;
        case 0x124df0u: goto label_124df0;
        case 0x124df4u: goto label_124df4;
        case 0x124df8u: goto label_124df8;
        case 0x124dfcu: goto label_124dfc;
        case 0x124e00u: goto label_124e00;
        case 0x124e04u: goto label_124e04;
        case 0x124e08u: goto label_124e08;
        case 0x124e0cu: goto label_124e0c;
        case 0x124e10u: goto label_124e10;
        case 0x124e14u: goto label_124e14;
        case 0x124e18u: goto label_124e18;
        case 0x124e1cu: goto label_124e1c;
        case 0x124e20u: goto label_124e20;
        case 0x124e24u: goto label_124e24;
        case 0x124e28u: goto label_124e28;
        case 0x124e2cu: goto label_124e2c;
        case 0x124e30u: goto label_124e30;
        case 0x124e34u: goto label_124e34;
        case 0x124e38u: goto label_124e38;
        case 0x124e3cu: goto label_124e3c;
        case 0x124e40u: goto label_124e40;
        case 0x124e44u: goto label_124e44;
        case 0x124e48u: goto label_124e48;
        case 0x124e4cu: goto label_124e4c;
        case 0x124e50u: goto label_124e50;
        case 0x124e54u: goto label_124e54;
        case 0x124e58u: goto label_124e58;
        case 0x124e5cu: goto label_124e5c;
        case 0x124e60u: goto label_124e60;
        case 0x124e64u: goto label_124e64;
        case 0x124e68u: goto label_124e68;
        case 0x124e6cu: goto label_124e6c;
        case 0x124e70u: goto label_124e70;
        case 0x124e74u: goto label_124e74;
        case 0x124e78u: goto label_124e78;
        case 0x124e7cu: goto label_124e7c;
        case 0x124e80u: goto label_124e80;
        case 0x124e84u: goto label_124e84;
        case 0x124e88u: goto label_124e88;
        case 0x124e8cu: goto label_124e8c;
        case 0x124e90u: goto label_124e90;
        case 0x124e94u: goto label_124e94;
        case 0x124e98u: goto label_124e98;
        case 0x124e9cu: goto label_124e9c;
        case 0x124ea0u: goto label_124ea0;
        case 0x124ea4u: goto label_124ea4;
        case 0x124ea8u: goto label_124ea8;
        case 0x124eacu: goto label_124eac;
        case 0x124eb0u: goto label_124eb0;
        case 0x124eb4u: goto label_124eb4;
        case 0x124eb8u: goto label_124eb8;
        case 0x124ebcu: goto label_124ebc;
        case 0x124ec0u: goto label_124ec0;
        case 0x124ec4u: goto label_124ec4;
        case 0x124ec8u: goto label_124ec8;
        case 0x124eccu: goto label_124ecc;
        case 0x124ed0u: goto label_124ed0;
        case 0x124ed4u: goto label_124ed4;
        case 0x124ed8u: goto label_124ed8;
        case 0x124edcu: goto label_124edc;
        case 0x124ee0u: goto label_124ee0;
        case 0x124ee4u: goto label_124ee4;
        case 0x124ee8u: goto label_124ee8;
        case 0x124eecu: goto label_124eec;
        case 0x124ef0u: goto label_124ef0;
        case 0x124ef4u: goto label_124ef4;
        case 0x124ef8u: goto label_124ef8;
        case 0x124efcu: goto label_124efc;
        case 0x124f00u: goto label_124f00;
        case 0x124f04u: goto label_124f04;
        case 0x124f08u: goto label_124f08;
        case 0x124f0cu: goto label_124f0c;
        case 0x124f10u: goto label_124f10;
        case 0x124f14u: goto label_124f14;
        case 0x124f18u: goto label_124f18;
        case 0x124f1cu: goto label_124f1c;
        case 0x124f20u: goto label_124f20;
        case 0x124f24u: goto label_124f24;
        case 0x124f28u: goto label_124f28;
        case 0x124f2cu: goto label_124f2c;
        case 0x124f30u: goto label_124f30;
        case 0x124f34u: goto label_124f34;
        default: break;
    }

    ctx->pc = 0x124d00u;

label_124d00:
    // 0x124d00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x124d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_124d04:
    // 0x124d04: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x124d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_124d08:
    // 0x124d08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x124d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_124d0c:
    // 0x124d0c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x124d0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_124d10:
    // 0x124d10: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x124d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_124d14:
    // 0x124d14: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x124d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_124d18:
    // 0x124d18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x124d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_124d1c:
    // 0x124d1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x124d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124d20:
    // 0x124d20: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x124d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_124d24:
    // 0x124d24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_124d28:
    // 0x124d28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x124d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_124d2c:
    // 0x124d2c: 0xc0493ce  jal         func_124F38
label_124d30:
    if (ctx->pc == 0x124D30u) {
        ctx->pc = 0x124D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D2Cu;
        // 0x124d30: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D34u;
        goto label_124d34;
    }
    ctx->pc = 0x124D2Cu;
    SET_GPR_U32(ctx, 31, 0x124D34u);
    ctx->pc = 0x124D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D2Cu;
    // 0x124d30: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F38u, 0x124D2Cu, 0x124D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D34u;
label_124d34:
    // 0x124d34: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x124d34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_124d38:
    // 0x124d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124d3c:
    // 0x124d3c: 0x7e220240  sq          $v0, 0x240($s1)
    ctx->pc = 0x124d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 576), GPR_VEC(ctx, 2));
label_124d40:
    // 0x124d40: 0xc049a9a  jal         func_126A68
label_124d44:
    if (ctx->pc == 0x124D44u) {
        ctx->pc = 0x124D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D40u;
        // 0x124d44: 0x7e220270  sq          $v0, 0x270($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 624), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D48u;
        goto label_124d48;
    }
    ctx->pc = 0x124D40u;
    SET_GPR_U32(ctx, 31, 0x124D48u);
    ctx->pc = 0x124D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D40u;
    // 0x124d44: 0x7e220270  sq          $v0, 0x270($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 624), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A68u, 0x124D40u, 0x124D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D48u;
label_124d48:
    // 0x124d48: 0x12000056  beqz        $s0, . + 4 + (0x56 << 2)
label_124d4c:
    if (ctx->pc == 0x124D4Cu) {
        ctx->pc = 0x124D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D48u;
        // 0x124d4c: 0x26300260  addiu       $s0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D50u;
        goto label_124d50;
    }
    ctx->pc = 0x124D48u;
    {
        const bool branch_taken_0x124d48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x124D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D48u;
        // 0x124d4c: 0x26300260  addiu       $s0, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124d48) {
            ctx->pc = 0x124EA4u;
            goto label_124ea4;
        }
    }
    ctx->pc = 0x124D50u;
label_124d50:
    // 0x124d50: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x124d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_124d54:
    // 0x124d54: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x124d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_124d58:
    // 0x124d58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x124d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_124d5c:
    // 0x124d5c: 0xc620030c  lwc1        $f0, 0x30C($s1)
    ctx->pc = 0x124d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_124d60:
    // 0x124d60: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x124d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_124d64:
    // 0x124d64: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x124d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_124d68:
    // 0x124d68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x124d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_124d6c:
    // 0x124d6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x124d6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_124d70:
    // 0x124d70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124d74:
    // 0x124d74: 0xe634034c  swc1        $f20, 0x34C($s1)
    ctx->pc = 0x124d74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 844), bits); }
label_124d78:
    // 0x124d78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x124d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_124d7c:
    // 0x124d7c: 0xe62003b4  swc1        $f0, 0x3B4($s1)
    ctx->pc = 0x124d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 948), bits); }
label_124d80:
    // 0x124d80: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x124d80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_124d84:
    // 0x124d84: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x124d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_124d88:
    // 0x124d88: 0x40f809  jalr        $v0
label_124d8c:
    if (ctx->pc == 0x124D8Cu) {
        ctx->pc = 0x124D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D88u;
        // 0x124d8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D90u;
        goto label_124d90;
    }
    ctx->pc = 0x124D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124D90u);
        ctx->pc = 0x124D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D88u;
        // 0x124d8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124D88u, 0x124D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124D90u;
label_124d90:
    // 0x124d90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124d94:
    // 0x124d94: 0xc0cd8ec  jal         func_3363B0
label_124d98:
    if (ctx->pc == 0x124D98u) {
        ctx->pc = 0x124D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124D94u;
        // 0x124d98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124D9Cu;
        goto label_124d9c;
    }
    ctx->pc = 0x124D94u;
    SET_GPR_U32(ctx, 31, 0x124D9Cu);
    ctx->pc = 0x124D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124D94u;
    // 0x124d98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x124D94u, 0x124D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124D9Cu;
label_124d9c:
    // 0x124d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124da0:
    // 0x124da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124da4:
    // 0x124da4: 0xc04b642  jal         func_12D908
label_124da8:
    if (ctx->pc == 0x124DA8u) {
        ctx->pc = 0x124DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DA4u;
        // 0x124da8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DACu;
        goto label_124dac;
    }
    ctx->pc = 0x124DA4u;
    SET_GPR_U32(ctx, 31, 0x124DACu);
    ctx->pc = 0x124DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DA4u;
    // 0x124da8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D908u, 0x124DA4u, 0x124DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DACu;
label_124dac:
    // 0x124dac: 0xc62103b4  lwc1        $f1, 0x3B4($s1)
    ctx->pc = 0x124dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_124db0:
    // 0x124db0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x124db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
label_124db4:
    // 0x124db4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x124db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
label_124db8:
    // 0x124db8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x124db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_124dbc:
    // 0x124dbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x124dbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_124dc0:
    // 0x124dc0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x124dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_124dc4:
    // 0x124dc4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x124dc4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_124dc8:
    // 0x124dc8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x124dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_124dcc:
    // 0x124dcc: 0x0  nop
    ctx->pc = 0x124dccu;
    // NOP
label_124dd0:
    // 0x124dd0: 0x45020027  bc1fl       . + 4 + (0x27 << 2)
label_124dd4:
    if (ctx->pc == 0x124DD4u) {
        ctx->pc = 0x124DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DD0u;
        // 0x124dd4: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DD8u;
        goto label_124dd8;
    }
    ctx->pc = 0x124DD0u;
    {
        const bool branch_taken_0x124dd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124dd0) {
            ctx->pc = 0x124DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124DD0u;
            // 0x124dd4: 0x96220444  lhu         $v0, 0x444($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124E70u;
            goto label_124e70;
        }
    }
    ctx->pc = 0x124DD8u;
label_124dd8:
    // 0x124dd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124ddc:
    // 0x124ddc: 0x84640220  lh          $a0, 0x220($v1)
    ctx->pc = 0x124ddcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 544)));
label_124de0:
    // 0x124de0: 0x8c620224  lw          $v0, 0x224($v1)
    ctx->pc = 0x124de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_124de4:
    // 0x124de4: 0x40f809  jalr        $v0
label_124de8:
    if (ctx->pc == 0x124DE8u) {
        ctx->pc = 0x124DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DE4u;
        // 0x124de8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DECu;
        goto label_124dec;
    }
    ctx->pc = 0x124DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124DECu);
        ctx->pc = 0x124DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DE4u;
        // 0x124de8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124DE4u, 0x124DECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124DECu;
label_124dec:
    // 0x124dec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124df0:
    // 0x124df0: 0xc0cd8c2  jal         func_336308
label_124df4:
    if (ctx->pc == 0x124DF4u) {
        ctx->pc = 0x124DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DF0u;
        // 0x124df4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124DF8u;
        goto label_124df8;
    }
    ctx->pc = 0x124DF0u;
    SET_GPR_U32(ctx, 31, 0x124DF8u);
    ctx->pc = 0x124DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124DF0u;
    // 0x124df4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x124DF0u, 0x124DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124DF8u;
label_124df8:
    // 0x124df8: 0xc62c03b4  lwc1        $f12, 0x3B4($s1)
    ctx->pc = 0x124df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_124dfc:
    // 0x124dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_124e00:
    // 0x124e00: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x124e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_124e04:
    // 0x124e04: 0x26270180  addiu       $a3, $s1, 0x180
    ctx->pc = 0x124e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
label_124e08:
    // 0x124e08: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x124e08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_124e0c:
    // 0x124e0c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x124e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_124e10:
    // 0x124e10: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x124e10u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_124e14:
    // 0x124e14: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x124e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_124e18:
    // 0x124e18: 0x4b8108aa  vmul.xy     $vf2, $vf1, $vf1
    ctx->pc = 0x124e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_124e1c:
    // 0x124e1c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x124e1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_124e20:
    // 0x124e20: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x124e20u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_124e24:
    // 0x124e24: 0x4a61033c  vmove.zw    $vf1, $vf0
    ctx->pc = 0x124e24u;
    { __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_124e28:
    // 0x124e28: 0x4a0003bf  vwaitq
    ctx->pc = 0x124e28u;
    // VWAITQ (Q already resolved in this runtime)
label_124e2c:
    // 0x124e2c: 0x4b80085c  vmulq.xy    $vf1, $vf1, $Q
    ctx->pc = 0x124e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_124e30:
    // 0x124e30: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x124e30u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_124e34:
    // 0x124e34: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x124e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_124e38:
    // 0x124e38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124e3c:
    // 0x124e3c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x124e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_124e40:
    // 0x124e40: 0xc04b53a  jal         func_12D4E8
label_124e44:
    if (ctx->pc == 0x124E44u) {
        ctx->pc = 0x124E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E40u;
        // 0x124e44: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E48u;
        goto label_124e48;
    }
    ctx->pc = 0x124E40u;
    SET_GPR_U32(ctx, 31, 0x124E48u);
    ctx->pc = 0x124E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E40u;
    // 0x124e44: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D4E8u, 0x124E40u, 0x124E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E48u;
label_124e48:
    // 0x124e48: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x124e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124e4c:
    // 0x124e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124e50:
    // 0x124e50: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x124e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_124e54:
    // 0x124e54: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x124e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_124e58:
    // 0x124e58: 0x60f809  jalr        $v1
label_124e5c:
    if (ctx->pc == 0x124E5Cu) {
        ctx->pc = 0x124E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E58u;
        // 0x124e5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E60u;
        goto label_124e60;
    }
    ctx->pc = 0x124E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124E60u);
        ctx->pc = 0x124E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E58u;
        // 0x124e5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E58u, 0x124E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124E60u;
label_124e60:
    // 0x124e60: 0x7a220260  lq          $v0, 0x260($s1)
    ctx->pc = 0x124e60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 608)));
label_124e64:
    // 0x124e64: 0x7e2202b0  sq          $v0, 0x2B0($s1)
    ctx->pc = 0x124e64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 688), GPR_VEC(ctx, 2));
label_124e68:
    // 0x124e68: 0x7e2201e0  sq          $v0, 0x1E0($s1)
    ctx->pc = 0x124e68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 480), GPR_VEC(ctx, 2));
label_124e6c:
    // 0x124e6c: 0x96220444  lhu         $v0, 0x444($s1)
    ctx->pc = 0x124e6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1092)));
label_124e70:
    // 0x124e70: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x124e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_124e74:
    // 0x124e74: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_124e78:
    if (ctx->pc == 0x124E78u) {
        ctx->pc = 0x124E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E74u;
        // 0x124e78: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E7Cu;
        goto label_124e7c;
    }
    ctx->pc = 0x124E74u;
    {
        const bool branch_taken_0x124e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124e74) {
            ctx->pc = 0x124E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124E74u;
            // 0x124e78: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124EA8u;
            goto label_124ea8;
        }
    }
    ctx->pc = 0x124E7Cu;
label_124e7c:
    // 0x124e7c: 0xc6340310  lwc1        $f20, 0x310($s1)
    ctx->pc = 0x124e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124e80:
    // 0x124e80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x124e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124e84:
    // 0x124e84: 0xe6340394  swc1        $f20, 0x394($s1)
    ctx->pc = 0x124e84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
label_124e88:
    // 0x124e88: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x124e88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_124e8c:
    // 0x124e8c: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x124e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_124e90:
    // 0x124e90: 0x60f809  jalr        $v1
label_124e94:
    if (ctx->pc == 0x124E94u) {
        ctx->pc = 0x124E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E90u;
        // 0x124e94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124E98u;
        goto label_124e98;
    }
    ctx->pc = 0x124E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x124E98u);
        ctx->pc = 0x124E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E90u;
        // 0x124e94: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E90u, 0x124E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124E98u;
label_124e98:
    // 0x124e98: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x124e98u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_124e9c:
    // 0x124e9c: 0x4600a505  abs.s       $f20, $f20
    ctx->pc = 0x124e9cu;
    ctx->f[20] = FPU_ABS_S(ctx->f[20]);
label_124ea0:
    // 0x124ea0: 0xe634039c  swc1        $f20, 0x39C($s1)
    ctx->pc = 0x124ea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 924), bits); }
label_124ea4:
    // 0x124ea4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124ea8:
    // 0x124ea8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x124ea8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_124eac:
    // 0x124eac: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x124eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_124eb0:
    // 0x124eb0: 0x40f809  jalr        $v0
label_124eb4:
    if (ctx->pc == 0x124EB4u) {
        ctx->pc = 0x124EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EB0u;
        // 0x124eb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EB8u;
        goto label_124eb8;
    }
    ctx->pc = 0x124EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124EB8u);
        ctx->pc = 0x124EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EB0u;
        // 0x124eb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124EB0u, 0x124EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124EB8u;
label_124eb8:
    // 0x124eb8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x124eb8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_124ebc:
    // 0x124ebc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x124ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_124ec0:
    // 0x124ec0: 0xc620032c  lwc1        $f0, 0x32C($s1)
    ctx->pc = 0x124ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_124ec4:
    // 0x124ec4: 0xc6210330  lwc1        $f1, 0x330($s1)
    ctx->pc = 0x124ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_124ec8:
    // 0x124ec8: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x124ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_124ecc:
    // 0x124ecc: 0xe6200334  swc1        $f0, 0x334($s1)
    ctx->pc = 0x124eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 820), bits); }
label_124ed0:
    // 0x124ed0: 0xe6210338  swc1        $f1, 0x338($s1)
    ctx->pc = 0x124ed0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 824), bits); }
label_124ed4:
    // 0x124ed4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x124ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_124ed8:
    // 0x124ed8: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x124ed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_124edc:
    // 0x124edc: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x124edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_124ee0:
    // 0x124ee0: 0x40f809  jalr        $v0
label_124ee4:
    if (ctx->pc == 0x124EE4u) {
        ctx->pc = 0x124EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EE0u;
        // 0x124ee4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EE8u;
        goto label_124ee8;
    }
    ctx->pc = 0x124EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x124EE8u);
        ctx->pc = 0x124EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EE0u;
        // 0x124ee4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124EE0u, 0x124EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x124EE8u;
label_124ee8:
    // 0x124ee8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x124ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_124eec:
    // 0x124eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_124ef0:
    // 0x124ef0: 0xc0cdc0a  jal         func_337028
label_124ef4:
    if (ctx->pc == 0x124EF4u) {
        ctx->pc = 0x124EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EF0u;
        // 0x124ef4: 0x26260240  addiu       $a2, $s1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124EF8u;
        goto label_124ef8;
    }
    ctx->pc = 0x124EF0u;
    SET_GPR_U32(ctx, 31, 0x124EF8u);
    ctx->pc = 0x124EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124EF0u;
    // 0x124ef4: 0x26260240  addiu       $a2, $s1, 0x240 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x124EF0u, 0x124EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124EF8u;
label_124ef8:
    // 0x124ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_124efc:
    if (ctx->pc == 0x124EFCu) {
        ctx->pc = 0x124EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EF8u;
        // 0x124efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F00u;
        goto label_124f00;
    }
    ctx->pc = 0x124EF8u;
    {
        const bool branch_taken_0x124ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124EF8u;
        // 0x124efc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124ef8) {
            ctx->pc = 0x124F10u;
            goto label_124f10;
        }
    }
    ctx->pc = 0x124F00u;
label_124f00:
    // 0x124f00: 0xc0cd972  jal         func_3365C8
label_124f04:
    if (ctx->pc == 0x124F04u) {
        ctx->pc = 0x124F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F00u;
        // 0x124f04: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F08u;
        goto label_124f08;
    }
    ctx->pc = 0x124F00u;
    SET_GPR_U32(ctx, 31, 0x124F08u);
    ctx->pc = 0x124F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F00u;
    // 0x124f04: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x124F00u, 0x124F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F08u;
label_124f08:
    // 0x124f08: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x124f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_124f0c:
    // 0x124f0c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x124f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_124f10:
    // 0x124f10: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x124f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_124f14:
    // 0x124f14: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x124f14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_124f18:
    // 0x124f18: 0x7e2201e0  sq          $v0, 0x1E0($s1)
    ctx->pc = 0x124f18u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 480), GPR_VEC(ctx, 2));
label_124f1c:
    // 0x124f1c: 0x7e2301f0  sq          $v1, 0x1F0($s1)
    ctx->pc = 0x124f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 496), GPR_VEC(ctx, 3));
label_124f20:
    // 0x124f20: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x124f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_124f24:
    // 0x124f24: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x124f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_124f28:
    // 0x124f28: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x124f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_124f2c:
    // 0x124f2c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x124f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_124f30:
    // 0x124f30: 0x3e00008  jr          $ra
label_124f34:
    if (ctx->pc == 0x124F34u) {
        ctx->pc = 0x124F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F30u;
        // 0x124f34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124F38u;
        goto label_fallthrough_0x124f30;
    }
    ctx->pc = 0x124F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F30u;
        // 0x124f34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x124f30:
    ctx->pc = 0x124F38u;
}
