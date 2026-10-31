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

// Function: sub_0011DAA8
// Address: 0x11daa8 - 0x11dcf0
void sub_0011DAA8_0x11daa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DAA8_0x11daa8");
#endif

    switch (ctx->pc) {
        case 0x11dae4u: goto label_11dae4;
        case 0x11daf8u: goto label_11daf8;
        case 0x11db6cu: goto label_11db6c;
        case 0x11db7cu: goto label_11db7c;
        case 0x11db88u: goto label_11db88;
        case 0x11dba0u: goto label_11dba0;
        case 0x11dba8u: goto label_11dba8;
        case 0x11dbbcu: goto label_11dbbc;
        case 0x11dbdcu: goto label_11dbdc;
        case 0x11dbfcu: goto label_11dbfc;
        case 0x11dc08u: goto label_11dc08;
        case 0x11dc14u: goto label_11dc14;
        case 0x11dc20u: goto label_11dc20;
        case 0x11dc34u: goto label_11dc34;
        case 0x11dc48u: goto label_11dc48;
        case 0x11dc50u: goto label_11dc50;
        case 0x11dc68u: goto label_11dc68;
        case 0x11dc74u: goto label_11dc74;
        case 0x11dc80u: goto label_11dc80;
        case 0x11dc90u: goto label_11dc90;
        case 0x11dcb0u: goto label_11dcb0;
        case 0x11dcc0u: goto label_11dcc0;
        default: break;
    }

    ctx->pc = 0x11daa8u;

    // 0x11daa8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11daa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11daac: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x11daacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x11dab0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x11dab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x11dab4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11dab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dab8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11dabc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x11dabcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dac0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x11dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x11dac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11dac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dac8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x11dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x11dacc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x11daccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x11dad0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x11dad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x11dad4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11dad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11dad8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11dad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11dadc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x11DADCu;
    SET_GPR_U32(ctx, 31, 0x11DAE4u);
    ctx->pc = 0x11DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DADCu;
    // 0x11dae0: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x11DADCu, 0x11DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAE4u;
label_11dae4:
    // 0x11dae4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11dae4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dae8: 0x52a00076  beql        $s5, $zero, . + 4 + (0x76 << 2)
    ctx->pc = 0x11DAE8u;
    {
        const bool branch_taken_0x11dae8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dae8) {
            ctx->pc = 0x11DAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DAE8u;
            // 0x11daec: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCC4u;
            goto label_11dcc4;
        }
    }
    ctx->pc = 0x11DAF0u;
    // 0x11daf0: 0xc048038  jal         func_1200E0
    ctx->pc = 0x11DAF0u;
    SET_GPR_U32(ctx, 31, 0x11DAF8u);
    ctx->pc = 0x11DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DAF0u;
    // 0x11daf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11DAF0u, 0x11DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DAF8u;
label_11daf8:
    // 0x11daf8: 0x50400072  beql        $v0, $zero, . + 4 + (0x72 << 2)
    ctx->pc = 0x11DAF8u;
    {
        const bool branch_taken_0x11daf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11daf8) {
            ctx->pc = 0x11DAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DAF8u;
            // 0x11dafc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DCC4u;
            goto label_11dcc4;
        }
    }
    ctx->pc = 0x11DB00u;
    // 0x11db00: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11DB00u;
    {
        const bool branch_taken_0x11db00 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB00u;
        // 0x11db04: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db00) {
            ctx->pc = 0x11DB1Cu;
            goto label_11db1c;
        }
    }
    ctx->pc = 0x11DB08u;
    // 0x11db08: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x11db08u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11db0c: 0x0  nop
    ctx->pc = 0x11db0cu;
    // NOP
    // 0x11db10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11db10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11db14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11DB14u;
    {
        const bool branch_taken_0x11db14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB14u;
        // 0x11db18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db14) {
            ctx->pc = 0x11DB40u;
            goto label_11db40;
        }
    }
    ctx->pc = 0x11DB1Cu;
label_11db1c:
    // 0x11db1c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x11db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x11db20: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x11db20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x11db24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x11db24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11db28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11db28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11db2c: 0x0  nop
    ctx->pc = 0x11db2cu;
    // NOP
    // 0x11db30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11db30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11db34: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x11db34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x11db38: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x11db38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x11db3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11db40:
    // 0x11db40: 0x2464b1e8  addiu       $a0, $v1, -0x4E18
    ctx->pc = 0x11db40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947304));
    // 0x11db44: 0xac62b1e8  sw          $v0, -0x4E18($v1)
    ctx->pc = 0x11db44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294947304), GPR_U32(ctx, 2));
    // 0x11db48: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x11db48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x11db4c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x11db4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x11db50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11db50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11db54: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x11db54u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x11db58: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11db58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x11db5c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x11db5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x11db60: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x11db60u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x11db64: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x11DB64u;
    SET_GPR_U32(ctx, 31, 0x11DB6Cu);
    ctx->pc = 0x11DB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB64u;
    // 0x11db68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x11DB64u, 0x11DB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB6Cu;
label_11db6c:
    // 0x11db6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11db6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11db70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db74: 0xc048038  jal         func_1200E0
    ctx->pc = 0x11DB74u;
    SET_GPR_U32(ctx, 31, 0x11DB7Cu);
    ctx->pc = 0x11DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB74u;
    // 0x11db78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11DB74u, 0x11DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB7Cu;
label_11db7c:
    // 0x11db7c: 0xac5001e4  sw          $s0, 0x1E4($v0)
    ctx->pc = 0x11db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 16));
    // 0x11db80: 0xc048038  jal         func_1200E0
    ctx->pc = 0x11DB80u;
    SET_GPR_U32(ctx, 31, 0x11DB88u);
    ctx->pc = 0x11DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB80u;
    // 0x11db84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11DB80u, 0x11DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB88u;
label_11db88:
    // 0x11db88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11db88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11db8c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x11db8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11db90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11db90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11db94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db98: 0xc047b82  jal         func_11EE08
    ctx->pc = 0x11DB98u;
    SET_GPR_U32(ctx, 31, 0x11DBA0u);
    ctx->pc = 0x11DB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB98u;
    // 0x11db9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE08u, 0x11DB98u, 0x11DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBA0u;
label_11dba0:
    // 0x11dba0: 0xc048038  jal         func_1200E0
    ctx->pc = 0x11DBA0u;
    SET_GPR_U32(ctx, 31, 0x11DBA8u);
    ctx->pc = 0x11DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBA0u;
    // 0x11dba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11DBA0u, 0x11DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBA8u;
label_11dba8:
    // 0x11dba8: 0x8e45deb8  lw          $a1, -0x2148($s2)
    ctx->pc = 0x11dba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958776)));
    // 0x11dbac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11dbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbb0: 0x8ca301c4  lw          $v1, 0x1C4($a1)
    ctx->pc = 0x11dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 452)));
    // 0x11dbb4: 0xc048038  jal         func_1200E0
    ctx->pc = 0x11DBB4u;
    SET_GPR_U32(ctx, 31, 0x11DBBCu);
    ctx->pc = 0x11DBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBB4u;
    // 0x11dbb8: 0xac4301f8  sw          $v1, 0x1F8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 504), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11DBB4u, 0x11DBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBBCu;
label_11dbbc:
    // 0x11dbbc: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x11dbbcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x11dbc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x11dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x11dbc4: 0x26310840  addiu       $s1, $s1, 0x840
    ctx->pc = 0x11dbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
    // 0x11dbc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11dbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbcc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x11dbd0: 0x8c6577a0  lw          $a1, 0x77A0($v1)
    ctx->pc = 0x11dbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x617FE0u));
    // 0x11dbd4: 0xc048038  jal         func_1200E0
    ctx->pc = 0x11DBD4u;
    SET_GPR_U32(ctx, 31, 0x11DBDCu);
    ctx->pc = 0x11DBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBD4u;
    // 0x11dbd8: 0xa44501fc  sh          $a1, 0x1FC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 508), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11DBD4u, 0x11DBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBDCu;
label_11dbdc:
    // 0x11dbdc: 0x8e65aa84  lw          $a1, -0x557C($s3)
    ctx->pc = 0x11dbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
    // 0x11dbe0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x11dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x11dbe4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x11dbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x11dbe8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11dbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x11dbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11dbf0: 0xc4a07a5c  lwc1        $f0, 0x7A5C($a1)
    ctx->pc = 0x11dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 31324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11dbf4: 0xc048038  jal         func_1200E0
    ctx->pc = 0x11DBF4u;
    SET_GPR_U32(ctx, 31, 0x11DBFCu);
    ctx->pc = 0x11DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBF4u;
    // 0x11dbf8: 0xe44001f0  swc1        $f0, 0x1F0($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11DBF4u, 0x11DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBFCu;
label_11dbfc:
    // 0x11dbfc: 0x8e64aa84  lw          $a0, -0x557C($s3)
    ctx->pc = 0x11dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945412)));
    // 0x11dc00: 0xc04415c  jal         func_110570
    ctx->pc = 0x11DC00u;
    SET_GPR_U32(ctx, 31, 0x11DC08u);
    ctx->pc = 0x11DC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC00u;
    // 0x11dc04: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110570u, 0x11DC00u, 0x11DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC08u;
label_11dc08:
    // 0x11dc08: 0xe60001f4  swc1        $f0, 0x1F4($s0)
    ctx->pc = 0x11dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 500), bits); }
    // 0x11dc0c: 0xc048038  jal         func_1200E0
    ctx->pc = 0x11DC0Cu;
    SET_GPR_U32(ctx, 31, 0x11DC14u);
    ctx->pc = 0x11DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC0Cu;
    // 0x11dc10: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1200E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1200E0u, 0x11DC0Cu, 0x11DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC14u;
label_11dc14:
    // 0x11dc14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11dc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc18: 0xc048e22  jal         func_123888
    ctx->pc = 0x11DC18u;
    SET_GPR_U32(ctx, 31, 0x11DC20u);
    ctx->pc = 0x11DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC18u;
    // 0x11dc1c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123888u, 0x11DC18u, 0x11DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC20u;
label_11dc20:
    // 0x11dc20: 0x8e44deb8  lw          $a0, -0x2148($s2)
    ctx->pc = 0x11dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958776)));
    // 0x11dc24: 0x3c05d000  lui         $a1, 0xD000
    ctx->pc = 0x11dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53248 << 16));
    // 0x11dc28: 0x34a50014  ori         $a1, $a1, 0x14
    ctx->pc = 0x11dc28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20);
    // 0x11dc2c: 0xc063262  jal         func_18C988
    ctx->pc = 0x11DC2Cu;
    SET_GPR_U32(ctx, 31, 0x11DC34u);
    ctx->pc = 0x11DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC2Cu;
    // 0x11dc30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C988u, 0x11DC2Cu, 0x11DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC34u;
label_11dc34:
    // 0x11dc34: 0x8e44deb8  lw          $a0, -0x2148($s2)
    ctx->pc = 0x11dc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958776)));
    // 0x11dc38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11dc38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11dc3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x11dc3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc40: 0xc063416  jal         func_18D058
    ctx->pc = 0x11DC40u;
    SET_GPR_U32(ctx, 31, 0x11DC48u);
    ctx->pc = 0x11DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC40u;
    // 0x11dc44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D058u, 0x11DC40u, 0x11DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC48u;
label_11dc48:
    // 0x11dc48: 0xc06c7ce  jal         func_1B1F38
    ctx->pc = 0x11DC48u;
    SET_GPR_U32(ctx, 31, 0x11DC50u);
    ctx->pc = 0x11DC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC48u;
    // 0x11dc4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F38u, 0x11DC48u, 0x11DC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC50u;
label_11dc50:
    // 0x11dc50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x11dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x11dc54: 0x8c82489c  lw          $v0, 0x489C($a0)
    ctx->pc = 0x11dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11dc58: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x11dc58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x11dc5c: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11DC5Cu;
    {
        const bool branch_taken_0x11dc5c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC5Cu;
        // 0x11dc60: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc5c) {
            ctx->pc = 0x11DCA8u;
            goto label_11dca8;
        }
    }
    ctx->pc = 0x11DC64u;
    // 0x11dc64: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x11dc64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_11dc68:
    // 0x11dc68: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x11dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x11dc6c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x11DC6Cu;
    SET_GPR_U32(ctx, 31, 0x11DC74u);
    ctx->pc = 0x11DC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC6Cu;
    // 0x11dc70: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x11DC6Cu, 0x11DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC74u;
label_11dc74:
    // 0x11dc74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11dc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc78: 0xc089d02  jal         func_227408
    ctx->pc = 0x11DC78u;
    SET_GPR_U32(ctx, 31, 0x11DC80u);
    ctx->pc = 0x11DC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC78u;
    // 0x11dc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x11DC78u, 0x11DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC80u;
label_11dc80:
    // 0x11dc80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DC80u;
    {
        const bool branch_taken_0x11dc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC80u;
        // 0x11dc84: 0x8e43489c  lw          $v1, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc80) {
            ctx->pc = 0x11DC94u;
            goto label_11dc94;
        }
    }
    ctx->pc = 0x11DC88u;
    // 0x11dc88: 0xc089ce2  jal         func_227388
    ctx->pc = 0x11DC88u;
    SET_GPR_U32(ctx, 31, 0x11DC90u);
    ctx->pc = 0x11DC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC88u;
    // 0x11dc8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x11DC88u, 0x11DC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC90u;
label_11dc90:
    // 0x11dc90: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x11dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
label_11dc94:
    // 0x11dc94: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11dc94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x11dc98: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11dc98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x11dc9c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x11dc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11dca0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11DCA0u;
    {
        const bool branch_taken_0x11dca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCA0u;
        // 0x11dca4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dca0) {
            ctx->pc = 0x11DC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11dc68;
        }
    }
    ctx->pc = 0x11DCA8u;
label_11dca8:
    // 0x11dca8: 0xc089d02  jal         func_227408
    ctx->pc = 0x11DCA8u;
    SET_GPR_U32(ctx, 31, 0x11DCB0u);
    ctx->pc = 0x11DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCA8u;
    // 0x11dcac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227408u, 0x11DCA8u, 0x11DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCB0u;
label_11dcb0:
    // 0x11dcb0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DCB0u;
    {
        const bool branch_taken_0x11dcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCB0u;
        // 0x11dcb4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcb0) {
            ctx->pc = 0x11DCC4u;
            goto label_11dcc4;
        }
    }
    ctx->pc = 0x11DCB8u;
    // 0x11dcb8: 0xc089ce2  jal         func_227388
    ctx->pc = 0x11DCB8u;
    SET_GPR_U32(ctx, 31, 0x11DCC0u);
    ctx->pc = 0x11DCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCB8u;
    // 0x11dcbc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227388u, 0x11DCB8u, 0x11DCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DCC0u;
label_11dcc0:
    // 0x11dcc0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x11dcc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11dcc4:
    // 0x11dcc4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x11dcc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11dcc8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x11dcc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11dccc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x11dcccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11dcd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11dcd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11dcd4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x11dcd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11dcd8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x11dcd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dcdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11dcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dce0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x11dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11dce4: 0x3e00008  jr          $ra
    ctx->pc = 0x11DCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCE4u;
        // 0x11dce8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DCECu;
    // 0x11dcec: 0x0  nop
    ctx->pc = 0x11dcecu;
    // NOP
    ctx->pc = 0x11dcf0u;
}
