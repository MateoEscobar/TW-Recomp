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

// Function: sub_004D6F78
// Address: 0x4d6f78 - 0x4d7130
void sub_004D6F78_0x4d6f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D6F78_0x4d6f78");
#endif

    switch (ctx->pc) {
        case 0x4d6fd4u: goto label_4d6fd4;
        case 0x4d6ffcu: goto label_4d6ffc;
        case 0x4d7024u: goto label_4d7024;
        case 0x4d703cu: goto label_4d703c;
        case 0x4d7064u: goto label_4d7064;
        case 0x4d70c0u: goto label_4d70c0;
        case 0x4d70d8u: goto label_4d70d8;
        case 0x4d7104u: goto label_4d7104;
        default: break;
    }

    ctx->pc = 0x4d6f78u;

    // 0x4d6f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d6f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d6f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d6f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d6f80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d6f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d6f84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d6f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6f88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d6f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d6f8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4d6f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6f90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d6f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d6f94: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4d6f94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6f98: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d6f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4d6f9c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4d6f9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6fa0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d6fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d6fa4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4d6fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4d6fa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d6fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d6fac: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x4d6facu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d6fb0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x4d6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4d6fb4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4d6fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d6fb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D6FB8u;
    {
        const bool branch_taken_0x4d6fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6FB8u;
        // 0x4d6fbc: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6fb8) {
            ctx->pc = 0x4D6FD4u;
            goto label_4d6fd4;
        }
    }
    ctx->pc = 0x4D6FC0u;
    // 0x4d6fc0: 0x109083  sra         $s2, $s0, 2
    ctx->pc = 0x4d6fc0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 16), 2));
    // 0x4d6fc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4d6fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d6fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6fcc: 0xc134da6  jal         func_4D3698
    ctx->pc = 0x4D6FCCu;
    SET_GPR_U32(ctx, 31, 0x4D6FD4u);
    ctx->pc = 0x4D6FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6FCCu;
    // 0x4d6fd0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D3698u, 0x4D6FCCu, 0x4D6FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6FD4u;
label_4d6fd4:
    // 0x4d6fd4: 0x8e750004  lw          $s5, 0x4($s3)
    ctx->pc = 0x4d6fd4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4d6fd8: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x4d6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x4d6fdc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x4d6fdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x4d6fe0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4D6FE0u;
    {
        const bool branch_taken_0x4d6fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6FE0u;
        // 0x4d6fe4: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6fe0) {
            ctx->pc = 0x4D6FFCu;
            goto label_4d6ffc;
        }
    }
    ctx->pc = 0x4D6FE8u;
    // 0x4d6fe8: 0x10a883  sra         $s5, $s0, 2
    ctx->pc = 0x4d6fe8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 16), 2));
    // 0x4d6fec: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x4d6fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x4d6ff0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d6ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d6ff4: 0xc135c4c  jal         func_4D7130
    ctx->pc = 0x4D6FF4u;
    SET_GPR_U32(ctx, 31, 0x4D6FFCu);
    ctx->pc = 0x4D6FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D6FF4u;
    // 0x4d6ff8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7130u, 0x4D6FF4u, 0x4D6FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D6FFCu;
label_4d6ffc:
    // 0x4d6ffc: 0x6c00020  bltz        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x4D6FFCu;
    {
        const bool branch_taken_0x4d6ffc = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x4D7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D6FFCu;
        // 0x4d7000: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d6ffc) {
            ctx->pc = 0x4D7080u;
            goto label_4d7080;
        }
    }
    ctx->pc = 0x4D7004u;
    // 0x4d7004: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D7004u;
    {
        const bool branch_taken_0x4d7004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7004u;
        // 0x4d7008: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7004) {
            ctx->pc = 0x4D7044u;
            goto label_4d7044;
        }
    }
    ctx->pc = 0x4D700Cu;
    // 0x4d700c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d700cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7010: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x4d7010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4d7014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7018: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d7018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d701c: 0xc135c90  jal         func_4D7240
    ctx->pc = 0x4D701Cu;
    SET_GPR_U32(ctx, 31, 0x4D7024u);
    ctx->pc = 0x4D7020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D701Cu;
    // 0x4d7020: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7240u, 0x4D701Cu, 0x4D7024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7024u;
label_4d7024:
    // 0x4d7024: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x4d7024u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4d7028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d7028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d702c: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x4d702cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x4d7030: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4d7030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7034: 0xc135d64  jal         func_4D7590
    ctx->pc = 0x4D7034u;
    SET_GPR_U32(ctx, 31, 0x4D703Cu);
    ctx->pc = 0x4D7038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D7034u;
    // 0x4d7038: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7590u, 0x4D7034u, 0x4D703Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D703Cu;
label_4d703c:
    // 0x4d703c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4D703Cu;
    {
        const bool branch_taken_0x4d703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D703Cu;
        // 0x4d7040: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d703c) {
            ctx->pc = 0x4D7068u;
            goto label_4d7068;
        }
    }
    ctx->pc = 0x4D7044u;
label_4d7044:
    // 0x4d7044: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D7044u;
    {
        const bool branch_taken_0x4d7044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4d7044) {
            ctx->pc = 0x4D7048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D7044u;
            // 0x4d7048: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D7068u;
            goto label_4d7068;
        }
    }
    ctx->pc = 0x4D704Cu;
    // 0x4d704c: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x4d704cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4d7050: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d7050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7054: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4d7054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7058: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4d7058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d705c: 0xc135c90  jal         func_4D7240
    ctx->pc = 0x4D705Cu;
    SET_GPR_U32(ctx, 31, 0x4D7064u);
    ctx->pc = 0x4D7060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D705Cu;
    // 0x4d7060: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7240u, 0x4D705Cu, 0x4D7064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7064u;
label_4d7064:
    // 0x4d7064: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x4d7064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d7068:
    // 0x4d7068: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x4d7068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d706c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x4d706cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4d7070: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4d7070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4d7074: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x4d7074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x4d7078: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4D7078u;
    {
        const bool branch_taken_0x4d7078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7078u;
        // 0x4d707c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7078) {
            ctx->pc = 0x4D7104u;
            goto label_4d7104;
        }
    }
    ctx->pc = 0x4D7080u;
label_4d7080:
    // 0x4d7080: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x4d7080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d7084: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x4d7084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d7088: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4d7088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4d708c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4d708cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4d7090: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4d7090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d7094: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4d7094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4d7098: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4d7098u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x4d709c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x4d709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x4d70a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4D70A0u;
    {
        const bool branch_taken_0x4d70a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D70A0u;
        // 0x4d70a4: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d70a0) {
            ctx->pc = 0x4D70E0u;
            goto label_4d70e0;
        }
    }
    ctx->pc = 0x4D70A8u;
    // 0x4d70a8: 0x123880  sll         $a3, $s2, 2
    ctx->pc = 0x4d70a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4d70ac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4d70acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d70b0: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x4d70b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x4d70b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d70b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d70b8: 0xc135d98  jal         func_4D7660
    ctx->pc = 0x4D70B8u;
    SET_GPR_U32(ctx, 31, 0x4D70C0u);
    ctx->pc = 0x4D70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D70B8u;
    // 0x4d70bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D7660u, 0x4D70B8u, 0x4D70C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D70C0u;
label_4d70c0:
    // 0x4d70c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d70c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d70c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d70c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d70c8: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x4d70c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4d70cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d70ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d70d0: 0xc135cfa  jal         func_4D73E8
    ctx->pc = 0x4D70D0u;
    SET_GPR_U32(ctx, 31, 0x4D70D8u);
    ctx->pc = 0x4D70D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D70D0u;
    // 0x4d70d4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D73E8u, 0x4D70D0u, 0x4D70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D70D8u;
label_4d70d8:
    // 0x4d70d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4D70D8u;
    {
        const bool branch_taken_0x4d70d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D70D8u;
        // 0x4d70dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d70d8) {
            ctx->pc = 0x4D7108u;
            goto label_4d7108;
        }
    }
    ctx->pc = 0x4D70E0u;
label_4d70e0:
    // 0x4d70e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4d70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4d70e4: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D70E4u;
    {
        const bool branch_taken_0x4d70e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D70E4u;
        // 0x4d70e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d70e4) {
            ctx->pc = 0x4D7108u;
            goto label_4d7108;
        }
    }
    ctx->pc = 0x4D70ECu;
    // 0x4d70ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d70ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d70f0: 0x26660008  addiu       $a2, $s3, 0x8
    ctx->pc = 0x4d70f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x4d70f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4d70f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d70f8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x4d70f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d70fc: 0xc135cfa  jal         func_4D73E8
    ctx->pc = 0x4D70FCu;
    SET_GPR_U32(ctx, 31, 0x4D7104u);
    ctx->pc = 0x4D7100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D70FCu;
    // 0x4d7100: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D73E8u, 0x4D70FCu, 0x4D7104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D7104u;
label_4d7104:
    // 0x4d7104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d7104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d7108:
    // 0x4d7108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d7108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d710c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d710cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d7110: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d7110u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d7114: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d7114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d7118: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d7118u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d711c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d711cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d7120: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4d7120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4d7124: 0x3e00008  jr          $ra
    ctx->pc = 0x4D7124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7124u;
        // 0x4d7128: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D712Cu;
    // 0x4d712c: 0x0  nop
    ctx->pc = 0x4d712cu;
    // NOP
    ctx->pc = 0x4d7130u;
}
