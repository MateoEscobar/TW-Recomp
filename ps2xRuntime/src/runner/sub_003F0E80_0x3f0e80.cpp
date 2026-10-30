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

// Function: sub_003F0E80
// Address: 0x3f0e80 - 0x3f0fe0
void sub_003F0E80_0x3f0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F0E80_0x3f0e80");
#endif

    switch (ctx->pc) {
        case 0x3f0e80u: goto label_3f0e80;
        case 0x3f0e84u: goto label_3f0e84;
        case 0x3f0e88u: goto label_3f0e88;
        case 0x3f0e8cu: goto label_3f0e8c;
        case 0x3f0e90u: goto label_3f0e90;
        case 0x3f0e94u: goto label_3f0e94;
        case 0x3f0e98u: goto label_3f0e98;
        case 0x3f0e9cu: goto label_3f0e9c;
        case 0x3f0ea0u: goto label_3f0ea0;
        case 0x3f0ea4u: goto label_3f0ea4;
        case 0x3f0ea8u: goto label_3f0ea8;
        case 0x3f0eacu: goto label_3f0eac;
        case 0x3f0eb0u: goto label_3f0eb0;
        case 0x3f0eb4u: goto label_3f0eb4;
        case 0x3f0eb8u: goto label_3f0eb8;
        case 0x3f0ebcu: goto label_3f0ebc;
        case 0x3f0ec0u: goto label_3f0ec0;
        case 0x3f0ec4u: goto label_3f0ec4;
        case 0x3f0ec8u: goto label_3f0ec8;
        case 0x3f0eccu: goto label_3f0ecc;
        case 0x3f0ed0u: goto label_3f0ed0;
        case 0x3f0ed4u: goto label_3f0ed4;
        case 0x3f0ed8u: goto label_3f0ed8;
        case 0x3f0edcu: goto label_3f0edc;
        case 0x3f0ee0u: goto label_3f0ee0;
        case 0x3f0ee4u: goto label_3f0ee4;
        case 0x3f0ee8u: goto label_3f0ee8;
        case 0x3f0eecu: goto label_3f0eec;
        case 0x3f0ef0u: goto label_3f0ef0;
        case 0x3f0ef4u: goto label_3f0ef4;
        case 0x3f0ef8u: goto label_3f0ef8;
        case 0x3f0efcu: goto label_3f0efc;
        case 0x3f0f00u: goto label_3f0f00;
        case 0x3f0f04u: goto label_3f0f04;
        case 0x3f0f08u: goto label_3f0f08;
        case 0x3f0f0cu: goto label_3f0f0c;
        case 0x3f0f10u: goto label_3f0f10;
        case 0x3f0f14u: goto label_3f0f14;
        case 0x3f0f18u: goto label_3f0f18;
        case 0x3f0f1cu: goto label_3f0f1c;
        case 0x3f0f20u: goto label_3f0f20;
        case 0x3f0f24u: goto label_3f0f24;
        case 0x3f0f28u: goto label_3f0f28;
        case 0x3f0f2cu: goto label_3f0f2c;
        case 0x3f0f30u: goto label_3f0f30;
        case 0x3f0f34u: goto label_3f0f34;
        case 0x3f0f38u: goto label_3f0f38;
        case 0x3f0f3cu: goto label_3f0f3c;
        case 0x3f0f40u: goto label_3f0f40;
        case 0x3f0f44u: goto label_3f0f44;
        case 0x3f0f48u: goto label_3f0f48;
        case 0x3f0f4cu: goto label_3f0f4c;
        case 0x3f0f50u: goto label_3f0f50;
        case 0x3f0f54u: goto label_3f0f54;
        case 0x3f0f58u: goto label_3f0f58;
        case 0x3f0f5cu: goto label_3f0f5c;
        case 0x3f0f60u: goto label_3f0f60;
        case 0x3f0f64u: goto label_3f0f64;
        case 0x3f0f68u: goto label_3f0f68;
        case 0x3f0f6cu: goto label_3f0f6c;
        case 0x3f0f70u: goto label_3f0f70;
        case 0x3f0f74u: goto label_3f0f74;
        case 0x3f0f78u: goto label_3f0f78;
        case 0x3f0f7cu: goto label_3f0f7c;
        case 0x3f0f80u: goto label_3f0f80;
        case 0x3f0f84u: goto label_3f0f84;
        case 0x3f0f88u: goto label_3f0f88;
        case 0x3f0f8cu: goto label_3f0f8c;
        case 0x3f0f90u: goto label_3f0f90;
        case 0x3f0f94u: goto label_3f0f94;
        case 0x3f0f98u: goto label_3f0f98;
        case 0x3f0f9cu: goto label_3f0f9c;
        case 0x3f0fa0u: goto label_3f0fa0;
        case 0x3f0fa4u: goto label_3f0fa4;
        case 0x3f0fa8u: goto label_3f0fa8;
        case 0x3f0facu: goto label_3f0fac;
        case 0x3f0fb0u: goto label_3f0fb0;
        case 0x3f0fb4u: goto label_3f0fb4;
        case 0x3f0fb8u: goto label_3f0fb8;
        case 0x3f0fbcu: goto label_3f0fbc;
        case 0x3f0fc0u: goto label_3f0fc0;
        case 0x3f0fc4u: goto label_3f0fc4;
        case 0x3f0fc8u: goto label_3f0fc8;
        case 0x3f0fccu: goto label_3f0fcc;
        case 0x3f0fd0u: goto label_3f0fd0;
        case 0x3f0fd4u: goto label_3f0fd4;
        case 0x3f0fd8u: goto label_3f0fd8;
        case 0x3f0fdcu: goto label_3f0fdc;
        default: break;
    }

    ctx->pc = 0x3f0e80u;

label_3f0e80:
    // 0x3f0e80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f0e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3f0e84:
    // 0x3f0e84: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3f0e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3f0e88:
    // 0x3f0e88: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3f0e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3f0e8c:
    // 0x3f0e8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f0e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f0e90:
    // 0x3f0e90: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3f0e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3f0e94:
    // 0x3f0e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f0e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f0e98:
    // 0x3f0e98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f0e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f0e9c:
    // 0x3f0e9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3f0e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3f0ea0:
    // 0x3f0ea0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f0ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f0ea4:
    // 0x3f0ea4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f0ea8:
    // 0x3f0ea8: 0x40f809  jalr        $v0
label_3f0eac:
    if (ctx->pc == 0x3F0EACu) {
        ctx->pc = 0x3F0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EA8u;
        // 0x3f0eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0EB0u;
        goto label_3f0eb0;
    }
    ctx->pc = 0x3F0EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F0EB0u);
        ctx->pc = 0x3F0EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EA8u;
        // 0x3f0eac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0EA8u, 0x3F0EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F0EB0u;
label_3f0eb0:
    // 0x3f0eb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f0eb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f0eb4:
    // 0x3f0eb4: 0xc0ea14c  jal         func_3A8530
label_3f0eb8:
    if (ctx->pc == 0x3F0EB8u) {
        ctx->pc = 0x3F0EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EB4u;
        // 0x3f0eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0EBCu;
        goto label_3f0ebc;
    }
    ctx->pc = 0x3F0EB4u;
    SET_GPR_U32(ctx, 31, 0x3F0EBCu);
    ctx->pc = 0x3F0EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0EB4u;
    // 0x3f0eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3F0EB4u, 0x3F0EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0EBCu;
label_3f0ebc:
    // 0x3f0ebc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f0ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f0ec0:
    // 0x3f0ec0: 0xc0ea12a  jal         func_3A84A8
label_3f0ec4:
    if (ctx->pc == 0x3F0EC4u) {
        ctx->pc = 0x3F0EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EC0u;
        // 0x3f0ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0EC8u;
        goto label_3f0ec8;
    }
    ctx->pc = 0x3F0EC0u;
    SET_GPR_U32(ctx, 31, 0x3F0EC8u);
    ctx->pc = 0x3F0EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0EC0u;
    // 0x3f0ec4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F0EC0u, 0x3F0EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0EC8u;
label_3f0ec8:
    // 0x3f0ec8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3f0ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0ecc:
    // 0x3f0ecc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3f0eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3f0ed0:
    // 0x3f0ed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f0ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f0ed4:
    // 0x3f0ed4: 0xc0ea12a  jal         func_3A84A8
label_3f0ed8:
    if (ctx->pc == 0x3F0ED8u) {
        ctx->pc = 0x3F0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0ED4u;
        // 0x3f0ed8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0EDCu;
        goto label_3f0edc;
    }
    ctx->pc = 0x3F0ED4u;
    SET_GPR_U32(ctx, 31, 0x3F0EDCu);
    ctx->pc = 0x3F0ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0ED4u;
    // 0x3f0ed8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3F0ED4u, 0x3F0EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0EDCu;
label_3f0edc:
    // 0x3f0edc: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3f0edcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f0ee0:
    // 0x3f0ee0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3f0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3f0ee4:
    // 0x3f0ee4: 0xae220124  sw          $v0, 0x124($s1)
    ctx->pc = 0x3f0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 2));
label_3f0ee8:
    // 0x3f0ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0eec:
    // 0x3f0eec: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3f0eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3f0ef0:
    // 0x3f0ef0: 0xc0e858c  jal         func_3A1630
label_3f0ef4:
    if (ctx->pc == 0x3F0EF4u) {
        ctx->pc = 0x3F0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0EF0u;
        // 0x3f0ef4: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0EF8u;
        goto label_3f0ef8;
    }
    ctx->pc = 0x3F0EF0u;
    SET_GPR_U32(ctx, 31, 0x3F0EF8u);
    ctx->pc = 0x3F0EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0EF0u;
    // 0x3f0ef4: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F0EF0u, 0x3F0EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0EF8u;
label_3f0ef8:
    // 0x3f0ef8: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3f0ef8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f0efc:
    // 0x3f0efc: 0x24020201  addiu       $v0, $zero, 0x201
    ctx->pc = 0x3f0efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
label_3f0f00:
    // 0x3f0f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f0f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f0f04:
    // 0x3f0f04: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3f0f04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3f0f08:
    // 0x3f0f08: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x3f0f08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_3f0f0c:
    // 0x3f0f0c: 0xc0e9132  jal         func_3A44C8
label_3f0f10:
    if (ctx->pc == 0x3F0F10u) {
        ctx->pc = 0x3F0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0F0Cu;
        // 0x3f0f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0F14u;
        goto label_3f0f14;
    }
    ctx->pc = 0x3F0F0Cu;
    SET_GPR_U32(ctx, 31, 0x3F0F14u);
    ctx->pc = 0x3F0F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F0F0Cu;
    // 0x3f0f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3F0F0Cu, 0x3F0F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F0F14u;
label_3f0f14:
    // 0x3f0f14: 0x3c01c40a  lui         $at, 0xC40A
    ctx->pc = 0x3f0f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50186 << 16));
label_3f0f18:
    // 0x3f0f18: 0x3421fe14  ori         $at, $at, 0xFE14
    ctx->pc = 0x3f0f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65044);
label_3f0f1c:
    // 0x3f0f1c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0f20:
    // 0x3f0f20: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3f0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3f0f24:
    // 0x3f0f24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3f0f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3f0f28:
    // 0x3f0f28: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3f0f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f0f2c:
    // 0x3f0f2c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3f0f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_3f0f30:
    // 0x3f0f30: 0x3c01c373  lui         $at, 0xC373
    ctx->pc = 0x3f0f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50035 << 16));
label_3f0f34:
    // 0x3f0f34: 0x3421a666  ori         $at, $at, 0xA666
    ctx->pc = 0x3f0f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42598);
label_3f0f38:
    // 0x3f0f38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0f3c:
    // 0x3f0f3c: 0x34a5ff01  ori         $a1, $a1, 0xFF01
    ctx->pc = 0x3f0f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65281);
label_3f0f40:
    // 0x3f0f40: 0x3c01bdf5  lui         $at, 0xBDF5
    ctx->pc = 0x3f0f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48629 << 16));
label_3f0f44:
    // 0x3f0f44: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x3f0f44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
label_3f0f48:
    // 0x3f0f48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0f4c:
    // 0x3f0f4c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3f0f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_3f0f50:
    // 0x3f0f50: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x3f0f50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3f0f54:
    // 0x3f0f54: 0x34c6ff00  ori         $a2, $a2, 0xFF00
    ctx->pc = 0x3f0f54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65280);
label_3f0f58:
    // 0x3f0f58: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3f0f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0f5c:
    // 0x3f0f5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3f0f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f0f60:
    // 0x3f0f60: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3f0f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0f64:
    // 0x3f0f64: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x3f0f64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0f68:
    // 0x3f0f68: 0x3c01c40b  lui         $at, 0xC40B
    ctx->pc = 0x3f0f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50187 << 16));
label_3f0f6c:
    // 0x3f0f6c: 0x34213666  ori         $at, $at, 0x3666
    ctx->pc = 0x3f0f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13926);
label_3f0f70:
    // 0x3f0f70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3f0f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f0f74:
    // 0x3f0f74: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x3f0f74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0f78:
    // 0x3f0f78: 0x3c01c379  lui         $at, 0xC379
    ctx->pc = 0x3f0f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50041 << 16));
label_3f0f7c:
    // 0x3f0f7c: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x3f0f7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
label_3f0f80:
    // 0x3f0f80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3f0f80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f0f84:
    // 0x3f0f84: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x3f0f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_3f0f88:
    // 0x3f0f88: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3f0f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3f0f8c:
    // 0x3f0f8c: 0x3c01be05  lui         $at, 0xBE05
    ctx->pc = 0x3f0f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48645 << 16));
label_3f0f90:
    // 0x3f0f90: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x3f0f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
label_3f0f94:
    // 0x3f0f94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3f0f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f0f98:
    // 0x3f0f98: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x3f0f98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3f0f9c:
    // 0x3f0f9c: 0xe463000c  swc1        $f3, 0xC($v1)
    ctx->pc = 0x3f0f9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3f0fa0:
    // 0x3f0fa0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3f0fa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3f0fa4:
    // 0x3f0fa4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3f0fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3f0fa8:
    // 0x3f0fa8: 0xae2500c8  sw          $a1, 0xC8($s1)
    ctx->pc = 0x3f0fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 5));
label_3f0fac:
    // 0x3f0fac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3f0facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f0fb0:
    // 0x3f0fb0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3f0fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f0fb4:
    // 0x3f0fb4: 0xae2600cc  sw          $a2, 0xCC($s1)
    ctx->pc = 0x3f0fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 6));
label_3f0fb8:
    // 0x3f0fb8: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x3f0fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_3f0fbc:
    // 0x3f0fbc: 0x7e240010  sq          $a0, 0x10($s1)
    ctx->pc = 0x3f0fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 4));
label_3f0fc0:
    // 0x3f0fc0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3f0fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3f0fc4:
    // 0x3f0fc4: 0xae470004  sw          $a3, 0x4($s2)
    ctx->pc = 0x3f0fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 7));
label_3f0fc8:
    // 0x3f0fc8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3f0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3f0fcc:
    // 0x3f0fcc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3f0fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f0fd0:
    // 0x3f0fd0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3f0fd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f0fd4:
    // 0x3f0fd4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f0fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f0fd8:
    // 0x3f0fd8: 0x3e00008  jr          $ra
label_3f0fdc:
    if (ctx->pc == 0x3F0FDCu) {
        ctx->pc = 0x3F0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FD8u;
        // 0x3f0fdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F0FE0u;
        goto label_fallthrough_0x3f0fd8;
    }
    ctx->pc = 0x3F0FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F0FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F0FD8u;
        // 0x3f0fdc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F0FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f0fd8:
    ctx->pc = 0x3F0FE0u;
}
