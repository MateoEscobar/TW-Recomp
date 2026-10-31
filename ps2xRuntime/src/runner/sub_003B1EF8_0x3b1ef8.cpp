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

// Function: sub_003B1EF8
// Address: 0x3b1ef8 - 0x3b1ff8
void sub_003B1EF8_0x3b1ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1EF8_0x3b1ef8");
#endif

    switch (ctx->pc) {
        case 0x3b1ef8u: goto label_3b1ef8;
        case 0x3b1efcu: goto label_3b1efc;
        case 0x3b1f00u: goto label_3b1f00;
        case 0x3b1f04u: goto label_3b1f04;
        case 0x3b1f08u: goto label_3b1f08;
        case 0x3b1f0cu: goto label_3b1f0c;
        case 0x3b1f10u: goto label_3b1f10;
        case 0x3b1f14u: goto label_3b1f14;
        case 0x3b1f18u: goto label_3b1f18;
        case 0x3b1f1cu: goto label_3b1f1c;
        case 0x3b1f20u: goto label_3b1f20;
        case 0x3b1f24u: goto label_3b1f24;
        case 0x3b1f28u: goto label_3b1f28;
        case 0x3b1f2cu: goto label_3b1f2c;
        case 0x3b1f30u: goto label_3b1f30;
        case 0x3b1f34u: goto label_3b1f34;
        case 0x3b1f38u: goto label_3b1f38;
        case 0x3b1f3cu: goto label_3b1f3c;
        case 0x3b1f40u: goto label_3b1f40;
        case 0x3b1f44u: goto label_3b1f44;
        case 0x3b1f48u: goto label_3b1f48;
        case 0x3b1f4cu: goto label_3b1f4c;
        case 0x3b1f50u: goto label_3b1f50;
        case 0x3b1f54u: goto label_3b1f54;
        case 0x3b1f58u: goto label_3b1f58;
        case 0x3b1f5cu: goto label_3b1f5c;
        case 0x3b1f60u: goto label_3b1f60;
        case 0x3b1f64u: goto label_3b1f64;
        case 0x3b1f68u: goto label_3b1f68;
        case 0x3b1f6cu: goto label_3b1f6c;
        case 0x3b1f70u: goto label_3b1f70;
        case 0x3b1f74u: goto label_3b1f74;
        case 0x3b1f78u: goto label_3b1f78;
        case 0x3b1f7cu: goto label_3b1f7c;
        case 0x3b1f80u: goto label_3b1f80;
        case 0x3b1f84u: goto label_3b1f84;
        case 0x3b1f88u: goto label_3b1f88;
        case 0x3b1f8cu: goto label_3b1f8c;
        case 0x3b1f90u: goto label_3b1f90;
        case 0x3b1f94u: goto label_3b1f94;
        case 0x3b1f98u: goto label_3b1f98;
        case 0x3b1f9cu: goto label_3b1f9c;
        case 0x3b1fa0u: goto label_3b1fa0;
        case 0x3b1fa4u: goto label_3b1fa4;
        case 0x3b1fa8u: goto label_3b1fa8;
        case 0x3b1facu: goto label_3b1fac;
        case 0x3b1fb0u: goto label_3b1fb0;
        case 0x3b1fb4u: goto label_3b1fb4;
        case 0x3b1fb8u: goto label_3b1fb8;
        case 0x3b1fbcu: goto label_3b1fbc;
        case 0x3b1fc0u: goto label_3b1fc0;
        case 0x3b1fc4u: goto label_3b1fc4;
        case 0x3b1fc8u: goto label_3b1fc8;
        case 0x3b1fccu: goto label_3b1fcc;
        case 0x3b1fd0u: goto label_3b1fd0;
        case 0x3b1fd4u: goto label_3b1fd4;
        case 0x3b1fd8u: goto label_3b1fd8;
        case 0x3b1fdcu: goto label_3b1fdc;
        case 0x3b1fe0u: goto label_3b1fe0;
        case 0x3b1fe4u: goto label_3b1fe4;
        case 0x3b1fe8u: goto label_3b1fe8;
        case 0x3b1fecu: goto label_3b1fec;
        case 0x3b1ff0u: goto label_3b1ff0;
        case 0x3b1ff4u: goto label_3b1ff4;
        default: break;
    }

    ctx->pc = 0x3b1ef8u;

label_3b1ef8:
    // 0x3b1ef8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b1ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b1efc:
    // 0x3b1efc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b1efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3b1f00:
    // 0x3b1f00: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b1f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b1f04:
    // 0x3b1f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f08:
    // 0x3b1f08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b1f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b1f0c:
    // 0x3b1f0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b1f0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f10:
    // 0x3b1f10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b1f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3b1f14:
    // 0x3b1f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b1f18:
    // 0x3b1f18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b1f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b1f1c:
    // 0x3b1f1c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3b1f1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3b1f20:
    // 0x3b1f20: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3b1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3b1f24:
    // 0x3b1f24: 0x40f809  jalr        $v0
label_3b1f28:
    if (ctx->pc == 0x3B1F28u) {
        ctx->pc = 0x3B1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F24u;
        // 0x3b1f28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1F2Cu;
        goto label_3b1f2c;
    }
    ctx->pc = 0x3B1F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1F2Cu);
        ctx->pc = 0x3B1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F24u;
        // 0x3b1f28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1F24u, 0x3B1F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1F2Cu;
label_3b1f2c:
    // 0x3b1f2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b1f2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f30:
    // 0x3b1f30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b1f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f34:
    // 0x3b1f34: 0xc0ea12a  jal         func_3A84A8
label_3b1f38:
    if (ctx->pc == 0x3B1F38u) {
        ctx->pc = 0x3B1F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F34u;
        // 0x3b1f38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1F3Cu;
        goto label_3b1f3c;
    }
    ctx->pc = 0x3B1F34u;
    SET_GPR_U32(ctx, 31, 0x3B1F3Cu);
    ctx->pc = 0x3B1F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F34u;
    // 0x3b1f38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3B1F34u, 0x3B1F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F3Cu;
label_3b1f3c:
    // 0x3b1f3c: 0xc0ea146  jal         func_3A8518
label_3b1f40:
    if (ctx->pc == 0x3B1F40u) {
        ctx->pc = 0x3B1F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F3Cu;
        // 0x3b1f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1F44u;
        goto label_3b1f44;
    }
    ctx->pc = 0x3B1F3Cu;
    SET_GPR_U32(ctx, 31, 0x3B1F44u);
    ctx->pc = 0x3B1F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F3Cu;
    // 0x3b1f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3B1F3Cu, 0x3B1F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F44u;
label_3b1f44:
    // 0x3b1f44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b1f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f48:
    // 0x3b1f48: 0xc0ea14c  jal         func_3A8530
label_3b1f4c:
    if (ctx->pc == 0x3B1F4Cu) {
        ctx->pc = 0x3B1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F48u;
        // 0x3b1f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1F50u;
        goto label_3b1f50;
    }
    ctx->pc = 0x3B1F48u;
    SET_GPR_U32(ctx, 31, 0x3B1F50u);
    ctx->pc = 0x3B1F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F48u;
    // 0x3b1f4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3B1F48u, 0x3B1F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F50u;
label_3b1f50:
    // 0x3b1f50: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3b1f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b1f54:
    // 0x3b1f54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b1f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f58:
    // 0x3b1f58: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3b1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3b1f5c:
    // 0x3b1f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f60:
    // 0x3b1f60: 0xc0e858c  jal         func_3A1630
label_3b1f64:
    if (ctx->pc == 0x3B1F64u) {
        ctx->pc = 0x3B1F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F60u;
        // 0x3b1f64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1F68u;
        goto label_3b1f68;
    }
    ctx->pc = 0x3B1F60u;
    SET_GPR_U32(ctx, 31, 0x3B1F68u);
    ctx->pc = 0x3B1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F60u;
    // 0x3b1f64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3B1F60u, 0x3B1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F68u;
label_3b1f68:
    // 0x3b1f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f6c:
    // 0x3b1f6c: 0xc0e862e  jal         func_3A18B8
label_3b1f70:
    if (ctx->pc == 0x3B1F70u) {
        ctx->pc = 0x3B1F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F6Cu;
        // 0x3b1f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1F74u;
        goto label_3b1f74;
    }
    ctx->pc = 0x3B1F6Cu;
    SET_GPR_U32(ctx, 31, 0x3B1F74u);
    ctx->pc = 0x3B1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F6Cu;
    // 0x3b1f70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18B8u, 0x3B1F6Cu, 0x3B1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F74u;
label_3b1f74:
    // 0x3b1f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b1f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b1f78:
    // 0x3b1f78: 0xc0e896c  jal         func_3A25B0
label_3b1f7c:
    if (ctx->pc == 0x3B1F7Cu) {
        ctx->pc = 0x3B1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1F78u;
        // 0x3b1f7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1F80u;
        goto label_3b1f80;
    }
    ctx->pc = 0x3B1F78u;
    SET_GPR_U32(ctx, 31, 0x3B1F80u);
    ctx->pc = 0x3B1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1F78u;
    // 0x3b1f7c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B0u, 0x3B1F78u, 0x3B1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1F80u;
label_3b1f80:
    // 0x3b1f80: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b1f80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1f84:
    // 0x3b1f84: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3b1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3b1f88:
    // 0x3b1f88: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3b1f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b1f8c:
    // 0x3b1f8c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x3b1f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3b1f90:
    // 0x3b1f90: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x3b1f90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_3b1f94:
    // 0x3b1f94: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3b1f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3b1f98:
    // 0x3b1f98: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x3b1f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_3b1f9c:
    // 0x3b1f9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b1f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b1fa0:
    // 0x3b1fa0: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x3b1fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_3b1fa4:
    // 0x3b1fa4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3b1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b1fa8:
    // 0x3b1fa8: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x3b1fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_3b1fac:
    // 0x3b1fac: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3b1facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b1fb0:
    // 0x3b1fb0: 0xa640001c  sh          $zero, 0x1C($s2)
    ctx->pc = 0x3b1fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 0));
label_3b1fb4:
    // 0x3b1fb4: 0xc0cd4fc  jal         func_3353F0
label_3b1fb8:
    if (ctx->pc == 0x3B1FB8u) {
        ctx->pc = 0x3B1FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FB4u;
        // 0x3b1fb8: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FBCu;
        goto label_3b1fbc;
    }
    ctx->pc = 0x3B1FB4u;
    SET_GPR_U32(ctx, 31, 0x3B1FBCu);
    ctx->pc = 0x3B1FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1FB4u;
    // 0x3b1fb8: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x3B1FB4u, 0x3B1FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1FBCu;
label_3b1fbc:
    // 0x3b1fbc: 0xa242001f  sb          $v0, 0x1F($s2)
    ctx->pc = 0x3b1fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 31), (uint8_t)GPR_U32(ctx, 2));
label_3b1fc0:
    // 0x3b1fc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3b1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b1fc4:
    // 0x3b1fc4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3b1fc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3b1fc8:
    // 0x3b1fc8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3b1fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3b1fcc:
    // 0x3b1fcc: 0x40f809  jalr        $v0
label_3b1fd0:
    if (ctx->pc == 0x3B1FD0u) {
        ctx->pc = 0x3B1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FCCu;
        // 0x3b1fd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FD4u;
        goto label_3b1fd4;
    }
    ctx->pc = 0x3B1FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1FD4u);
        ctx->pc = 0x3B1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FCCu;
        // 0x3b1fd0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1FCCu, 0x3B1FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1FD4u;
label_3b1fd4:
    // 0x3b1fd4: 0xa253001e  sb          $s3, 0x1E($s2)
    ctx->pc = 0x3b1fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 30), (uint8_t)GPR_U32(ctx, 19));
label_3b1fd8:
    // 0x3b1fd8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3b1fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3b1fdc:
    // 0x3b1fdc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b1fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b1fe0:
    // 0x3b1fe0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b1fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b1fe4:
    // 0x3b1fe4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b1fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b1fe8:
    // 0x3b1fe8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3b1fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b1fec:
    // 0x3b1fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b1ff0:
    // 0x3b1ff0: 0x3e00008  jr          $ra
label_3b1ff4:
    if (ctx->pc == 0x3B1FF4u) {
        ctx->pc = 0x3B1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FF0u;
        // 0x3b1ff4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1FF8u;
        goto label_fallthrough_0x3b1ff0;
    }
    ctx->pc = 0x3B1FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1FF0u;
        // 0x3b1ff4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b1ff0:
    ctx->pc = 0x3B1FF8u;
}
