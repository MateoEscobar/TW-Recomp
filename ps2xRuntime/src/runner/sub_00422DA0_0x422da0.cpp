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

// Function: sub_00422DA0
// Address: 0x422da0 - 0x423050
void sub_00422DA0_0x422da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00422DA0_0x422da0");
#endif

    switch (ctx->pc) {
        case 0x422dd8u: goto label_422dd8;
        case 0x422decu: goto label_422dec;
        case 0x422e50u: goto label_422e50;
        case 0x422e64u: goto label_422e64;
        case 0x422e78u: goto label_422e78;
        case 0x422e8cu: goto label_422e8c;
        case 0x422ea0u: goto label_422ea0;
        case 0x422eb4u: goto label_422eb4;
        case 0x422ec8u: goto label_422ec8;
        case 0x422edcu: goto label_422edc;
        case 0x422ef0u: goto label_422ef0;
        case 0x422f04u: goto label_422f04;
        case 0x422f28u: goto label_422f28;
        case 0x422f3cu: goto label_422f3c;
        case 0x422f50u: goto label_422f50;
        case 0x422f64u: goto label_422f64;
        case 0x422f78u: goto label_422f78;
        case 0x422f8cu: goto label_422f8c;
        case 0x422fa0u: goto label_422fa0;
        case 0x422fb4u: goto label_422fb4;
        case 0x422fc8u: goto label_422fc8;
        case 0x422fdcu: goto label_422fdc;
        case 0x422ff0u: goto label_422ff0;
        case 0x423004u: goto label_423004;
        case 0x423020u: goto label_423020;
        default: break;
    }

    ctx->pc = 0x422da0u;

    // 0x422da0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x422da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x422da4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x422da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x422da8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x422da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x422dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x422dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422db0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x422db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x422db4: 0x261100c8  addiu       $s1, $s0, 0xC8
    ctx->pc = 0x422db4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x422db8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x422db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x422dbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x422dbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422dc0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x422dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x422dc4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x422dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x422dc8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x422dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x422dcc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x422dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x422dd0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x422dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x422dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x422dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_422dd8:
    // 0x422dd8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x422dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x422ddc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x422ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422de4: 0xc10832e  jal         func_420CB8
    ctx->pc = 0x422DE4u;
    SET_GPR_U32(ctx, 31, 0x422DECu);
    ctx->pc = 0x422DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422DE4u;
    // 0x422de8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420CB8u, 0x422DE4u, 0x422DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422DECu;
label_422dec:
    // 0x422dec: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x422decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x422df0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422DF0u;
    {
        const bool branch_taken_0x422df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422DF0u;
        // 0x422df4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422df0) {
            ctx->pc = 0x422DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422dd8;
        }
    }
    ctx->pc = 0x422DF8u;
    // 0x422df8: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x422df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x422dfc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x422dfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422e00: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x422e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x422e04: 0x261400e4  addiu       $s4, $s0, 0xE4
    ctx->pc = 0x422e04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    // 0x422e08: 0x26020254  addiu       $v0, $s0, 0x254
    ctx->pc = 0x422e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 596));
    // 0x422e0c: 0x26150118  addiu       $s5, $s0, 0x118
    ctx->pc = 0x422e0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x422e10: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x422e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x422e14: 0x26160138  addiu       $s6, $s0, 0x138
    ctx->pc = 0x422e14u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
    // 0x422e18: 0x26020264  addiu       $v0, $s0, 0x264
    ctx->pc = 0x422e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    // 0x422e1c: 0x26170168  addiu       $s7, $s0, 0x168
    ctx->pc = 0x422e1cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x422e20: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x422e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x422e24: 0x26130180  addiu       $s3, $s0, 0x180
    ctx->pc = 0x422e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x422e28: 0x26020298  addiu       $v0, $s0, 0x298
    ctx->pc = 0x422e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 664));
    // 0x422e2c: 0x261e0248  addiu       $fp, $s0, 0x248
    ctx->pc = 0x422e2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
    // 0x422e30: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x422e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x422e34: 0x261100d4  addiu       $s1, $s0, 0xD4
    ctx->pc = 0x422e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
    // 0x422e38: 0x260202b8  addiu       $v0, $s0, 0x2B8
    ctx->pc = 0x422e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    // 0x422e3c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x422e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x422e40: 0x260202e8  addiu       $v0, $s0, 0x2E8
    ctx->pc = 0x422e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
    // 0x422e44: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x422e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x422e48: 0x26020240  addiu       $v0, $s0, 0x240
    ctx->pc = 0x422e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x422e4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x422e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_422e50:
    // 0x422e50: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x422e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x422e54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x422e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422e5c: 0xc1083ac  jal         func_420EB0
    ctx->pc = 0x422E5Cu;
    SET_GPR_U32(ctx, 31, 0x422E64u);
    ctx->pc = 0x422E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422E5Cu;
    // 0x422e60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EB0u, 0x422E5Cu, 0x422E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422E64u;
label_422e64:
    // 0x422e64: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x422e64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x422e68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422E68u;
    {
        const bool branch_taken_0x422e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E68u;
        // 0x422e6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422e68) {
            ctx->pc = 0x422E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422e50;
        }
    }
    ctx->pc = 0x422E70u;
    // 0x422e70: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x422e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422e74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x422e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422e78:
    // 0x422e78: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x422e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x422e7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x422e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422e84: 0xc10836c  jal         func_420DB0
    ctx->pc = 0x422E84u;
    SET_GPR_U32(ctx, 31, 0x422E8Cu);
    ctx->pc = 0x422E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422E84u;
    // 0x422e88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420DB0u, 0x422E84u, 0x422E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422E8Cu;
label_422e8c:
    // 0x422e8c: 0x2e22000d  sltiu       $v0, $s1, 0xD
    ctx->pc = 0x422e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x422e90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422E90u;
    {
        const bool branch_taken_0x422e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422E90u;
        // 0x422e94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422e90) {
            ctx->pc = 0x422E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422e78;
        }
    }
    ctx->pc = 0x422E98u;
    // 0x422e98: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x422e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422e9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x422e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422ea0:
    // 0x422ea0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x422ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x422ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x422ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422eac: 0xc1083ec  jal         func_420FB0
    ctx->pc = 0x422EACu;
    SET_GPR_U32(ctx, 31, 0x422EB4u);
    ctx->pc = 0x422EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422EACu;
    // 0x422eb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420FB0u, 0x422EACu, 0x422EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422EB4u;
label_422eb4:
    // 0x422eb4: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x422eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x422eb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422EB8u;
    {
        const bool branch_taken_0x422eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422EB8u;
        // 0x422ebc: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422eb8) {
            ctx->pc = 0x422EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422ea0;
        }
    }
    ctx->pc = 0x422EC0u;
    // 0x422ec0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x422ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ec4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x422ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422ec8:
    // 0x422ec8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x422ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x422ecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x422eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ed4: 0xc10842a  jal         func_4210A8
    ctx->pc = 0x422ED4u;
    SET_GPR_U32(ctx, 31, 0x422EDCu);
    ctx->pc = 0x422ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422ED4u;
    // 0x422ed8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4210A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4210A8u, 0x422ED4u, 0x422EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422EDCu;
label_422edc:
    // 0x422edc: 0x2e22000c  sltiu       $v0, $s1, 0xC
    ctx->pc = 0x422edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x422ee0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422EE0u;
    {
        const bool branch_taken_0x422ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422EE0u;
        // 0x422ee4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422ee0) {
            ctx->pc = 0x422EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422ec8;
        }
    }
    ctx->pc = 0x422EE8u;
    // 0x422ee8: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x422ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422eec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x422eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422ef0:
    // 0x422ef0: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x422ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x422ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x422ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x422ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422efc: 0xc108468  jal         func_4211A0
    ctx->pc = 0x422EFCu;
    SET_GPR_U32(ctx, 31, 0x422F04u);
    ctx->pc = 0x422F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422EFCu;
    // 0x422f00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4211A0u, 0x422EFCu, 0x422F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422F04u;
label_422f04:
    // 0x422f04: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x422f04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x422f08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422F08u;
    {
        const bool branch_taken_0x422f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422F08u;
        // 0x422f0c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422f08) {
            ctx->pc = 0x422EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422ef0;
        }
    }
    ctx->pc = 0x422F10u;
    // 0x422f10: 0xa20000bd  sb          $zero, 0xBD($s0)
    ctx->pc = 0x422f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 189), (uint8_t)GPR_U32(ctx, 0));
    // 0x422f14: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x422f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422f18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x422f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x422f1c: 0xa20000bc  sb          $zero, 0xBC($s0)
    ctx->pc = 0x422f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 188), (uint8_t)GPR_U32(ctx, 0));
    // 0x422f20: 0xc10829c  jal         func_420A70
    ctx->pc = 0x422F20u;
    SET_GPR_U32(ctx, 31, 0x422F28u);
    ctx->pc = 0x422F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422F20u;
    // 0x422f24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A70u, 0x422F20u, 0x422F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422F28u;
label_422f28:
    // 0x422f28: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x422f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x422f2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422f30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x422f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422f34: 0xc10832e  jal         func_420CB8
    ctx->pc = 0x422F34u;
    SET_GPR_U32(ctx, 31, 0x422F3Cu);
    ctx->pc = 0x422F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422F34u;
    // 0x422f38: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420CB8u, 0x422F34u, 0x422F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422F3Cu;
label_422f3c:
    // 0x422f3c: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x422f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x422f40: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422F40u;
    {
        const bool branch_taken_0x422f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422F40u;
        // 0x422f44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422f40) {
            ctx->pc = 0x422F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422f28;
        }
    }
    ctx->pc = 0x422F48u;
    // 0x422f48: 0x8fb1000c  lw          $s1, 0xC($sp)
    ctx->pc = 0x422f48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x422f4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x422f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422f50:
    // 0x422f50: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x422f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x422f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422f58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x422f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422f5c: 0xc1083ac  jal         func_420EB0
    ctx->pc = 0x422F5Cu;
    SET_GPR_U32(ctx, 31, 0x422F64u);
    ctx->pc = 0x422F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422F5Cu;
    // 0x422f60: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420EB0u, 0x422F5Cu, 0x422F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422F64u;
label_422f64:
    // 0x422f64: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x422f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x422f68: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422F68u;
    {
        const bool branch_taken_0x422f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422F68u;
        // 0x422f6c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422f68) {
            ctx->pc = 0x422F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422f50;
        }
    }
    ctx->pc = 0x422F70u;
    // 0x422f70: 0x8fb10014  lw          $s1, 0x14($sp)
    ctx->pc = 0x422f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x422f74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x422f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422f78:
    // 0x422f78: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x422f78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x422f7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422f80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x422f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422f84: 0xc10836c  jal         func_420DB0
    ctx->pc = 0x422F84u;
    SET_GPR_U32(ctx, 31, 0x422F8Cu);
    ctx->pc = 0x422F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422F84u;
    // 0x422f88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420DB0u, 0x422F84u, 0x422F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422F8Cu;
label_422f8c:
    // 0x422f8c: 0x2e02000d  sltiu       $v0, $s0, 0xD
    ctx->pc = 0x422f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x422f90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422F90u;
    {
        const bool branch_taken_0x422f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422F90u;
        // 0x422f94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422f90) {
            ctx->pc = 0x422F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422f78;
        }
    }
    ctx->pc = 0x422F98u;
    // 0x422f98: 0x8fb10008  lw          $s1, 0x8($sp)
    ctx->pc = 0x422f98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x422f9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x422f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422fa0:
    // 0x422fa0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x422fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x422fa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422fa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x422fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422fac: 0xc1083ec  jal         func_420FB0
    ctx->pc = 0x422FACu;
    SET_GPR_U32(ctx, 31, 0x422FB4u);
    ctx->pc = 0x422FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422FACu;
    // 0x422fb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420FB0u, 0x422FACu, 0x422FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422FB4u;
label_422fb4:
    // 0x422fb4: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x422fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x422fb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422FB8u;
    {
        const bool branch_taken_0x422fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422FB8u;
        // 0x422fbc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422fb8) {
            ctx->pc = 0x422FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422fa0;
        }
    }
    ctx->pc = 0x422FC0u;
    // 0x422fc0: 0x8fb10018  lw          $s1, 0x18($sp)
    ctx->pc = 0x422fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x422fc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x422fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422fc8:
    // 0x422fc8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x422fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x422fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422fd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x422fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422fd4: 0xc10842a  jal         func_4210A8
    ctx->pc = 0x422FD4u;
    SET_GPR_U32(ctx, 31, 0x422FDCu);
    ctx->pc = 0x422FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422FD4u;
    // 0x422fd8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4210A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4210A8u, 0x422FD4u, 0x422FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x422FDCu;
label_422fdc:
    // 0x422fdc: 0x2e02000c  sltiu       $v0, $s0, 0xC
    ctx->pc = 0x422fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x422fe0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x422FE0u;
    {
        const bool branch_taken_0x422fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x422FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x422FE0u;
        // 0x422fe4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422fe0) {
            ctx->pc = 0x422FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422fc8;
        }
    }
    ctx->pc = 0x422FE8u;
    // 0x422fe8: 0x8fb10004  lw          $s1, 0x4($sp)
    ctx->pc = 0x422fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x422fec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x422fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_422ff0:
    // 0x422ff0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x422ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x422ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x422ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x422ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x422ffc: 0xc108468  jal         func_4211A0
    ctx->pc = 0x422FFCu;
    SET_GPR_U32(ctx, 31, 0x423004u);
    ctx->pc = 0x423000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x422FFCu;
    // 0x423000: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4211A0u, 0x422FFCu, 0x423004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423004u;
label_423004:
    // 0x423004: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x423004u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x423008: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x423008u;
    {
        const bool branch_taken_0x423008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423008u;
        // 0x42300c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x423008) {
            ctx->pc = 0x422FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_422ff0;
        }
    }
    ctx->pc = 0x423010u;
    // 0x423010: 0xa26000bd  sb          $zero, 0xBD($s3)
    ctx->pc = 0x423010u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 189), (uint8_t)GPR_U32(ctx, 0));
    // 0x423014: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x423014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x423018: 0xc10829c  jal         func_420A70
    ctx->pc = 0x423018u;
    SET_GPR_U32(ctx, 31, 0x423020u);
    ctx->pc = 0x42301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x423018u;
    // 0x42301c: 0xa26000bc  sb          $zero, 0xBC($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 188), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x420A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420A70u, 0x423018u, 0x423020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x423020u;
label_423020:
    // 0x423020: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x423020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x423024: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x423024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x423028: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x423028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x42302c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x42302cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x423030: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x423030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x423034: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x423034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x423038: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x423038u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42303c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x42303cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x423040: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x423040u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x423044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x423044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x423048: 0x3e00008  jr          $ra
    ctx->pc = 0x423048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x423048u;
        // 0x42304c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x423048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x423050u;
}
