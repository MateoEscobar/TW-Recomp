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

// Function: sub_004D8918
// Address: 0x4d8918 - 0x4d89c0
void sub_004D8918_0x4d8918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D8918_0x4d8918");
#endif

    switch (ctx->pc) {
        case 0x4d8928u: goto label_4d8928;
        case 0x4d8930u: goto label_4d8930;
        case 0x4d8948u: goto label_4d8948;
        default: break;
    }

    ctx->pc = 0x4d8918u;

    // 0x4d8918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d8918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4d891c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d891cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4d8920: 0xc10f454  jal         func_43D150
    ctx->pc = 0x4D8920u;
    SET_GPR_U32(ctx, 31, 0x4D8928u);
    ctx->pc = 0x4D8924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8920u;
    // 0x4d8924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D150u, 0x4D8920u, 0x4D8928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8928u;
label_4d8928:
    // 0x4d8928: 0xc136236  jal         func_4D88D8
    ctx->pc = 0x4D8928u;
    SET_GPR_U32(ctx, 31, 0x4D8930u);
    ctx->pc = 0x4D88D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D88D8u, 0x4D8928u, 0x4D8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8930u;
label_4d8930:
    // 0x4d8930: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8930u;
    {
        const bool branch_taken_0x4d8930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8930u;
        // 0x4d8934: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8930) {
            ctx->pc = 0x4D8940u;
            goto label_4d8940;
        }
    }
    ctx->pc = 0x4D8938u;
    // 0x4d8938: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4D8938u;
    {
        const bool branch_taken_0x4d8938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8938u;
        // 0x4d893c: 0x90423ec4  lbu         $v0, 0x3EC4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8938) {
            ctx->pc = 0x4D896Cu;
            goto label_4d896c;
        }
    }
    ctx->pc = 0x4D8940u;
label_4d8940:
    // 0x4d8940: 0xc10f454  jal         func_43D150
    ctx->pc = 0x4D8940u;
    SET_GPR_U32(ctx, 31, 0x4D8948u);
    ctx->pc = 0x4D8944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D8940u;
    // 0x4d8944: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D150u, 0x4D8940u, 0x4D8948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D8948u;
label_4d8948:
    // 0x4d8948: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4d8948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d894c: 0x31342  srl         $v0, $v1, 13
    ctx->pc = 0x4d894cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x4d8950: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4d8950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4d8954: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8954u;
    {
        const bool branch_taken_0x4d8954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8954) {
            ctx->pc = 0x4D8958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8954u;
            // 0x4d8958: 0x31402  srl         $v0, $v1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8968u;
            goto label_4d8968;
        }
    }
    ctx->pc = 0x4D895Cu;
    // 0x4d895c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x4d895cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x4d8960: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4D8960u;
    {
        const bool branch_taken_0x4d8960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8960u;
        // 0x4d8964: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8960) {
            ctx->pc = 0x4D896Cu;
            goto label_4d896c;
        }
    }
    ctx->pc = 0x4D8968u;
label_4d8968:
    // 0x4d8968: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4d8968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_4d896c:
    // 0x4d896c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d896cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8970: 0x3e00008  jr          $ra
    ctx->pc = 0x4D8970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D8974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8970u;
        // 0x4d8974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D8970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D8978u;
    // 0x4d8978: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x4d8978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4d897c: 0x0  nop
    ctx->pc = 0x4d897cu;
    // NOP
    // 0x4d8980: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4d8980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4d8984: 0x0  nop
    ctx->pc = 0x4d8984u;
    // NOP
    // 0x4d8988: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4d8988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4d898c: 0x0  nop
    ctx->pc = 0x4d898cu;
    // NOP
    // 0x4d8990: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4d8990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4d8994: 0x0  nop
    ctx->pc = 0x4d8994u;
    // NOP
    // 0x4d8998: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4d8998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4d899c: 0x0  nop
    ctx->pc = 0x4d899cu;
    // NOP
    // 0x4d89a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4d89a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4d89a4: 0x0  nop
    ctx->pc = 0x4d89a4u;
    // NOP
    // 0x4d89a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4d89a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4d89ac: 0x0  nop
    ctx->pc = 0x4d89acu;
    // NOP
    // 0x4d89b0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x4d89b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x4d89b4: 0x0  nop
    ctx->pc = 0x4d89b4u;
    // NOP
    // 0x4d89b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4d89b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4d89bc: 0x0  nop
    ctx->pc = 0x4d89bcu;
    // NOP
    ctx->pc = 0x4d89c0u;
}
