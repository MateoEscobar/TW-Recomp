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

// Function: sub_0030DAF8
// Address: 0x30daf8 - 0x30dc28
void sub_0030DAF8_0x30daf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DAF8_0x30daf8");
#endif

    switch (ctx->pc) {
        case 0x30db58u: goto label_30db58;
        case 0x30db60u: goto label_30db60;
        case 0x30db68u: goto label_30db68;
        case 0x30db88u: goto label_30db88;
        case 0x30dbe0u: goto label_30dbe0;
        default: break;
    }

    ctx->pc = 0x30daf8u;

    // 0x30daf8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x30daf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x30dafc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x30dafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x30db00: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x30db00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x30db04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30db04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db08: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x30db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x30db0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30db0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db10: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x30db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x30db14: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x30db14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30db18: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x30db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x30db1c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x30db1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x30db20: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x30db20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30db24: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x30db24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x30db28: 0x241600b2  addiu       $s6, $zero, 0xB2
    ctx->pc = 0x30db28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x30db2c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x30db2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x30db30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x30db30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x30db34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30db34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30db38: 0x3c0142a6  lui         $at, 0x42A6
    ctx->pc = 0x30db38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17062 << 16));
    // 0x30db3c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x30db3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x30db40: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x30db44: 0x3c014292  lui         $at, 0x4292
    ctx->pc = 0x30db44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17042 << 16));
    // 0x30db48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30db48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30db4c: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x30db4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x30db50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x30db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db54: 0x0  nop
    ctx->pc = 0x30db54u;
    // NOP
label_30db58:
    // 0x30db58: 0xc137826  jal         func_4DE098
    ctx->pc = 0x30DB58u;
    SET_GPR_U32(ctx, 31, 0x30DB60u);
    ctx->pc = 0x30DB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB58u;
    // 0x30db5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x30DB58u, 0x30DB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB60u;
label_30db60:
    // 0x30db60: 0xc0e409a  jal         func_390268
    ctx->pc = 0x30DB60u;
    SET_GPR_U32(ctx, 31, 0x30DB68u);
    ctx->pc = 0x30DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB60u;
    // 0x30db64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x30DB60u, 0x30DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB68u;
label_30db68:
    // 0x30db68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30db68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30db6c: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x30DB6Cu;
    {
        const bool branch_taken_0x30db6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x30db6c) {
            ctx->pc = 0x30DB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DB6Cu;
            // 0x30db70: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DBE8u;
            goto label_30dbe8;
        }
    }
    ctx->pc = 0x30DB74u;
    // 0x30db74: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x30db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x30db78: 0x5456001b  bnel        $v0, $s6, . + 4 + (0x1B << 2)
    ctx->pc = 0x30DB78u;
    {
        const bool branch_taken_0x30db78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x30db78) {
            ctx->pc = 0x30DB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30DB78u;
            // 0x30db7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30DBE8u;
            goto label_30dbe8;
        }
    }
    ctx->pc = 0x30DB80u;
    // 0x30db80: 0xc088bbc  jal         func_222EF0
    ctx->pc = 0x30DB80u;
    SET_GPR_U32(ctx, 31, 0x30DB88u);
    ctx->pc = 0x30DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DB80u;
    // 0x30db84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222EF0u, 0x30DB80u, 0x30DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DB88u;
label_30db88:
    // 0x30db88: 0x92420024  lbu         $v0, 0x24($s2)
    ctx->pc = 0x30db88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x30db8c: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x30DB8Cu;
    {
        const bool branch_taken_0x30db8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x30db8c) {
            ctx->pc = 0x30DBA4u;
            goto label_30dba4;
        }
    }
    ctx->pc = 0x30DB94u;
    // 0x30db94: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x30db94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30db98: 0x0  nop
    ctx->pc = 0x30db98u;
    // NOP
    // 0x30db9c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x30DB9Cu;
    {
        const bool branch_taken_0x30db9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30db9c) {
            ctx->pc = 0x30DBC0u;
            goto label_30dbc0;
        }
    }
    ctx->pc = 0x30DBA4u;
label_30dba4:
    // 0x30dba4: 0x14550010  bne         $v0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x30DBA4u;
    {
        const bool branch_taken_0x30dba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x30DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBA4u;
        // 0x30dba8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dba4) {
            ctx->pc = 0x30DBE8u;
            goto label_30dbe8;
        }
    }
    ctx->pc = 0x30DBACu;
    // 0x30dbac: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x30dbacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30dbb0: 0x0  nop
    ctx->pc = 0x30dbb0u;
    // NOP
    // 0x30dbb4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x30DBB4u;
    {
        const bool branch_taken_0x30dbb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBB4u;
        // 0x30dbb8: 0x2e220010  sltiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbb4) {
            ctx->pc = 0x30DBECu;
            goto label_30dbec;
        }
    }
    ctx->pc = 0x30DBBCu;
    // 0x30dbbc: 0x92420024  lbu         $v0, 0x24($s2)
    ctx->pc = 0x30dbbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 36)));
label_30dbc0:
    // 0x30dbc0: 0x3c014292  lui         $at, 0x4292
    ctx->pc = 0x30dbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17042 << 16));
    // 0x30dbc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30dbc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30dbc8: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x30DBC8u;
    {
        const bool branch_taken_0x30dbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x30DBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBC8u;
        // 0x30dbcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbc8) {
            ctx->pc = 0x30DBD8u;
            goto label_30dbd8;
        }
    }
    ctx->pc = 0x30DBD0u;
    // 0x30dbd0: 0x3c0142a6  lui         $at, 0x42A6
    ctx->pc = 0x30dbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17062 << 16));
    // 0x30dbd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30dbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_30dbd8:
    // 0x30dbd8: 0xc088ba0  jal         func_222E80
    ctx->pc = 0x30DBD8u;
    SET_GPR_U32(ctx, 31, 0x30DBE0u);
    ctx->pc = 0x30DBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30DBD8u;
    // 0x30dbdc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x222E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222E80u, 0x30DBD8u, 0x30DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30DBE0u;
label_30dbe0:
    // 0x30dbe0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30DBE0u;
    {
        const bool branch_taken_0x30dbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBE0u;
        // 0x30dbe4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbe0) {
            ctx->pc = 0x30DBF8u;
            goto label_30dbf8;
        }
    }
    ctx->pc = 0x30DBE8u;
label_30dbe8:
    // 0x30dbe8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x30dbe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_30dbec:
    // 0x30dbec: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x30DBECu;
    {
        const bool branch_taken_0x30dbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DBECu;
        // 0x30dbf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30dbec) {
            ctx->pc = 0x30DB58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30db58;
        }
    }
    ctx->pc = 0x30DBF4u;
    // 0x30dbf4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30dbf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30dbf8:
    // 0x30dbf8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x30dbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30dbfc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x30dbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30dc00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x30dc00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30dc04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x30dc04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30dc08: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x30dc08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30dc0c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x30dc0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30dc10: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x30dc10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30dc14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30dc14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30dc18: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x30dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30dc1c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x30dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30dc20: 0x3e00008  jr          $ra
    ctx->pc = 0x30DC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DC20u;
        // 0x30dc24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DC28u;
}
