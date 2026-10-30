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

// Function: sub_00134D78
// Address: 0x134d78 - 0x134f08
void sub_00134D78_0x134d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134D78_0x134d78");
#endif

    switch (ctx->pc) {
        case 0x134d78u: goto label_134d78;
        case 0x134d7cu: goto label_134d7c;
        case 0x134d80u: goto label_134d80;
        case 0x134d84u: goto label_134d84;
        case 0x134d88u: goto label_134d88;
        case 0x134d8cu: goto label_134d8c;
        case 0x134d90u: goto label_134d90;
        case 0x134d94u: goto label_134d94;
        case 0x134d98u: goto label_134d98;
        case 0x134d9cu: goto label_134d9c;
        case 0x134da0u: goto label_134da0;
        case 0x134da4u: goto label_134da4;
        case 0x134da8u: goto label_134da8;
        case 0x134dacu: goto label_134dac;
        case 0x134db0u: goto label_134db0;
        case 0x134db4u: goto label_134db4;
        case 0x134db8u: goto label_134db8;
        case 0x134dbcu: goto label_134dbc;
        case 0x134dc0u: goto label_134dc0;
        case 0x134dc4u: goto label_134dc4;
        case 0x134dc8u: goto label_134dc8;
        case 0x134dccu: goto label_134dcc;
        case 0x134dd0u: goto label_134dd0;
        case 0x134dd4u: goto label_134dd4;
        case 0x134dd8u: goto label_134dd8;
        case 0x134ddcu: goto label_134ddc;
        case 0x134de0u: goto label_134de0;
        case 0x134de4u: goto label_134de4;
        case 0x134de8u: goto label_134de8;
        case 0x134decu: goto label_134dec;
        case 0x134df0u: goto label_134df0;
        case 0x134df4u: goto label_134df4;
        case 0x134df8u: goto label_134df8;
        case 0x134dfcu: goto label_134dfc;
        case 0x134e00u: goto label_134e00;
        case 0x134e04u: goto label_134e04;
        case 0x134e08u: goto label_134e08;
        case 0x134e0cu: goto label_134e0c;
        case 0x134e10u: goto label_134e10;
        case 0x134e14u: goto label_134e14;
        case 0x134e18u: goto label_134e18;
        case 0x134e1cu: goto label_134e1c;
        case 0x134e20u: goto label_134e20;
        case 0x134e24u: goto label_134e24;
        case 0x134e28u: goto label_134e28;
        case 0x134e2cu: goto label_134e2c;
        case 0x134e30u: goto label_134e30;
        case 0x134e34u: goto label_134e34;
        case 0x134e38u: goto label_134e38;
        case 0x134e3cu: goto label_134e3c;
        case 0x134e40u: goto label_134e40;
        case 0x134e44u: goto label_134e44;
        case 0x134e48u: goto label_134e48;
        case 0x134e4cu: goto label_134e4c;
        case 0x134e50u: goto label_134e50;
        case 0x134e54u: goto label_134e54;
        case 0x134e58u: goto label_134e58;
        case 0x134e5cu: goto label_134e5c;
        case 0x134e60u: goto label_134e60;
        case 0x134e64u: goto label_134e64;
        case 0x134e68u: goto label_134e68;
        case 0x134e6cu: goto label_134e6c;
        case 0x134e70u: goto label_134e70;
        case 0x134e74u: goto label_134e74;
        case 0x134e78u: goto label_134e78;
        case 0x134e7cu: goto label_134e7c;
        case 0x134e80u: goto label_134e80;
        case 0x134e84u: goto label_134e84;
        case 0x134e88u: goto label_134e88;
        case 0x134e8cu: goto label_134e8c;
        case 0x134e90u: goto label_134e90;
        case 0x134e94u: goto label_134e94;
        case 0x134e98u: goto label_134e98;
        case 0x134e9cu: goto label_134e9c;
        case 0x134ea0u: goto label_134ea0;
        case 0x134ea4u: goto label_134ea4;
        case 0x134ea8u: goto label_134ea8;
        case 0x134eacu: goto label_134eac;
        case 0x134eb0u: goto label_134eb0;
        case 0x134eb4u: goto label_134eb4;
        case 0x134eb8u: goto label_134eb8;
        case 0x134ebcu: goto label_134ebc;
        case 0x134ec0u: goto label_134ec0;
        case 0x134ec4u: goto label_134ec4;
        case 0x134ec8u: goto label_134ec8;
        case 0x134eccu: goto label_134ecc;
        case 0x134ed0u: goto label_134ed0;
        case 0x134ed4u: goto label_134ed4;
        case 0x134ed8u: goto label_134ed8;
        case 0x134edcu: goto label_134edc;
        case 0x134ee0u: goto label_134ee0;
        case 0x134ee4u: goto label_134ee4;
        case 0x134ee8u: goto label_134ee8;
        case 0x134eecu: goto label_134eec;
        case 0x134ef0u: goto label_134ef0;
        case 0x134ef4u: goto label_134ef4;
        case 0x134ef8u: goto label_134ef8;
        case 0x134efcu: goto label_134efc;
        case 0x134f00u: goto label_134f00;
        case 0x134f04u: goto label_134f04;
        default: break;
    }

    ctx->pc = 0x134d78u;

label_134d78:
    // 0x134d78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x134d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_134d7c:
    // 0x134d7c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x134d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_134d80:
    // 0x134d80: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x134d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_134d84:
    // 0x134d84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_134d88:
    // 0x134d88: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x134d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_134d8c:
    // 0x134d8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x134d8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134d90:
    // 0x134d90: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x134d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_134d94:
    // 0x134d94: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x134d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_134d98:
    // 0x134d98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x134d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_134d9c:
    // 0x134d9c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x134d9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_134da0:
    // 0x134da0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x134da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_134da4:
    // 0x134da4: 0x40f809  jalr        $v0
label_134da8:
    if (ctx->pc == 0x134DA8u) {
        ctx->pc = 0x134DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DA4u;
        // 0x134da8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134DACu;
        goto label_134dac;
    }
    ctx->pc = 0x134DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x134DACu);
        ctx->pc = 0x134DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DA4u;
        // 0x134da8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134DA4u, 0x134DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134DACu;
label_134dac:
    // 0x134dac: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x134dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_134db0:
    // 0x134db0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_134db4:
    if (ctx->pc == 0x134DB4u) {
        ctx->pc = 0x134DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DB0u;
        // 0x134db4: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134DB8u;
        goto label_134db8;
    }
    ctx->pc = 0x134DB0u;
    {
        const bool branch_taken_0x134db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DB0u;
        // 0x134db4: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134db0) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134DB8u;
label_134db8:
    // 0x134db8: 0x26250090  addiu       $a1, $s1, 0x90
    ctx->pc = 0x134db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_134dbc:
    // 0x134dbc: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x134dbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_134dc0:
    // 0x134dc0: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x134dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_134dc4:
    // 0x134dc4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_134dc8:
    // 0x134dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x134dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_134dcc:
    // 0x134dcc: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x134dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_134dd0:
    // 0x134dd0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x134dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_134dd4:
    // 0x134dd4: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x134dd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_134dd8:
    // 0x134dd8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_134ddc:
    // 0x134ddc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x134ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_134de0:
    // 0x134de0: 0x10000011  b           . + 4 + (0x11 << 2)
label_134de4:
    if (ctx->pc == 0x134DE4u) {
        ctx->pc = 0x134DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DE0u;
        // 0x134de4: 0x78620010  lq          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134DE8u;
        goto label_134de8;
    }
    ctx->pc = 0x134DE0u;
    {
        const bool branch_taken_0x134de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DE0u;
        // 0x134de4: 0x78620010  lq          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134de0) {
            ctx->pc = 0x134E28u;
            goto label_134e28;
        }
    }
    ctx->pc = 0x134DE8u;
label_134de8:
    // 0x134de8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x134de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_134dec:
    // 0x134dec: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x134decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_134df0:
    // 0x134df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134df4:
    // 0x134df4: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x134df4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_134df8:
    // 0x134df8: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x134df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_134dfc:
    // 0x134dfc: 0x60f809  jalr        $v1
label_134e00:
    if (ctx->pc == 0x134E00u) {
        ctx->pc = 0x134E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DFCu;
        // 0x134e00: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134E04u;
        goto label_134e04;
    }
    ctx->pc = 0x134DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x134E04u);
        ctx->pc = 0x134E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DFCu;
        // 0x134e00: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134DFCu, 0x134E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134E04u;
label_134e04:
    // 0x134e04: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x134e04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_134e08:
    // 0x134e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134e0c:
    // 0x134e0c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x134e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_134e10:
    // 0x134e10: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x134e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_134e14:
    // 0x134e14: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x134e14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_134e18:
    // 0x134e18: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x134e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_134e1c:
    // 0x134e1c: 0xc0f809  jalr        $a2
label_134e20:
    if (ctx->pc == 0x134E20u) {
        ctx->pc = 0x134E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E1Cu;
        // 0x134e20: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134E24u;
        goto label_134e24;
    }
    ctx->pc = 0x134E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x134E24u);
        ctx->pc = 0x134E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E1Cu;
        // 0x134e20: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134E1Cu, 0x134E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134E24u;
label_134e24:
    // 0x134e24: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x134e24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_134e28:
    // 0x134e28: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x134e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_134e2c:
    // 0x134e2c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x134e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134e30:
    // 0x134e30: 0xc6410208  lwc1        $f1, 0x208($s2)
    ctx->pc = 0x134e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134e34:
    // 0x134e34: 0xc6420200  lwc1        $f2, 0x200($s2)
    ctx->pc = 0x134e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_134e38:
    // 0x134e38: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x134e38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_134e3c:
    // 0x134e3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x134e3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_134e40:
    // 0x134e40: 0x46141032  c.eq.s      $f2, $f20
    ctx->pc = 0x134e40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134e44:
    // 0x134e44: 0x0  nop
    ctx->pc = 0x134e44u;
    // NOP
label_134e48:
    // 0x134e48: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_134e4c:
    if (ctx->pc == 0x134E4Cu) {
        ctx->pc = 0x134E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E48u;
        // 0x134e4c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134E50u;
        goto label_134e50;
    }
    ctx->pc = 0x134E48u;
    {
        const bool branch_taken_0x134e48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x134E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E48u;
        // 0x134e4c: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e48) {
            ctx->pc = 0x134E88u;
            goto label_134e88;
        }
    }
    ctx->pc = 0x134E50u;
label_134e50:
    // 0x134e50: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x134e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_134e54:
    // 0x134e54: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x134e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_134e58:
    // 0x134e58: 0xc0cd8c2  jal         func_336308
label_134e5c:
    if (ctx->pc == 0x134E5Cu) {
        ctx->pc = 0x134E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E58u;
        // 0x134e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134E60u;
        goto label_134e60;
    }
    ctx->pc = 0x134E58u;
    SET_GPR_U32(ctx, 31, 0x134E60u);
    ctx->pc = 0x134E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E58u;
    // 0x134e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x134E58u, 0x134E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E60u;
label_134e60:
    // 0x134e60: 0xc64c0200  lwc1        $f12, 0x200($s2)
    ctx->pc = 0x134e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_134e64:
    // 0x134e64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134e68:
    // 0x134e68: 0xc136b24  jal         func_4DAC90
label_134e6c:
    if (ctx->pc == 0x134E6Cu) {
        ctx->pc = 0x134E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E68u;
        // 0x134e6c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134E70u;
        goto label_134e70;
    }
    ctx->pc = 0x134E68u;
    SET_GPR_U32(ctx, 31, 0x134E70u);
    ctx->pc = 0x134E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E68u;
    // 0x134e6c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x134E68u, 0x134E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E70u;
label_134e70:
    // 0x134e70: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x134e70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_134e74:
    // 0x134e74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x134e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_134e78:
    // 0x134e78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_134e7c:
    // 0x134e7c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x134e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_134e80:
    // 0x134e80: 0xc136b18  jal         func_4DAC60
label_134e84:
    if (ctx->pc == 0x134E84u) {
        ctx->pc = 0x134E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E80u;
        // 0x134e84: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134E88u;
        goto label_134e88;
    }
    ctx->pc = 0x134E80u;
    SET_GPR_U32(ctx, 31, 0x134E88u);
    ctx->pc = 0x134E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E80u;
    // 0x134e84: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x134E80u, 0x134E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E88u;
label_134e88:
    // 0x134e88: 0xc6400204  lwc1        $f0, 0x204($s2)
    ctx->pc = 0x134e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_134e8c:
    // 0x134e8c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x134e8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_134e90:
    // 0x134e90: 0x0  nop
    ctx->pc = 0x134e90u;
    // NOP
label_134e94:
    // 0x134e94: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
label_134e98:
    if (ctx->pc == 0x134E98u) {
        ctx->pc = 0x134E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E94u;
        // 0x134e98: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134E9Cu;
        goto label_134e9c;
    }
    ctx->pc = 0x134E94u;
    {
        const bool branch_taken_0x134e94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x134e94) {
            ctx->pc = 0x134E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134E94u;
            // 0x134e98: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134ED8u;
            goto label_134ed8;
        }
    }
    ctx->pc = 0x134E9Cu;
label_134e9c:
    // 0x134e9c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x134e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_134ea0:
    // 0x134ea0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x134ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_134ea4:
    // 0x134ea4: 0xc0cd8ec  jal         func_3363B0
label_134ea8:
    if (ctx->pc == 0x134EA8u) {
        ctx->pc = 0x134EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EA4u;
        // 0x134ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134EACu;
        goto label_134eac;
    }
    ctx->pc = 0x134EA4u;
    SET_GPR_U32(ctx, 31, 0x134EACu);
    ctx->pc = 0x134EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134EA4u;
    // 0x134ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x134EA4u, 0x134EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134EACu;
label_134eac:
    // 0x134eac: 0xc64c0204  lwc1        $f12, 0x204($s2)
    ctx->pc = 0x134eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_134eb0:
    // 0x134eb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134eb4:
    // 0x134eb4: 0xc136b24  jal         func_4DAC90
label_134eb8:
    if (ctx->pc == 0x134EB8u) {
        ctx->pc = 0x134EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EB4u;
        // 0x134eb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134EBCu;
        goto label_134ebc;
    }
    ctx->pc = 0x134EB4u;
    SET_GPR_U32(ctx, 31, 0x134EBCu);
    ctx->pc = 0x134EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134EB4u;
    // 0x134eb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x134EB4u, 0x134EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134EBCu;
label_134ebc:
    // 0x134ebc: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x134ebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_134ec0:
    // 0x134ec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x134ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_134ec4:
    // 0x134ec4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_134ec8:
    // 0x134ec8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x134ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_134ecc:
    // 0x134ecc: 0xc136b18  jal         func_4DAC60
label_134ed0:
    if (ctx->pc == 0x134ED0u) {
        ctx->pc = 0x134ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134ECCu;
        // 0x134ed0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134ED4u;
        goto label_134ed4;
    }
    ctx->pc = 0x134ECCu;
    SET_GPR_U32(ctx, 31, 0x134ED4u);
    ctx->pc = 0x134ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134ECCu;
    // 0x134ed0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x134ECCu, 0x134ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ED4u;
label_134ed4:
    // 0x134ed4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_134ed8:
    // 0x134ed8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x134ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_134edc:
    // 0x134edc: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x134edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_134ee0:
    // 0x134ee0: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x134ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_134ee4:
    // 0x134ee4: 0x60f809  jalr        $v1
label_134ee8:
    if (ctx->pc == 0x134EE8u) {
        ctx->pc = 0x134EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EE4u;
        // 0x134ee8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134EECu;
        goto label_134eec;
    }
    ctx->pc = 0x134EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x134EECu);
        ctx->pc = 0x134EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EE4u;
        // 0x134ee8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134EE4u, 0x134EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134EECu;
label_134eec:
    // 0x134eec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x134eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_134ef0:
    // 0x134ef0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x134ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_134ef4:
    // 0x134ef4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x134ef4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_134ef8:
    // 0x134ef8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x134ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_134efc:
    // 0x134efc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x134efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_134f00:
    // 0x134f00: 0x3e00008  jr          $ra
label_134f04:
    if (ctx->pc == 0x134F04u) {
        ctx->pc = 0x134F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F00u;
        // 0x134f04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F08u;
        goto label_fallthrough_0x134f00;
    }
    ctx->pc = 0x134F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F00u;
        // 0x134f04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x134f00:
    ctx->pc = 0x134F08u;
}
