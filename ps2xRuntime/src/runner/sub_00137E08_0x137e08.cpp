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

// Function: sub_00137E08
// Address: 0x137e08 - 0x138078
void sub_00137E08_0x137e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137E08_0x137e08");
#endif

    switch (ctx->pc) {
        case 0x137e08u: goto label_137e08;
        case 0x137e0cu: goto label_137e0c;
        case 0x137e10u: goto label_137e10;
        case 0x137e14u: goto label_137e14;
        case 0x137e18u: goto label_137e18;
        case 0x137e1cu: goto label_137e1c;
        case 0x137e20u: goto label_137e20;
        case 0x137e24u: goto label_137e24;
        case 0x137e28u: goto label_137e28;
        case 0x137e2cu: goto label_137e2c;
        case 0x137e30u: goto label_137e30;
        case 0x137e34u: goto label_137e34;
        case 0x137e38u: goto label_137e38;
        case 0x137e3cu: goto label_137e3c;
        case 0x137e40u: goto label_137e40;
        case 0x137e44u: goto label_137e44;
        case 0x137e48u: goto label_137e48;
        case 0x137e4cu: goto label_137e4c;
        case 0x137e50u: goto label_137e50;
        case 0x137e54u: goto label_137e54;
        case 0x137e58u: goto label_137e58;
        case 0x137e5cu: goto label_137e5c;
        case 0x137e60u: goto label_137e60;
        case 0x137e64u: goto label_137e64;
        case 0x137e68u: goto label_137e68;
        case 0x137e6cu: goto label_137e6c;
        case 0x137e70u: goto label_137e70;
        case 0x137e74u: goto label_137e74;
        case 0x137e78u: goto label_137e78;
        case 0x137e7cu: goto label_137e7c;
        case 0x137e80u: goto label_137e80;
        case 0x137e84u: goto label_137e84;
        case 0x137e88u: goto label_137e88;
        case 0x137e8cu: goto label_137e8c;
        case 0x137e90u: goto label_137e90;
        case 0x137e94u: goto label_137e94;
        case 0x137e98u: goto label_137e98;
        case 0x137e9cu: goto label_137e9c;
        case 0x137ea0u: goto label_137ea0;
        case 0x137ea4u: goto label_137ea4;
        case 0x137ea8u: goto label_137ea8;
        case 0x137eacu: goto label_137eac;
        case 0x137eb0u: goto label_137eb0;
        case 0x137eb4u: goto label_137eb4;
        case 0x137eb8u: goto label_137eb8;
        case 0x137ebcu: goto label_137ebc;
        case 0x137ec0u: goto label_137ec0;
        case 0x137ec4u: goto label_137ec4;
        case 0x137ec8u: goto label_137ec8;
        case 0x137eccu: goto label_137ecc;
        case 0x137ed0u: goto label_137ed0;
        case 0x137ed4u: goto label_137ed4;
        case 0x137ed8u: goto label_137ed8;
        case 0x137edcu: goto label_137edc;
        case 0x137ee0u: goto label_137ee0;
        case 0x137ee4u: goto label_137ee4;
        case 0x137ee8u: goto label_137ee8;
        case 0x137eecu: goto label_137eec;
        case 0x137ef0u: goto label_137ef0;
        case 0x137ef4u: goto label_137ef4;
        case 0x137ef8u: goto label_137ef8;
        case 0x137efcu: goto label_137efc;
        case 0x137f00u: goto label_137f00;
        case 0x137f04u: goto label_137f04;
        case 0x137f08u: goto label_137f08;
        case 0x137f0cu: goto label_137f0c;
        case 0x137f10u: goto label_137f10;
        case 0x137f14u: goto label_137f14;
        case 0x137f18u: goto label_137f18;
        case 0x137f1cu: goto label_137f1c;
        case 0x137f20u: goto label_137f20;
        case 0x137f24u: goto label_137f24;
        case 0x137f28u: goto label_137f28;
        case 0x137f2cu: goto label_137f2c;
        case 0x137f30u: goto label_137f30;
        case 0x137f34u: goto label_137f34;
        case 0x137f38u: goto label_137f38;
        case 0x137f3cu: goto label_137f3c;
        case 0x137f40u: goto label_137f40;
        case 0x137f44u: goto label_137f44;
        case 0x137f48u: goto label_137f48;
        case 0x137f4cu: goto label_137f4c;
        case 0x137f50u: goto label_137f50;
        case 0x137f54u: goto label_137f54;
        case 0x137f58u: goto label_137f58;
        case 0x137f5cu: goto label_137f5c;
        case 0x137f60u: goto label_137f60;
        case 0x137f64u: goto label_137f64;
        case 0x137f68u: goto label_137f68;
        case 0x137f6cu: goto label_137f6c;
        case 0x137f70u: goto label_137f70;
        case 0x137f74u: goto label_137f74;
        case 0x137f78u: goto label_137f78;
        case 0x137f7cu: goto label_137f7c;
        case 0x137f80u: goto label_137f80;
        case 0x137f84u: goto label_137f84;
        case 0x137f88u: goto label_137f88;
        case 0x137f8cu: goto label_137f8c;
        case 0x137f90u: goto label_137f90;
        case 0x137f94u: goto label_137f94;
        case 0x137f98u: goto label_137f98;
        case 0x137f9cu: goto label_137f9c;
        case 0x137fa0u: goto label_137fa0;
        case 0x137fa4u: goto label_137fa4;
        case 0x137fa8u: goto label_137fa8;
        case 0x137facu: goto label_137fac;
        case 0x137fb0u: goto label_137fb0;
        case 0x137fb4u: goto label_137fb4;
        case 0x137fb8u: goto label_137fb8;
        case 0x137fbcu: goto label_137fbc;
        case 0x137fc0u: goto label_137fc0;
        case 0x137fc4u: goto label_137fc4;
        case 0x137fc8u: goto label_137fc8;
        case 0x137fccu: goto label_137fcc;
        case 0x137fd0u: goto label_137fd0;
        case 0x137fd4u: goto label_137fd4;
        case 0x137fd8u: goto label_137fd8;
        case 0x137fdcu: goto label_137fdc;
        case 0x137fe0u: goto label_137fe0;
        case 0x137fe4u: goto label_137fe4;
        case 0x137fe8u: goto label_137fe8;
        case 0x137fecu: goto label_137fec;
        case 0x137ff0u: goto label_137ff0;
        case 0x137ff4u: goto label_137ff4;
        case 0x137ff8u: goto label_137ff8;
        case 0x137ffcu: goto label_137ffc;
        case 0x138000u: goto label_138000;
        case 0x138004u: goto label_138004;
        case 0x138008u: goto label_138008;
        case 0x13800cu: goto label_13800c;
        case 0x138010u: goto label_138010;
        case 0x138014u: goto label_138014;
        case 0x138018u: goto label_138018;
        case 0x13801cu: goto label_13801c;
        case 0x138020u: goto label_138020;
        case 0x138024u: goto label_138024;
        case 0x138028u: goto label_138028;
        case 0x13802cu: goto label_13802c;
        case 0x138030u: goto label_138030;
        case 0x138034u: goto label_138034;
        case 0x138038u: goto label_138038;
        case 0x13803cu: goto label_13803c;
        case 0x138040u: goto label_138040;
        case 0x138044u: goto label_138044;
        case 0x138048u: goto label_138048;
        case 0x13804cu: goto label_13804c;
        case 0x138050u: goto label_138050;
        case 0x138054u: goto label_138054;
        case 0x138058u: goto label_138058;
        case 0x13805cu: goto label_13805c;
        case 0x138060u: goto label_138060;
        case 0x138064u: goto label_138064;
        case 0x138068u: goto label_138068;
        case 0x13806cu: goto label_13806c;
        case 0x138070u: goto label_138070;
        case 0x138074u: goto label_138074;
        default: break;
    }

    ctx->pc = 0x137e08u;

label_137e08:
    // 0x137e08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x137e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_137e0c:
    // 0x137e0c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x137e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_137e10:
    // 0x137e10: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x137e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_137e14:
    // 0x137e14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x137e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137e18:
    // 0x137e18: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x137e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_137e1c:
    // 0x137e1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x137e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137e20:
    // 0x137e20: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x137e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_137e24:
    // 0x137e24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x137e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_137e28:
    // 0x137e28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x137e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_137e2c:
    // 0x137e2c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x137e2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_137e30:
    // 0x137e30: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x137e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_137e34:
    // 0x137e34: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
label_137e38:
    if (ctx->pc == 0x137E38u) {
        ctx->pc = 0x137E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E34u;
        // 0x137e38: 0xafa70044  sw          $a3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E3Cu;
        goto label_137e3c;
    }
    ctx->pc = 0x137E34u;
    {
        const bool branch_taken_0x137e34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E34u;
        // 0x137e38: 0xafa70044  sw          $a3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e34) {
            ctx->pc = 0x137E94u;
            goto label_137e94;
        }
    }
    ctx->pc = 0x137E3Cu;
label_137e3c:
    // 0x137e3c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x137e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_137e40:
    // 0x137e40: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x137e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_137e44:
    // 0x137e44: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x137e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_137e48:
    // 0x137e48: 0x40f809  jalr        $v0
label_137e4c:
    if (ctx->pc == 0x137E4Cu) {
        ctx->pc = 0x137E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E48u;
        // 0x137e4c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E50u;
        goto label_137e50;
    }
    ctx->pc = 0x137E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137E50u);
        ctx->pc = 0x137E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E48u;
        // 0x137e4c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137E48u, 0x137E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137E50u;
label_137e50:
    // 0x137e50: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x137e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_137e54:
    // 0x137e54: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_137e58:
    if (ctx->pc == 0x137E58u) {
        ctx->pc = 0x137E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E54u;
        // 0x137e58: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E5Cu;
        goto label_137e5c;
    }
    ctx->pc = 0x137E54u;
    {
        const bool branch_taken_0x137e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137e54) {
            ctx->pc = 0x137E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E54u;
            // 0x137e58: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E98u;
            goto label_137e98;
        }
    }
    ctx->pc = 0x137E5Cu;
label_137e5c:
    // 0x137e5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x137e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_137e60:
    // 0x137e60: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x137e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_137e64:
    // 0x137e64: 0x8c65b198  lw          $a1, -0x4E68($v1)
    ctx->pc = 0x137e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947224)));
label_137e68:
    // 0x137e68: 0x8c82b19c  lw          $v0, -0x4E64($a0)
    ctx->pc = 0x137e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294947228)));
label_137e6c:
    // 0x137e6c: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
label_137e70:
    if (ctx->pc == 0x137E70u) {
        ctx->pc = 0x137E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E6Cu;
        // 0x137e70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E74u;
        goto label_137e74;
    }
    ctx->pc = 0x137E6Cu;
    {
        const bool branch_taken_0x137e6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x137e6c) {
            ctx->pc = 0x137E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E6Cu;
            // 0x137e70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E98u;
            goto label_137e98;
        }
    }
    ctx->pc = 0x137E74u;
label_137e74:
    // 0x137e74: 0xc0e4060  jal         func_390180
label_137e78:
    if (ctx->pc == 0x137E78u) {
        ctx->pc = 0x137E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E74u;
        // 0x137e78: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E7Cu;
        goto label_137e7c;
    }
    ctx->pc = 0x137E74u;
    SET_GPR_U32(ctx, 31, 0x137E7Cu);
    ctx->pc = 0x137E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E74u;
    // 0x137e78: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x137E74u, 0x137E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E7Cu;
label_137e7c:
    // 0x137e7c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_137e80:
    if (ctx->pc == 0x137E80u) {
        ctx->pc = 0x137E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E7Cu;
        // 0x137e80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E84u;
        goto label_137e84;
    }
    ctx->pc = 0x137E7Cu;
    {
        const bool branch_taken_0x137e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e7c) {
            ctx->pc = 0x137E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E7Cu;
            // 0x137e80: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137E98u;
            goto label_137e98;
        }
    }
    ctx->pc = 0x137E84u;
label_137e84:
    // 0x137e84: 0xc0e4060  jal         func_390180
label_137e88:
    if (ctx->pc == 0x137E88u) {
        ctx->pc = 0x137E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E84u;
        // 0x137e88: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E8Cu;
        goto label_137e8c;
    }
    ctx->pc = 0x137E84u;
    SET_GPR_U32(ctx, 31, 0x137E8Cu);
    ctx->pc = 0x137E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E84u;
    // 0x137e88: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x137E84u, 0x137E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E8Cu;
label_137e8c:
    // 0x137e8c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_137e90:
    if (ctx->pc == 0x137E90u) {
        ctx->pc = 0x137E94u;
        goto label_137e94;
    }
    ctx->pc = 0x137E8Cu;
    {
        const bool branch_taken_0x137e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137e8c) {
            ctx->pc = 0x137E98u;
            goto label_137e98;
        }
    }
    ctx->pc = 0x137E94u;
label_137e94:
    // 0x137e94: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137e98:
    // 0x137e98: 0x1600006f  bnez        $s0, . + 4 + (0x6F << 2)
label_137e9c:
    if (ctx->pc == 0x137E9Cu) {
        ctx->pc = 0x137E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E98u;
        // 0x137e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137EA0u;
        goto label_137ea0;
    }
    ctx->pc = 0x137E98u;
    {
        const bool branch_taken_0x137e98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x137E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E98u;
        // 0x137e9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e98) {
            ctx->pc = 0x138058u;
            goto label_138058;
        }
    }
    ctx->pc = 0x137EA0u;
label_137ea0:
    // 0x137ea0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x137ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_137ea4:
    // 0x137ea4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x137ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_137ea8:
    // 0x137ea8: 0xae4201e0  sw          $v0, 0x1E0($s2)
    ctx->pc = 0x137ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 480), GPR_U32(ctx, 2));
label_137eac:
    // 0x137eac: 0xae4301e4  sw          $v1, 0x1E4($s2)
    ctx->pc = 0x137eacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 3));
label_137eb0:
    // 0x137eb0: 0xae530230  sw          $s3, 0x230($s2)
    ctx->pc = 0x137eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 560), GPR_U32(ctx, 19));
label_137eb4:
    // 0x137eb4: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x137eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_137eb8:
    // 0x137eb8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x137eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_137ebc:
    // 0x137ebc: 0x86110190  lh          $s1, 0x190($s0)
    ctx->pc = 0x137ebcu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 400)));
label_137ec0:
    // 0x137ec0: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x137ec0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_137ec4:
    // 0x137ec4: 0x26100190  addiu       $s0, $s0, 0x190
    ctx->pc = 0x137ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_137ec8:
    // 0x137ec8: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x137ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_137ecc:
    // 0x137ecc: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x137eccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_137ed0:
    // 0x137ed0: 0x60f809  jalr        $v1
label_137ed4:
    if (ctx->pc == 0x137ED4u) {
        ctx->pc = 0x137ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ED0u;
        // 0x137ed4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137ED8u;
        goto label_137ed8;
    }
    ctx->pc = 0x137ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x137ED8u);
        ctx->pc = 0x137ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ED0u;
        // 0x137ed4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137ED0u, 0x137ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137ED8u;
label_137ed8:
    // 0x137ed8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x137ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_137edc:
    // 0x137edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137ee0:
    // 0x137ee0: 0x40f809  jalr        $v0
label_137ee4:
    if (ctx->pc == 0x137EE4u) {
        ctx->pc = 0x137EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EE0u;
        // 0x137ee4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x137EE8u;
        goto label_137ee8;
    }
    ctx->pc = 0x137EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137EE8u);
        ctx->pc = 0x137EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EE0u;
        // 0x137ee4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137EE0u, 0x137EE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137EE8u;
label_137ee8:
    // 0x137ee8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x137ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_137eec:
    // 0x137eec: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x137eecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_137ef0:
    // 0x137ef0: 0x84440200  lh          $a0, 0x200($v0)
    ctx->pc = 0x137ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 512)));
label_137ef4:
    // 0x137ef4: 0x861101a0  lh          $s1, 0x1A0($s0)
    ctx->pc = 0x137ef4u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 416)));
label_137ef8:
    // 0x137ef8: 0x8c430204  lw          $v1, 0x204($v0)
    ctx->pc = 0x137ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
label_137efc:
    // 0x137efc: 0x261001a0  addiu       $s0, $s0, 0x1A0
    ctx->pc = 0x137efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_137f00:
    // 0x137f00: 0x2518821  addu        $s1, $s2, $s1
    ctx->pc = 0x137f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_137f04:
    // 0x137f04: 0x60f809  jalr        $v1
label_137f08:
    if (ctx->pc == 0x137F08u) {
        ctx->pc = 0x137F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F04u;
        // 0x137f08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F0Cu;
        goto label_137f0c;
    }
    ctx->pc = 0x137F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x137F0Cu);
        ctx->pc = 0x137F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F04u;
        // 0x137f08: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F04u, 0x137F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137F0Cu;
label_137f0c:
    // 0x137f0c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x137f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_137f10:
    // 0x137f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137f14:
    // 0x137f14: 0xa0f809  jalr        $a1
label_137f18:
    if (ctx->pc == 0x137F18u) {
        ctx->pc = 0x137F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F14u;
        // 0x137f18: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F1Cu;
        goto label_137f1c;
    }
    ctx->pc = 0x137F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x137F1Cu);
        ctx->pc = 0x137F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F14u;
        // 0x137f18: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F14u, 0x137F1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137F1Cu;
label_137f1c:
    // 0x137f1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x137f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_137f20:
    // 0x137f20: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x137f20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_137f24:
    // 0x137f24: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x137f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_137f28:
    // 0x137f28: 0x60f809  jalr        $v1
label_137f2c:
    if (ctx->pc == 0x137F2Cu) {
        ctx->pc = 0x137F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F28u;
        // 0x137f2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F30u;
        goto label_137f30;
    }
    ctx->pc = 0x137F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x137F30u);
        ctx->pc = 0x137F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F28u;
        // 0x137f2c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F28u, 0x137F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137F30u;
label_137f30:
    // 0x137f30: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x137f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
label_137f34:
    // 0x137f34: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x137f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
label_137f38:
    // 0x137f38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137f3c:
    // 0x137f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x137f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_137f40:
    // 0x137f40: 0xae400248  sw          $zero, 0x248($s2)
    ctx->pc = 0x137f40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 584), GPR_U32(ctx, 0));
label_137f44:
    // 0x137f44: 0xae40024c  sw          $zero, 0x24C($s2)
    ctx->pc = 0x137f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
label_137f48:
    // 0x137f48: 0xe6400240  swc1        $f0, 0x240($s2)
    ctx->pc = 0x137f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 576), bits); }
label_137f4c:
    // 0x137f4c: 0xc04e01e  jal         func_138078
label_137f50:
    if (ctx->pc == 0x137F50u) {
        ctx->pc = 0x137F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F4Cu;
        // 0x137f50: 0xe6410244  swc1        $f1, 0x244($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 580), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F54u;
        goto label_137f54;
    }
    ctx->pc = 0x137F4Cu;
    SET_GPR_U32(ctx, 31, 0x137F54u);
    ctx->pc = 0x137F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F4Cu;
    // 0x137f50: 0xe6410244  swc1        $f1, 0x244($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 580), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x138078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138078u, 0x137F4Cu, 0x137F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F54u;
label_137f54:
    // 0x137f54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_137f58:
    if (ctx->pc == 0x137F58u) {
        ctx->pc = 0x137F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F54u;
        // 0x137f58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F5Cu;
        goto label_137f5c;
    }
    ctx->pc = 0x137F54u;
    {
        const bool branch_taken_0x137f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F54u;
        // 0x137f58: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f54) {
            ctx->pc = 0x137F64u;
            goto label_137f64;
        }
    }
    ctx->pc = 0x137F5Cu;
label_137f5c:
    // 0x137f5c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_137f60:
    if (ctx->pc == 0x137F60u) {
        ctx->pc = 0x137F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F5Cu;
        // 0x137f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F64u;
        goto label_137f64;
    }
    ctx->pc = 0x137F5Cu;
    {
        const bool branch_taken_0x137f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x137F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F5Cu;
        // 0x137f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f5c) {
            ctx->pc = 0x138058u;
            goto label_138058;
        }
    }
    ctx->pc = 0x137F64u;
label_137f64:
    // 0x137f64: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x137f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_137f68:
    // 0x137f68: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x137f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_137f6c:
    // 0x137f6c: 0x24a58fb8  addiu       $a1, $a1, -0x7048
    ctx->pc = 0x137f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938552));
label_137f70:
    // 0x137f70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137f74:
    // 0x137f74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x137f74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137f78:
    // 0x137f78: 0xc043f1c  jal         func_10FC70
label_137f7c:
    if (ctx->pc == 0x137F7Cu) {
        ctx->pc = 0x137F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F78u;
        // 0x137f7c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F80u;
        goto label_137f80;
    }
    ctx->pc = 0x137F78u;
    SET_GPR_U32(ctx, 31, 0x137F80u);
    ctx->pc = 0x137F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F78u;
    // 0x137f7c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x137F78u, 0x137F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137F80u;
label_137f80:
    // 0x137f80: 0xae4201ec  sw          $v0, 0x1EC($s2)
    ctx->pc = 0x137f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 492), GPR_U32(ctx, 2));
label_137f84:
    // 0x137f84: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x137f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_137f88:
    // 0x137f88: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x137f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_137f8c:
    // 0x137f8c: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x137f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_137f90:
    // 0x137f90: 0x40f809  jalr        $v0
label_137f94:
    if (ctx->pc == 0x137F94u) {
        ctx->pc = 0x137F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F90u;
        // 0x137f94: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F98u;
        goto label_137f98;
    }
    ctx->pc = 0x137F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137F98u);
        ctx->pc = 0x137F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F90u;
        // 0x137f94: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F90u, 0x137F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137F98u;
label_137f98:
    // 0x137f98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x137f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_137f9c:
    // 0x137f9c: 0x1443002e  bne         $v0, $v1, . + 4 + (0x2E << 2)
label_137fa0:
    if (ctx->pc == 0x137FA0u) {
        ctx->pc = 0x137FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F9Cu;
        // 0x137fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FA4u;
        goto label_137fa4;
    }
    ctx->pc = 0x137F9Cu;
    {
        const bool branch_taken_0x137f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x137FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F9Cu;
        // 0x137fa0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137f9c) {
            ctx->pc = 0x138058u;
            goto label_138058;
        }
    }
    ctx->pc = 0x137FA4u;
label_137fa4:
    // 0x137fa4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x137fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_137fa8:
    // 0x137fa8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x137fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_137fac:
    // 0x137fac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x137facu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_137fb0:
    // 0x137fb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137fb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137fb4:
    // 0x137fb4: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x137fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_137fb8:
    // 0x137fb8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137fb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_137fbc:
    // 0x137fbc: 0xc12e310  jal         func_4B8C40
label_137fc0:
    if (ctx->pc == 0x137FC0u) {
        ctx->pc = 0x137FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FBCu;
        // 0x137fc0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FC4u;
        goto label_137fc4;
    }
    ctx->pc = 0x137FBCu;
    SET_GPR_U32(ctx, 31, 0x137FC4u);
    ctx->pc = 0x137FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FBCu;
    // 0x137fc0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x137FBCu, 0x137FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FC4u;
label_137fc4:
    // 0x137fc4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x137fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_137fc8:
    // 0x137fc8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x137fc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_137fcc:
    // 0x137fcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137fccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137fd0:
    // 0x137fd0: 0xc12e29c  jal         func_4B8A70
label_137fd4:
    if (ctx->pc == 0x137FD4u) {
        ctx->pc = 0x137FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FD0u;
        // 0x137fd4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FD8u;
        goto label_137fd8;
    }
    ctx->pc = 0x137FD0u;
    SET_GPR_U32(ctx, 31, 0x137FD8u);
    ctx->pc = 0x137FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FD0u;
    // 0x137fd4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x137FD0u, 0x137FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137FD8u;
label_137fd8:
    // 0x137fd8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x137fd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_137fdc:
    // 0x137fdc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x137fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_137fe0:
    // 0x137fe0: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x137fe0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_137fe4:
    // 0x137fe4: 0x26450220  addiu       $a1, $s2, 0x220
    ctx->pc = 0x137fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_137fe8:
    // 0x137fe8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x137fe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_137fec:
    // 0x137fec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x137fecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_137ff0:
    // 0x137ff0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x137ff0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_137ff4:
    // 0x137ff4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x137ff4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_137ff8:
    // 0x137ff8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x137ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_137ffc:
    // 0x137ffc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x137ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_138000:
    // 0x138000: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x138000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138004:
    // 0x138004: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x138004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_138008:
    // 0x138008: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x138008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13800c:
    // 0x13800c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x13800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138010:
    // 0x138010: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x138010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138014:
    // 0x138014: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x138014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_138018:
    // 0x138018: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x138018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_13801c:
    // 0x13801c: 0xc136d44  jal         func_4DB510
label_138020:
    if (ctx->pc == 0x138020u) {
        ctx->pc = 0x138020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13801Cu;
        // 0x138020: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138024u;
        goto label_138024;
    }
    ctx->pc = 0x13801Cu;
    SET_GPR_U32(ctx, 31, 0x138024u);
    ctx->pc = 0x138020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13801Cu;
    // 0x138020: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DB510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB510u, 0x13801Cu, 0x138024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138024u;
label_138024:
    // 0x138024: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x138024u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_138028:
    // 0x138028: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x138028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13802c:
    // 0x13802c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x13802cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
label_138030:
    // 0x138030: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x138030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_138034:
    // 0x138034: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x138034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_138038:
    // 0x138038: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x138038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13803c:
    // 0x13803c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x13803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_138040:
    // 0x138040: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x138040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_138044:
    // 0x138044: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x138044u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_138048:
    // 0x138048: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x138048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_13804c:
    // 0x13804c: 0xc04b792  jal         func_12DE48
label_138050:
    if (ctx->pc == 0x138050u) {
        ctx->pc = 0x138050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13804Cu;
        // 0x138050: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138054u;
        goto label_138054;
    }
    ctx->pc = 0x13804Cu;
    SET_GPR_U32(ctx, 31, 0x138054u);
    ctx->pc = 0x138050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13804Cu;
    // 0x138050: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DE48u, 0x13804Cu, 0x138054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138054u;
label_138054:
    // 0x138054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138058:
    // 0x138058: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x138058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_13805c:
    // 0x13805c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x13805cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_138060:
    // 0x138060: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x138060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_138064:
    // 0x138064: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x138064u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_138068:
    // 0x138068: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x138068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_13806c:
    // 0x13806c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x13806cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_138070:
    // 0x138070: 0x3e00008  jr          $ra
label_138074:
    if (ctx->pc == 0x138074u) {
        ctx->pc = 0x138074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138070u;
        // 0x138074: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138078u;
        goto label_fallthrough_0x138070;
    }
    ctx->pc = 0x138070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138070u;
        // 0x138074: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x138070:
    ctx->pc = 0x138078u;
}
