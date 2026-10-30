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

// Function: sub_0049EA80
// Address: 0x49ea80 - 0x49ecc8
void sub_0049EA80_0x49ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EA80_0x49ea80");
#endif

    switch (ctx->pc) {
        case 0x49ead0u: goto label_49ead0;
        case 0x49eb2cu: goto label_49eb2c;
        case 0x49eb50u: goto label_49eb50;
        case 0x49eba0u: goto label_49eba0;
        case 0x49ebb8u: goto label_49ebb8;
        case 0x49ec34u: goto label_49ec34;
        case 0x49ec58u: goto label_49ec58;
        default: break;
    }

    ctx->pc = 0x49ea80u;

    // 0x49ea80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49ea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49ea84: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x49ea84u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ea88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ea8c: 0x91620023  lbu         $v0, 0x23($t3)
    ctx->pc = 0x49ea8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 35)));
    // 0x49ea90: 0x3042006f  andi        $v0, $v0, 0x6F
    ctx->pc = 0x49ea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)111);
    // 0x49ea94: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x49ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x49ea98: 0x2c830026  sltiu       $v1, $a0, 0x26
    ctx->pc = 0x49ea98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)38) ? 1 : 0);
    // 0x49ea9c: 0x1060008a  beqz        $v1, . + 4 + (0x8A << 2)
    ctx->pc = 0x49EA9Cu;
    {
        const bool branch_taken_0x49ea9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EA9Cu;
        // 0x49eaa0: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ea9c) {
            ctx->pc = 0x49ECC8u;
            return;
        }
    }
    ctx->pc = 0x49EAA4u;
    // 0x49eaa4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49eaa8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x49eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x49eaac: 0x2442ff30  addiu       $v0, $v0, -0xD0
    ctx->pc = 0x49eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967088));
    // 0x49eab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49eab4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x49eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49eab8: 0x800008  jr          $a0
    ctx->pc = 0x49EAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49EAC0u: goto label_49eac0;
            case 0x49EB34u: goto label_49eb34;
            case 0x49EBA8u: goto label_49eba8;
            case 0x49EC3Cu: goto label_49ec3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EAB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49EAC0u;
label_49eac0:
    // 0x49eac0: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x49eac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x49eac4: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x49eac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eac8: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x49eac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x49eacc: 0x0  nop
    ctx->pc = 0x49eaccu;
    // NOP
label_49ead0:
    // 0x49ead0: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x49ead0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x49ead4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x49ead4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x49ead8: 0x90c40001  lbu         $a0, 0x1($a2)
    ctx->pc = 0x49ead8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x49eadc: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x49eadcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49eae0: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x49eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x49eae4: 0x90c50003  lbu         $a1, 0x3($a2)
    ctx->pc = 0x49eae4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x49eae8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x49eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x49eaec: 0x30427c00  andi        $v0, $v0, 0x7C00
    ctx->pc = 0x49eaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31744);
    // 0x49eaf0: 0x308403e0  andi        $a0, $a0, 0x3E0
    ctx->pc = 0x49eaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)992);
    // 0x49eaf4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49eaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49eaf8: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x49eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x49eafc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x49eafcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x49eb00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49eb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49eb04: 0x30a58000  andi        $a1, $a1, 0x8000
    ctx->pc = 0x49eb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x49eb08: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x49eb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49eb0c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x49eb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x49eb10: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x49eb10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x49eb14: 0x501ffee  bgez        $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x49EB14u;
    {
        const bool branch_taken_0x49eb14 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x49EB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB14u;
        // 0x49eb18: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eb14) {
            ctx->pc = 0x49EAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ead0;
        }
    }
    ctx->pc = 0x49EB1Cu;
    // 0x49eb1c: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x49eb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x49eb20: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x49eb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eb24: 0xc10f644  jal         func_43D910
    ctx->pc = 0x49EB24u;
    SET_GPR_U32(ctx, 31, 0x49EB2Cu);
    ctx->pc = 0x49EB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EB24u;
    // 0x49eb28: 0x2485009f  addiu       $a1, $a0, 0x9F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 159));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x49EB24u, 0x49EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EB2Cu;
label_49eb2c:
    // 0x49eb2c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x49EB2Cu;
    {
        const bool branch_taken_0x49eb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB2Cu;
        // 0x49eb30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eb2c) {
            ctx->pc = 0x49ECCCu;
            return;
        }
    }
    ctx->pc = 0x49EB34u;
label_49eb34:
    // 0x49eb34: 0x3c090080  lui         $t1, 0x80
    ctx->pc = 0x49eb34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)128 << 16));
    // 0x49eb38: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x49eb38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x49eb3c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x49eb3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eb40: 0x35298081  ori         $t1, $t1, 0x8081
    ctx->pc = 0x49eb40u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32897);
    // 0x49eb44: 0x3c0aff00  lui         $t2, 0xFF00
    ctx->pc = 0x49eb44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65280 << 16));
    // 0x49eb48: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x49eb48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x49eb4c: 0x0  nop
    ctx->pc = 0x49eb4cu;
    // NOP
label_49eb50:
    // 0x49eb50: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x49eb50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x49eb54: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x49eb54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x49eb58: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x49eb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x49eb5c: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x49eb5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x49eb60: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x49eb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x49eb64: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x49eb64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49eb68: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49eb6c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x49eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x49eb70: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x49eb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49eb74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49eb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x49eb78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49eb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49eb7c: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x49eb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x49eb80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49eb84: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x49eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x49eb88: 0x501fff1  bgez        $t0, . + 4 + (-0xF << 2)
    ctx->pc = 0x49EB88u;
    {
        const bool branch_taken_0x49eb88 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x49EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EB88u;
        // 0x49eb8c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eb88) {
            ctx->pc = 0x49EB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49eb50;
        }
    }
    ctx->pc = 0x49EB90u;
    // 0x49eb90: 0x8d670008  lw          $a3, 0x8($t3)
    ctx->pc = 0x49eb90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x49eb94: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x49eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49eb98: 0xc10f644  jal         func_43D910
    ctx->pc = 0x49EB98u;
    SET_GPR_U32(ctx, 31, 0x49EBA0u);
    ctx->pc = 0x49EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EB98u;
    // 0x49eb9c: 0x248500bf  addiu       $a1, $a0, 0xBF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 191));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x49EB98u, 0x49EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EBA0u;
label_49eba0:
    // 0x49eba0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x49EBA0u;
    {
        const bool branch_taken_0x49eba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EBA0u;
        // 0x49eba4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eba0) {
            ctx->pc = 0x49ECCCu;
            return;
        }
    }
    ctx->pc = 0x49EBA8u;
label_49eba8:
    // 0x49eba8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49ebac: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x49ebacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x49ebb0: 0x244afde0  addiu       $t2, $v0, -0x220
    ctx->pc = 0x49ebb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
    // 0x49ebb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49ebb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49ebb8:
    // 0x49ebb8: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x49ebb8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x49ebbc: 0x310300e7  andi        $v1, $t0, 0xE7
    ctx->pc = 0x49ebbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x49ebc0: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x49ebc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x49ebc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49ebc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49ebc8: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x49ebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x49ebcc: 0x29070100  slti        $a3, $t0, 0x100
    ctx->pc = 0x49ebccu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x49ebd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49ebd4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49ebd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49ebd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49ebdc: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x49ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x49ebe0: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x49ebe0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x49ebe4: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x49ebe4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x49ebe8: 0x90660003  lbu         $a2, 0x3($v1)
    ctx->pc = 0x49ebe8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x49ebec: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x49ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x49ebf0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x49ebf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ebf4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x49ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x49ebf8: 0x30847c00  andi        $a0, $a0, 0x7C00
    ctx->pc = 0x49ebf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31744);
    // 0x49ebfc: 0x30a503e0  andi        $a1, $a1, 0x3E0
    ctx->pc = 0x49ebfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)992);
    // 0x49ec00: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x49ec00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x49ec04: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x49ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x49ec08: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x49ec08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x49ec0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49ec10: 0x30c68000  andi        $a2, $a2, 0x8000
    ctx->pc = 0x49ec10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
    // 0x49ec14: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49ec14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49ec18: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x49ec18u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49ec1c: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x49EC1Cu;
    {
        const bool branch_taken_0x49ec1c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC1Cu;
        // 0x49ec20: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec1c) {
            ctx->pc = 0x49EBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ebb8;
        }
    }
    ctx->pc = 0x49EC24u;
    // 0x49ec24: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x49ec24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x49ec28: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x49ec28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ec2c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x49EC2Cu;
    SET_GPR_U32(ctx, 31, 0x49EC34u);
    ctx->pc = 0x49EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EC2Cu;
    // 0x49ec30: 0x2485027f  addiu       $a1, $a0, 0x27F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 639));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x49EC2Cu, 0x49EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EC34u;
label_49ec34:
    // 0x49ec34: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x49EC34u;
    {
        const bool branch_taken_0x49ec34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EC34u;
        // 0x49ec38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ec34) {
            ctx->pc = 0x49ECCCu;
            return;
        }
    }
    ctx->pc = 0x49EC3Cu;
label_49ec3c:
    // 0x49ec3c: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x49ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x49ec40: 0x3c0a0080  lui         $t2, 0x80
    ctx->pc = 0x49ec40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)128 << 16));
    // 0x49ec44: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x49ec44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x49ec48: 0x244efde0  addiu       $t6, $v0, -0x220
    ctx->pc = 0x49ec48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966752));
    // 0x49ec4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49ec4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ec50: 0x354a8081  ori         $t2, $t2, 0x8081
    ctx->pc = 0x49ec50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32897);
    // 0x49ec54: 0x3c0dff00  lui         $t5, 0xFF00
    ctx->pc = 0x49ec54u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65280 << 16));
label_49ec58:
    // 0x49ec58: 0x82043  sra         $a0, $t0, 1
    ctx->pc = 0x49ec58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 8), 1));
    // 0x49ec5c: 0x310300e7  andi        $v1, $t0, 0xE7
    ctx->pc = 0x49ec5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)231);
    // 0x49ec60: 0x3084000c  andi        $a0, $a0, 0xC
    ctx->pc = 0x49ec60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x49ec64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x49ec64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x49ec68: 0x8e2021  addu        $a0, $a0, $t6
    ctx->pc = 0x49ec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x49ec6c: 0x29070100  slti        $a3, $t0, 0x100
    ctx->pc = 0x49ec6cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x49ec70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x49ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49ec74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49ec74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49ec78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49ec78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x49ec7c: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x49ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x49ec80: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x49ec80u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x49ec84: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x49ec84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x49ec88: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x49ec88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x49ec8c: 0xaa2818  mult        $a1, $a1, $t2
    ctx->pc = 0x49ec8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x49ec90: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x49ec90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49ec94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49ec98: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x49ec98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x49ec9c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49eca0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49eca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49eca4: 0xad2824  and         $a1, $a1, $t5
    ctx->pc = 0x49eca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 13));
    // 0x49eca8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x49eca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x49ecac: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x49ecacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x49ecb0: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x49ECB0u;
    {
        const bool branch_taken_0x49ecb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ECB0u;
        // 0x49ecb4: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ecb0) {
            ctx->pc = 0x49EC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ec58;
        }
    }
    ctx->pc = 0x49ECB8u;
    // 0x49ecb8: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x49ecb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x49ecbc: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x49ecbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ecc0: 0xc10f644  jal         func_43D910
    ctx->pc = 0x49ECC0u;
    SET_GPR_U32(ctx, 31, 0x49ECC8u);
    ctx->pc = 0x49ECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49ECC0u;
    // 0x49ecc4: 0x2485047f  addiu       $a1, $a0, 0x47F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1151));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x49ECC0u, 0x49ECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49ECC8u;
}
