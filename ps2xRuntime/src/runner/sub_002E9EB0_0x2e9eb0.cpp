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

// Function: sub_002E9EB0
// Address: 0x2e9eb0 - 0x2e9fc8
void sub_002E9EB0_0x2e9eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9EB0_0x2e9eb0");
#endif

    switch (ctx->pc) {
        case 0x2e9eb0u: goto label_2e9eb0;
        case 0x2e9eb4u: goto label_2e9eb4;
        case 0x2e9eb8u: goto label_2e9eb8;
        case 0x2e9ebcu: goto label_2e9ebc;
        case 0x2e9ec0u: goto label_2e9ec0;
        case 0x2e9ec4u: goto label_2e9ec4;
        case 0x2e9ec8u: goto label_2e9ec8;
        case 0x2e9eccu: goto label_2e9ecc;
        case 0x2e9ed0u: goto label_2e9ed0;
        case 0x2e9ed4u: goto label_2e9ed4;
        case 0x2e9ed8u: goto label_2e9ed8;
        case 0x2e9edcu: goto label_2e9edc;
        case 0x2e9ee0u: goto label_2e9ee0;
        case 0x2e9ee4u: goto label_2e9ee4;
        case 0x2e9ee8u: goto label_2e9ee8;
        case 0x2e9eecu: goto label_2e9eec;
        case 0x2e9ef0u: goto label_2e9ef0;
        case 0x2e9ef4u: goto label_2e9ef4;
        case 0x2e9ef8u: goto label_2e9ef8;
        case 0x2e9efcu: goto label_2e9efc;
        case 0x2e9f00u: goto label_2e9f00;
        case 0x2e9f04u: goto label_2e9f04;
        case 0x2e9f08u: goto label_2e9f08;
        case 0x2e9f0cu: goto label_2e9f0c;
        case 0x2e9f10u: goto label_2e9f10;
        case 0x2e9f14u: goto label_2e9f14;
        case 0x2e9f18u: goto label_2e9f18;
        case 0x2e9f1cu: goto label_2e9f1c;
        case 0x2e9f20u: goto label_2e9f20;
        case 0x2e9f24u: goto label_2e9f24;
        case 0x2e9f28u: goto label_2e9f28;
        case 0x2e9f2cu: goto label_2e9f2c;
        case 0x2e9f30u: goto label_2e9f30;
        case 0x2e9f34u: goto label_2e9f34;
        case 0x2e9f38u: goto label_2e9f38;
        case 0x2e9f3cu: goto label_2e9f3c;
        case 0x2e9f40u: goto label_2e9f40;
        case 0x2e9f44u: goto label_2e9f44;
        case 0x2e9f48u: goto label_2e9f48;
        case 0x2e9f4cu: goto label_2e9f4c;
        case 0x2e9f50u: goto label_2e9f50;
        case 0x2e9f54u: goto label_2e9f54;
        case 0x2e9f58u: goto label_2e9f58;
        case 0x2e9f5cu: goto label_2e9f5c;
        case 0x2e9f60u: goto label_2e9f60;
        case 0x2e9f64u: goto label_2e9f64;
        case 0x2e9f68u: goto label_2e9f68;
        case 0x2e9f6cu: goto label_2e9f6c;
        case 0x2e9f70u: goto label_2e9f70;
        case 0x2e9f74u: goto label_2e9f74;
        case 0x2e9f78u: goto label_2e9f78;
        case 0x2e9f7cu: goto label_2e9f7c;
        case 0x2e9f80u: goto label_2e9f80;
        case 0x2e9f84u: goto label_2e9f84;
        case 0x2e9f88u: goto label_2e9f88;
        case 0x2e9f8cu: goto label_2e9f8c;
        case 0x2e9f90u: goto label_2e9f90;
        case 0x2e9f94u: goto label_2e9f94;
        case 0x2e9f98u: goto label_2e9f98;
        case 0x2e9f9cu: goto label_2e9f9c;
        case 0x2e9fa0u: goto label_2e9fa0;
        case 0x2e9fa4u: goto label_2e9fa4;
        case 0x2e9fa8u: goto label_2e9fa8;
        case 0x2e9facu: goto label_2e9fac;
        case 0x2e9fb0u: goto label_2e9fb0;
        case 0x2e9fb4u: goto label_2e9fb4;
        case 0x2e9fb8u: goto label_2e9fb8;
        case 0x2e9fbcu: goto label_2e9fbc;
        case 0x2e9fc0u: goto label_2e9fc0;
        case 0x2e9fc4u: goto label_2e9fc4;
        default: break;
    }

    ctx->pc = 0x2e9eb0u;

label_2e9eb0:
    // 0x2e9eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e9eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e9eb4:
    // 0x2e9eb4: 0x3c013ff5  lui         $at, 0x3FF5
    ctx->pc = 0x2e9eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16373 << 16));
label_2e9eb8:
    // 0x2e9eb8: 0x3421be0c  ori         $at, $at, 0xBE0C
    ctx->pc = 0x2e9eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48652);
label_2e9ebc:
    // 0x2e9ebc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e9ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e9ec0:
    // 0x2e9ec0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e9ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2e9ec4:
    // 0x2e9ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9ec8:
    // 0x2e9ec8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e9ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e9ecc:
    // 0x2e9ecc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e9ed0:
    // 0x2e9ed0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e9ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2e9ed4:
    // 0x2e9ed4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e9ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e9ed8:
    // 0x2e9ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e9ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e9edc:
    // 0x2e9edc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2e9edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e9ee0:
    // 0x2e9ee0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e9ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9ee4:
    // 0x2e9ee4: 0xac64021c  sw          $a0, 0x21C($v1)
    ctx->pc = 0x2e9ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 4));
label_2e9ee8:
    // 0x2e9ee8: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2e9ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9eec:
    // 0x2e9eec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9ef0:
    // 0x2e9ef0: 0xa0510265  sb          $s1, 0x265($v0)
    ctx->pc = 0x2e9ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 17));
label_2e9ef4:
    // 0x2e9ef4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2e9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9ef8:
    // 0x2e9ef8: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2e9ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2e9efc:
    // 0x2e9efc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e9efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9f00:
    // 0x2e9f00: 0xc0a22c6  jal         func_288B18
label_2e9f04:
    if (ctx->pc == 0x2E9F04u) {
        ctx->pc = 0x2E9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F00u;
        // 0x2e9f04: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F08u;
        goto label_2e9f08;
    }
    ctx->pc = 0x2E9F00u;
    SET_GPR_U32(ctx, 31, 0x2E9F08u);
    ctx->pc = 0x2E9F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F00u;
    // 0x2e9f04: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2E9F00u, 0x2E9F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F08u;
label_2e9f08:
    // 0x2e9f08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9f0c:
    // 0x2e9f0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f10:
    // 0x2e9f10: 0xc0a447a  jal         func_2911E8
label_2e9f14:
    if (ctx->pc == 0x2E9F14u) {
        ctx->pc = 0x2E9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F10u;
        // 0x2e9f14: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F18u;
        goto label_2e9f18;
    }
    ctx->pc = 0x2E9F10u;
    SET_GPR_U32(ctx, 31, 0x2E9F18u);
    ctx->pc = 0x2E9F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F10u;
    // 0x2e9f14: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E8u, 0x2E9F10u, 0x2E9F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F18u;
label_2e9f18:
    // 0x2e9f18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e9f1c:
    // 0x2e9f1c: 0xc0a337e  jal         func_28CDF8
label_2e9f20:
    if (ctx->pc == 0x2E9F20u) {
        ctx->pc = 0x2E9F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F1Cu;
        // 0x2e9f20: 0x8205002f  lb          $a1, 0x2F($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F24u;
        goto label_2e9f24;
    }
    ctx->pc = 0x2E9F1Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F24u);
    ctx->pc = 0x2E9F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F1Cu;
    // 0x2e9f20: 0x8205002f  lb          $a1, 0x2F($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 47)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2E9F1Cu, 0x2E9F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F24u;
label_2e9f24:
    // 0x2e9f24: 0xc088ade  jal         func_222B78
label_2e9f28:
    if (ctx->pc == 0x2E9F28u) {
        ctx->pc = 0x2E9F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F24u;
        // 0x2e9f28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F2Cu;
        goto label_2e9f2c;
    }
    ctx->pc = 0x2E9F24u;
    SET_GPR_U32(ctx, 31, 0x2E9F2Cu);
    ctx->pc = 0x2E9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F24u;
    // 0x2e9f28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2E9F24u, 0x2E9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F2Cu;
label_2e9f2c:
    // 0x2e9f2c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2e9f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e9f30:
    // 0x2e9f30: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2e9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
label_2e9f34:
    // 0x2e9f34: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e9f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e9f38:
    // 0x2e9f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f3c:
    // 0x2e9f3c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e9f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_2e9f40:
    // 0x2e9f40: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2e9f40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2e9f44:
    // 0x2e9f44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e9f48:
    // 0x2e9f48: 0xc0baac2  jal         func_2EAB08
label_2e9f4c:
    if (ctx->pc == 0x2E9F4Cu) {
        ctx->pc = 0x2E9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F48u;
        // 0x2e9f4c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F50u;
        goto label_2e9f50;
    }
    ctx->pc = 0x2E9F48u;
    SET_GPR_U32(ctx, 31, 0x2E9F50u);
    ctx->pc = 0x2E9F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9F48u;
    // 0x2e9f4c: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2E9F48u, 0x2E9F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E9F50u;
label_2e9f50:
    // 0x2e9f50: 0x14510018  bne         $v0, $s1, . + 4 + (0x18 << 2)
label_2e9f54:
    if (ctx->pc == 0x2E9F54u) {
        ctx->pc = 0x2E9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F50u;
        // 0x2e9f54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9F58u;
        goto label_2e9f58;
    }
    ctx->pc = 0x2E9F50u;
    {
        const bool branch_taken_0x2e9f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2E9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9F50u;
        // 0x2e9f54: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f50) {
            ctx->pc = 0x2E9FB4u;
            goto label_2e9fb4;
        }
    }
    ctx->pc = 0x2E9F58u;
label_2e9f58:
    // 0x2e9f58: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2e9f58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2e9f5c:
    // 0x2e9f5c: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x2e9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
label_2e9f60:
    // 0x2e9f60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e9f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e9f64:
    // 0x2e9f64: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x2e9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
label_2e9f68:
    // 0x2e9f68: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2e9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2e9f6c:
    // 0x2e9f6c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2e9f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2e9f70:
    // 0x2e9f70: 0x52878  dsll        $a1, $a1, 1
    ctx->pc = 0x2e9f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 1);
label_2e9f74:
    // 0x2e9f74: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x2e9f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_2e9f78:
    // 0x2e9f78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e9f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e9f7c:
    // 0x2e9f7c: 0x2406fdff  addiu       $a2, $zero, -0x201
    ctx->pc = 0x2e9f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
label_2e9f80:
    // 0x2e9f80: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2e9f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2e9f84:
    // 0x2e9f84: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e9f88:
    // 0x2e9f88: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2e9f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2e9f8c:
    // 0x2e9f8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e9f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e9f90:
    // 0x2e9f90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e9f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e9f94:
    // 0x2e9f94: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2e9f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_2e9f98:
    // 0x2e9f98: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e9f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e9f9c:
    // 0x2e9f9c: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2e9f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
label_2e9fa0:
    // 0x2e9fa0: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2e9fa0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2e9fa4:
    // 0x2e9fa4: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2e9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2e9fa8:
    // 0x2e9fa8: 0x40f809  jalr        $v0
label_2e9fac:
    if (ctx->pc == 0x2E9FACu) {
        ctx->pc = 0x2E9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FA8u;
        // 0x2e9fac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FB0u;
        goto label_2e9fb0;
    }
    ctx->pc = 0x2E9FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E9FB0u);
        ctx->pc = 0x2E9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FA8u;
        // 0x2e9fac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9FA8u, 0x2E9FB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E9FB0u;
label_2e9fb0:
    // 0x2e9fb0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e9fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e9fb4:
    // 0x2e9fb4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e9fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e9fb8:
    // 0x2e9fb8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e9fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e9fbc:
    // 0x2e9fbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e9fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e9fc0:
    // 0x2e9fc0: 0x3e00008  jr          $ra
label_2e9fc4:
    if (ctx->pc == 0x2E9FC4u) {
        ctx->pc = 0x2E9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FC0u;
        // 0x2e9fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E9FC8u;
        goto label_fallthrough_0x2e9fc0;
    }
    ctx->pc = 0x2E9FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9FC0u;
        // 0x2e9fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e9fc0:
    ctx->pc = 0x2E9FC8u;
}
