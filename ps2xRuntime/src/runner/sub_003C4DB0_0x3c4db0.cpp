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

// Function: sub_003C4DB0
// Address: 0x3c4db0 - 0x3c4fb0
void sub_003C4DB0_0x3c4db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4DB0_0x3c4db0");
#endif

    switch (ctx->pc) {
        case 0x3c4db0u: goto label_3c4db0;
        case 0x3c4db4u: goto label_3c4db4;
        case 0x3c4db8u: goto label_3c4db8;
        case 0x3c4dbcu: goto label_3c4dbc;
        case 0x3c4dc0u: goto label_3c4dc0;
        case 0x3c4dc4u: goto label_3c4dc4;
        case 0x3c4dc8u: goto label_3c4dc8;
        case 0x3c4dccu: goto label_3c4dcc;
        case 0x3c4dd0u: goto label_3c4dd0;
        case 0x3c4dd4u: goto label_3c4dd4;
        case 0x3c4dd8u: goto label_3c4dd8;
        case 0x3c4ddcu: goto label_3c4ddc;
        case 0x3c4de0u: goto label_3c4de0;
        case 0x3c4de4u: goto label_3c4de4;
        case 0x3c4de8u: goto label_3c4de8;
        case 0x3c4decu: goto label_3c4dec;
        case 0x3c4df0u: goto label_3c4df0;
        case 0x3c4df4u: goto label_3c4df4;
        case 0x3c4df8u: goto label_3c4df8;
        case 0x3c4dfcu: goto label_3c4dfc;
        case 0x3c4e00u: goto label_3c4e00;
        case 0x3c4e04u: goto label_3c4e04;
        case 0x3c4e08u: goto label_3c4e08;
        case 0x3c4e0cu: goto label_3c4e0c;
        case 0x3c4e10u: goto label_3c4e10;
        case 0x3c4e14u: goto label_3c4e14;
        case 0x3c4e18u: goto label_3c4e18;
        case 0x3c4e1cu: goto label_3c4e1c;
        case 0x3c4e20u: goto label_3c4e20;
        case 0x3c4e24u: goto label_3c4e24;
        case 0x3c4e28u: goto label_3c4e28;
        case 0x3c4e2cu: goto label_3c4e2c;
        case 0x3c4e30u: goto label_3c4e30;
        case 0x3c4e34u: goto label_3c4e34;
        case 0x3c4e38u: goto label_3c4e38;
        case 0x3c4e3cu: goto label_3c4e3c;
        case 0x3c4e40u: goto label_3c4e40;
        case 0x3c4e44u: goto label_3c4e44;
        case 0x3c4e48u: goto label_3c4e48;
        case 0x3c4e4cu: goto label_3c4e4c;
        case 0x3c4e50u: goto label_3c4e50;
        case 0x3c4e54u: goto label_3c4e54;
        case 0x3c4e58u: goto label_3c4e58;
        case 0x3c4e5cu: goto label_3c4e5c;
        case 0x3c4e60u: goto label_3c4e60;
        case 0x3c4e64u: goto label_3c4e64;
        case 0x3c4e68u: goto label_3c4e68;
        case 0x3c4e6cu: goto label_3c4e6c;
        case 0x3c4e70u: goto label_3c4e70;
        case 0x3c4e74u: goto label_3c4e74;
        case 0x3c4e78u: goto label_3c4e78;
        case 0x3c4e7cu: goto label_3c4e7c;
        case 0x3c4e80u: goto label_3c4e80;
        case 0x3c4e84u: goto label_3c4e84;
        case 0x3c4e88u: goto label_3c4e88;
        case 0x3c4e8cu: goto label_3c4e8c;
        case 0x3c4e90u: goto label_3c4e90;
        case 0x3c4e94u: goto label_3c4e94;
        case 0x3c4e98u: goto label_3c4e98;
        case 0x3c4e9cu: goto label_3c4e9c;
        case 0x3c4ea0u: goto label_3c4ea0;
        case 0x3c4ea4u: goto label_3c4ea4;
        case 0x3c4ea8u: goto label_3c4ea8;
        case 0x3c4eacu: goto label_3c4eac;
        case 0x3c4eb0u: goto label_3c4eb0;
        case 0x3c4eb4u: goto label_3c4eb4;
        case 0x3c4eb8u: goto label_3c4eb8;
        case 0x3c4ebcu: goto label_3c4ebc;
        case 0x3c4ec0u: goto label_3c4ec0;
        case 0x3c4ec4u: goto label_3c4ec4;
        case 0x3c4ec8u: goto label_3c4ec8;
        case 0x3c4eccu: goto label_3c4ecc;
        case 0x3c4ed0u: goto label_3c4ed0;
        case 0x3c4ed4u: goto label_3c4ed4;
        case 0x3c4ed8u: goto label_3c4ed8;
        case 0x3c4edcu: goto label_3c4edc;
        case 0x3c4ee0u: goto label_3c4ee0;
        case 0x3c4ee4u: goto label_3c4ee4;
        case 0x3c4ee8u: goto label_3c4ee8;
        case 0x3c4eecu: goto label_3c4eec;
        case 0x3c4ef0u: goto label_3c4ef0;
        case 0x3c4ef4u: goto label_3c4ef4;
        case 0x3c4ef8u: goto label_3c4ef8;
        case 0x3c4efcu: goto label_3c4efc;
        case 0x3c4f00u: goto label_3c4f00;
        case 0x3c4f04u: goto label_3c4f04;
        case 0x3c4f08u: goto label_3c4f08;
        case 0x3c4f0cu: goto label_3c4f0c;
        case 0x3c4f10u: goto label_3c4f10;
        case 0x3c4f14u: goto label_3c4f14;
        case 0x3c4f18u: goto label_3c4f18;
        case 0x3c4f1cu: goto label_3c4f1c;
        case 0x3c4f20u: goto label_3c4f20;
        case 0x3c4f24u: goto label_3c4f24;
        case 0x3c4f28u: goto label_3c4f28;
        case 0x3c4f2cu: goto label_3c4f2c;
        case 0x3c4f30u: goto label_3c4f30;
        case 0x3c4f34u: goto label_3c4f34;
        case 0x3c4f38u: goto label_3c4f38;
        case 0x3c4f3cu: goto label_3c4f3c;
        case 0x3c4f40u: goto label_3c4f40;
        case 0x3c4f44u: goto label_3c4f44;
        case 0x3c4f48u: goto label_3c4f48;
        case 0x3c4f4cu: goto label_3c4f4c;
        case 0x3c4f50u: goto label_3c4f50;
        case 0x3c4f54u: goto label_3c4f54;
        case 0x3c4f58u: goto label_3c4f58;
        case 0x3c4f5cu: goto label_3c4f5c;
        case 0x3c4f60u: goto label_3c4f60;
        case 0x3c4f64u: goto label_3c4f64;
        case 0x3c4f68u: goto label_3c4f68;
        case 0x3c4f6cu: goto label_3c4f6c;
        case 0x3c4f70u: goto label_3c4f70;
        case 0x3c4f74u: goto label_3c4f74;
        case 0x3c4f78u: goto label_3c4f78;
        case 0x3c4f7cu: goto label_3c4f7c;
        case 0x3c4f80u: goto label_3c4f80;
        case 0x3c4f84u: goto label_3c4f84;
        case 0x3c4f88u: goto label_3c4f88;
        case 0x3c4f8cu: goto label_3c4f8c;
        case 0x3c4f90u: goto label_3c4f90;
        case 0x3c4f94u: goto label_3c4f94;
        case 0x3c4f98u: goto label_3c4f98;
        case 0x3c4f9cu: goto label_3c4f9c;
        case 0x3c4fa0u: goto label_3c4fa0;
        case 0x3c4fa4u: goto label_3c4fa4;
        case 0x3c4fa8u: goto label_3c4fa8;
        case 0x3c4facu: goto label_3c4fac;
        default: break;
    }

    ctx->pc = 0x3c4db0u;

label_3c4db0:
    // 0x3c4db0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3c4db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3c4db4:
    // 0x3c4db4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x3c4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_3c4db8:
    // 0x3c4db8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x3c4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_3c4dbc:
    // 0x3c4dbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c4dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dc0:
    // 0x3c4dc0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x3c4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_3c4dc4:
    // 0x3c4dc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c4dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c4dc8:
    // 0x3c4dc8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x3c4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_3c4dcc:
    // 0x3c4dcc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x3c4dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_3c4dd0:
    // 0x3c4dd0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3c4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3c4dd4:
    // 0x3c4dd4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3c4dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3c4dd8:
    // 0x3c4dd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3c4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3c4ddc:
    // 0x3c4ddc: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x3c4ddcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3c4de0:
    // 0x3c4de0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x3c4de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3c4de4:
    // 0x3c4de4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c4de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c4de8:
    // 0x3c4de8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3c4de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3c4dec:
    // 0x3c4dec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c4df0:
    // 0x3c4df0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c4df0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c4df4:
    // 0x3c4df4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c4df8:
    // 0x3c4df8: 0x40f809  jalr        $v0
label_3c4dfc:
    if (ctx->pc == 0x3C4DFCu) {
        ctx->pc = 0x3C4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DF8u;
        // 0x3c4dfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4E00u;
        goto label_3c4e00;
    }
    ctx->pc = 0x3C4DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C4E00u);
        ctx->pc = 0x3C4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4DF8u;
        // 0x3c4dfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4DF8u, 0x3C4E00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4E00u;
label_3c4e00:
    // 0x3c4e00: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c4e00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e04:
    // 0x3c4e04: 0xc0ea13a  jal         func_3A84E8
label_3c4e08:
    if (ctx->pc == 0x3C4E08u) {
        ctx->pc = 0x3C4E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E04u;
        // 0x3c4e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4E0Cu;
        goto label_3c4e0c;
    }
    ctx->pc = 0x3C4E04u;
    SET_GPR_U32(ctx, 31, 0x3C4E0Cu);
    ctx->pc = 0x3C4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E04u;
    // 0x3c4e08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3C4E04u, 0x3C4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E0Cu;
label_3c4e0c:
    // 0x3c4e0c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3c4e0cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3c4e10:
    // 0x3c4e10: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3c4e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4e14:
    // 0x3c4e14: 0xc0ea12a  jal         func_3A84A8
label_3c4e18:
    if (ctx->pc == 0x3C4E18u) {
        ctx->pc = 0x3C4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E14u;
        // 0x3c4e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4E1Cu;
        goto label_3c4e1c;
    }
    ctx->pc = 0x3C4E14u;
    SET_GPR_U32(ctx, 31, 0x3C4E1Cu);
    ctx->pc = 0x3C4E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E14u;
    // 0x3c4e18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3C4E14u, 0x3C4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E1Cu;
label_3c4e1c:
    // 0x3c4e1c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3c4e1cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c4e20:
    // 0x3c4e20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3c4e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3c4e24:
    // 0x3c4e24: 0x3442002a  ori         $v0, $v0, 0x2A
    ctx->pc = 0x3c4e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
label_3c4e28:
    // 0x3c4e28: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3c4e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3c4e2c:
    // 0x3c4e2c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3c4e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3c4e30:
    // 0x3c4e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c4e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e34:
    // 0x3c4e34: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3c4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3c4e38:
    // 0x3c4e38: 0xc0e858c  jal         func_3A1630
label_3c4e3c:
    if (ctx->pc == 0x3C4E3Cu) {
        ctx->pc = 0x3C4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E38u;
        // 0x3c4e3c: 0x8cc52ee0  lw          $a1, 0x2EE0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12000)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4E40u;
        goto label_3c4e40;
    }
    ctx->pc = 0x3C4E38u;
    SET_GPR_U32(ctx, 31, 0x3C4E40u);
    ctx->pc = 0x3C4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E38u;
    // 0x3c4e3c: 0x8cc52ee0  lw          $a1, 0x2EE0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12000)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C4E38u, 0x3C4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E40u;
label_3c4e40:
    // 0x3c4e40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3c4e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3c4e44:
    // 0x3c4e44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c4e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c4e48:
    // 0x3c4e48: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x3c4e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3c4e4c:
    // 0x3c4e4c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x3c4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_3c4e50:
    // 0x3c4e50: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3c4e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_3c4e54:
    // 0x3c4e54: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x3c4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3c4e58:
    // 0x3c4e58: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3c4e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c4e5c:
    // 0x3c4e5c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3c4e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c4e60:
    // 0x3c4e60: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3c4e60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3c4e64:
    // 0x3c4e64: 0xe615000c  swc1        $f21, 0xC($s0)
    ctx->pc = 0x3c4e64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c4e68:
    // 0x3c4e68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e6c:
    // 0x3c4e6c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3c4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3c4e70:
    // 0x3c4e70: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c4e70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4e74:
    // 0x3c4e74: 0xc136b24  jal         func_4DAC90
label_3c4e78:
    if (ctx->pc == 0x3C4E78u) {
        ctx->pc = 0x3C4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E74u;
        // 0x3c4e78: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4E7Cu;
        goto label_3c4e7c;
    }
    ctx->pc = 0x3C4E74u;
    SET_GPR_U32(ctx, 31, 0x3C4E7Cu);
    ctx->pc = 0x3C4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E74u;
    // 0x3c4e78: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3C4E74u, 0x3C4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E7Cu;
label_3c4e7c:
    // 0x3c4e7c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c4e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4e80:
    // 0x3c4e80: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3c4e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c4e84:
    // 0x3c4e84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c4e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e88:
    // 0x3c4e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4e8c:
    // 0x3c4e8c: 0xc136afa  jal         func_4DABE8
label_3c4e90:
    if (ctx->pc == 0x3C4E90u) {
        ctx->pc = 0x3C4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4E8Cu;
        // 0x3c4e90: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4E94u;
        goto label_3c4e94;
    }
    ctx->pc = 0x3C4E8Cu;
    SET_GPR_U32(ctx, 31, 0x3C4E94u);
    ctx->pc = 0x3C4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4E8Cu;
    // 0x3c4e90: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3C4E8Cu, 0x3C4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4E94u;
label_3c4e94:
    // 0x3c4e94: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3c4e94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c4e98:
    // 0x3c4e98: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3c4e98u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_3c4e9c:
    // 0x3c4e9c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c4e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c4ea0:
    // 0x3c4ea0: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3c4ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3c4ea4:
    // 0x3c4ea4: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3c4ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3c4ea8:
    // 0x3c4ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4eac:
    // 0x3c4eac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c4eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c4eb0:
    // 0x3c4eb0: 0x24740078  addiu       $s4, $v1, 0x78
    ctx->pc = 0x3c4eb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
label_3c4eb4:
    // 0x3c4eb4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x3c4eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_3c4eb8:
    // 0x3c4eb8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c4eb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c4ebc:
    // 0x3c4ebc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3c4ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3c4ec0:
    // 0x3c4ec0: 0x84700078  lh          $s0, 0x78($v1)
    ctx->pc = 0x3c4ec0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3c4ec4:
    // 0x3c4ec4: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x3c4ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_3c4ec8:
    // 0x3c4ec8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3c4ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3c4ecc:
    // 0x3c4ecc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3c4eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3c4ed0:
    // 0x3c4ed0: 0xc0cd518  jal         func_335460
label_3c4ed4:
    if (ctx->pc == 0x3C4ED4u) {
        ctx->pc = 0x3C4ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4ED0u;
        // 0x3c4ed4: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4ED8u;
        goto label_3c4ed8;
    }
    ctx->pc = 0x3C4ED0u;
    SET_GPR_U32(ctx, 31, 0x3C4ED8u);
    ctx->pc = 0x3C4ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4ED0u;
    // 0x3c4ed4: 0x2308021  addu        $s0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3C4ED0u, 0x3C4ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4ED8u;
label_3c4ed8:
    // 0x3c4ed8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3c4ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3c4edc:
    // 0x3c4edc: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x3c4edcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c4ee0:
    // 0x3c4ee0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3c4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3c4ee4:
    // 0x3c4ee4: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x3c4ee4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c4ee8:
    // 0x3c4ee8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3c4ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3c4eec:
    // 0x3c4eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c4eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c4ef0:
    // 0x3c4ef0: 0xe6d5000c  swc1        $f21, 0xC($s6)
    ctx->pc = 0x3c4ef0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_3c4ef4:
    // 0x3c4ef4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c4ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4ef8:
    // 0x3c4ef8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c4efc:
    // 0x3c4efc: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3c4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3c4f00:
    // 0x3c4f00: 0x60f809  jalr        $v1
label_3c4f04:
    if (ctx->pc == 0x3C4F04u) {
        ctx->pc = 0x3C4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F00u;
        // 0x3c4f04: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4F08u;
        goto label_3c4f08;
    }
    ctx->pc = 0x3C4F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C4F08u);
        ctx->pc = 0x3C4F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F00u;
        // 0x3c4f04: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4F00u, 0x3C4F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4F08u;
label_3c4f08:
    // 0x3c4f08: 0x96620004  lhu         $v0, 0x4($s3)
    ctx->pc = 0x3c4f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_3c4f0c:
    // 0x3c4f0c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3c4f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_3c4f10:
    // 0x3c4f10: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3c4f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_3c4f14:
    // 0x3c4f14: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3c4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3c4f18:
    // 0x3c4f18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c4f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3c4f1c:
    // 0x3c4f1c: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x3c4f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
label_3c4f20:
    // 0x3c4f20: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x3c4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_3c4f24:
    // 0x3c4f24: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3c4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3c4f28:
    // 0x3c4f28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c4f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c4f2c:
    // 0x3c4f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c4f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c4f30:
    // 0x3c4f30: 0xc4602f00  lwc1        $f0, 0x2F00($v1)
    ctx->pc = 0x3c4f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c4f34:
    // 0x3c4f34: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c4f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3c4f38:
    // 0x3c4f38: 0xc0cd4ee  jal         func_3353B8
label_3c4f3c:
    if (ctx->pc == 0x3C4F3Cu) {
        ctx->pc = 0x3C4F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F38u;
        // 0x3c4f3c: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4F40u;
        goto label_3c4f40;
    }
    ctx->pc = 0x3C4F38u;
    SET_GPR_U32(ctx, 31, 0x3C4F40u);
    ctx->pc = 0x3C4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4F38u;
    // 0x3c4f3c: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C4F38u, 0x3C4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4F40u;
label_3c4f40:
    // 0x3c4f40: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3c4f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3c4f44:
    // 0x3c4f44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3c4f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c4f48:
    // 0x3c4f48: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3c4f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3c4f4c:
    // 0x3c4f4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c4f4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c4f50:
    // 0x3c4f50: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x3c4f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c4f54:
    // 0x3c4f54: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3c4f54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3c4f58:
    // 0x3c4f58: 0x84c40070  lh          $a0, 0x70($a2)
    ctx->pc = 0x3c4f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 112)));
label_3c4f5c:
    // 0x3c4f5c: 0xe6d5000c  swc1        $f21, 0xC($s6)
    ctx->pc = 0x3c4f5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
label_3c4f60:
    // 0x3c4f60: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x3c4f60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_3c4f64:
    // 0x3c4f64: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3c4f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3c4f68:
    // 0x3c4f68: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3c4f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3c4f6c:
    // 0x3c4f6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c4f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c4f70:
    // 0x3c4f70: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3c4f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3c4f74:
    // 0x3c4f74: 0x8cc30074  lw          $v1, 0x74($a2)
    ctx->pc = 0x3c4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_3c4f78:
    // 0x3c4f78: 0x60f809  jalr        $v1
label_3c4f7c:
    if (ctx->pc == 0x3C4F7Cu) {
        ctx->pc = 0x3C4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F78u;
        // 0x3c4f7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4F80u;
        goto label_3c4f80;
    }
    ctx->pc = 0x3C4F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C4F80u);
        ctx->pc = 0x3C4F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F78u;
        // 0x3c4f7c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4F78u, 0x3C4F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C4F80u;
label_3c4f80:
    // 0x3c4f80: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x3c4f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3c4f84:
    // 0x3c4f84: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x3c4f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3c4f88:
    // 0x3c4f88: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x3c4f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3c4f8c:
    // 0x3c4f8c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3c4f8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3c4f90:
    // 0x3c4f90: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3c4f90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c4f94:
    // 0x3c4f94: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3c4f94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c4f98:
    // 0x3c4f98: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3c4f98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c4f9c:
    // 0x3c4f9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3c4f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3c4fa0:
    // 0x3c4fa0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x3c4fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c4fa4:
    // 0x3c4fa4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3c4fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c4fa8:
    // 0x3c4fa8: 0x3e00008  jr          $ra
label_3c4fac:
    if (ctx->pc == 0x3C4FACu) {
        ctx->pc = 0x3C4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FA8u;
        // 0x3c4fac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C4FB0u;
        goto label_fallthrough_0x3c4fa8;
    }
    ctx->pc = 0x3C4FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FA8u;
        // 0x3c4fac: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c4fa8:
    ctx->pc = 0x3C4FB0u;
}
