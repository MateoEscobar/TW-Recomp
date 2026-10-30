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

// Function: sub_004D7E68
// Address: 0x4d7e68 - 0x4d86b0
void sub_004D7E68_0x4d7e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D7E68_0x4d7e68");
#endif

    switch (ctx->pc) {
        case 0x4d7f10u: goto label_4d7f10;
        case 0x4d7f80u: goto label_4d7f80;
        case 0x4d7fe8u: goto label_4d7fe8;
        case 0x4d8060u: goto label_4d8060;
        case 0x4d80d8u: goto label_4d80d8;
        case 0x4d8148u: goto label_4d8148;
        case 0x4d81b8u: goto label_4d81b8;
        case 0x4d8240u: goto label_4d8240;
        case 0x4d82c0u: goto label_4d82c0;
        case 0x4d8330u: goto label_4d8330;
        case 0x4d83a0u: goto label_4d83a0;
        case 0x4d8428u: goto label_4d8428;
        case 0x4d84a8u: goto label_4d84a8;
        case 0x4d8518u: goto label_4d8518;
        case 0x4d8588u: goto label_4d8588;
        case 0x4d8610u: goto label_4d8610;
        default: break;
    }

    ctx->pc = 0x4d7e68u;

    // 0x4d7e68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d7e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4d7e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d7e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d7e70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d7e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d7e74: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d7e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d7e78: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d7e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7e7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d7e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d7e80: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4d7e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7e84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d7e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d7e88: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4d7e88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d7e8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d7e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d7e90: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x4d7e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x4d7e94: 0x8e720014  lw          $s2, 0x14($s3)
    ctx->pc = 0x4d7e94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4d7e98: 0x8e8a0000  lw          $t2, 0x0($s4)
    ctx->pc = 0x4d7e98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4d7e9c: 0x8ead0000  lw          $t5, 0x0($s5)
    ctx->pc = 0x4d7e9cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4d7ea0: 0x8e6e0008  lw          $t6, 0x8($s3)
    ctx->pc = 0x4d7ea0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4d7ea4: 0x1477821  addu        $t7, $t2, $a3
    ctx->pc = 0x4d7ea4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x4d7ea8: 0x8e79000c  lw          $t9, 0xC($s3)
    ctx->pc = 0x4d7ea8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4d7eac: 0x1a84021  addu        $t0, $t5, $t0
    ctx->pc = 0x4d7eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x4d7eb0: 0x31c20001  andi        $v0, $t6, 0x1
    ctx->pc = 0x4d7eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x4d7eb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4D7EB4u;
    {
        const bool branch_taken_0x4d7eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7EB4u;
        // 0x4d7eb8: 0x8e710010  lw          $s1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7eb4) {
            ctx->pc = 0x4D7ECCu;
            goto label_4d7ecc;
        }
    }
    ctx->pc = 0x4D7EBCu;
    // 0x4d7ebc: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x4d7ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4d7ec0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4d7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4d7ec4: 0x1c27024  and         $t6, $t6, $v0
    ctx->pc = 0x4d7ec4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
    // 0x4d7ec8: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x4d7ec8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_4d7ecc:
    // 0x4d7ecc: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x4d7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4d7ed0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x4d7ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x4d7ed4: 0x104001e4  beqz        $v0, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x4D7ED4u;
    {
        const bool branch_taken_0x4d7ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7ED4u;
        // 0x4d7ed8: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7ed4) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7EDCu;
    // 0x4d7edc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d7edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d7ee0: 0x244261c0  addiu       $v0, $v0, 0x61C0
    ctx->pc = 0x4d7ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25024));
    // 0x4d7ee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d7ee8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4d7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d7eec: 0x800008  jr          $a0
    ctx->pc = 0x4D7EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4D7EF4u: goto label_4d7ef4;
            case 0x4D7F60u: goto label_4d7f60;
            case 0x4D7FCCu: goto label_4d7fcc;
            case 0x4D8044u: goto label_4d8044;
            case 0x4D80B8u: goto label_4d80b8;
            case 0x4D8128u: goto label_4d8128;
            case 0x4D8194u: goto label_4d8194;
            case 0x4D8220u: goto label_4d8220;
            case 0x4D82A0u: goto label_4d82a0;
            case 0x4D8310u: goto label_4d8310;
            case 0x4D837Cu: goto label_4d837c;
            case 0x4D8408u: goto label_4d8408;
            case 0x4D8484u: goto label_4d8484;
            case 0x4D84FCu: goto label_4d84fc;
            case 0x4D8568u: goto label_4d8568;
            case 0x4D85F0u: goto label_4d85f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D7EECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4D7EF4u;
label_4d7ef4:
    // 0x4d7ef4: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d7ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d7ef8: 0x104001db  beqz        $v0, . + 4 + (0x1DB << 2)
    ctx->pc = 0x4D7EF8u;
    {
        const bool branch_taken_0x4d7ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7EF8u;
        // 0x4d7efc: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7ef8) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7F00u;
    // 0x4d7f00: 0x104001d9  beqz        $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x4D7F00u;
    {
        const bool branch_taken_0x4d7f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7F00u;
        // 0x4d7f04: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7f00) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7F08u;
    // 0x4d7f08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d7f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d7f0c: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x4d7f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_4d7f10:
    // 0x4d7f10: 0xe27c3  sra         $a0, $t6, 31
    ctx->pc = 0x4d7f10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d7f14: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4d7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d7f18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4d7f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d7f1c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4d7f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4d7f20: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4d7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4d7f24: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x4d7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x4d7f28: 0x1c61824  and         $v1, $t6, $a2
    ctx->pc = 0x4d7f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d7f2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d7f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d7f30: 0x797021  addu        $t6, $v1, $t9
    ctx->pc = 0x4d7f30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x4d7f34: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4d7f34u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4d7f38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4d7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d7f3c: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d7f3cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d7f40: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d7f40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d7f44: 0x106001c8  beqz        $v1, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x4D7F44u;
    {
        const bool branch_taken_0x4d7f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7F44u;
        // 0x4d7f48: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7f44) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7F4Cu;
    // 0x4d7f4c: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d7f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d7f50: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4D7F50u;
    {
        const bool branch_taken_0x4d7f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d7f50) {
            ctx->pc = 0x4D7F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D7F50u;
            // 0x4d7f54: 0x91a20000  lbu         $v0, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D7F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d7f10;
        }
    }
    ctx->pc = 0x4D7F58u;
    // 0x4d7f58: 0x100001c4  b           . + 4 + (0x1C4 << 2)
    ctx->pc = 0x4D7F58u;
    {
        const bool branch_taken_0x4d7f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7F58u;
        // 0x4d7f5c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7f58) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D7F60u;
label_4d7f60:
    // 0x4d7f60: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d7f60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d7f64: 0x104001c0  beqz        $v0, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x4D7F64u;
    {
        const bool branch_taken_0x4d7f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7F64u;
        // 0x4d7f68: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7f64) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7F6Cu;
    // 0x4d7f6c: 0x104001be  beqz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x4D7F6Cu;
    {
        const bool branch_taken_0x4d7f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7F6Cu;
        // 0x4d7f70: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7f6c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7F74u;
    // 0x4d7f74: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d7f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d7f78: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4d7f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d7f7c: 0x0  nop
    ctx->pc = 0x4d7f7cu;
    // NOP
label_4d7f80:
    // 0x4d7f80: 0xe2fc3  sra         $a1, $t6, 31
    ctx->pc = 0x4d7f80u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d7f84: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d7f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d7f88: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d7f88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d7f8c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x4d7f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x4d7f90: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x4d7f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4d7f94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d7f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d7f98: 0x1c62024  and         $a0, $t6, $a2
    ctx->pc = 0x4d7f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d7f9c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d7f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d7fa0: 0x997021  addu        $t6, $a0, $t9
    ctx->pc = 0x4d7fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x4d7fa4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d7fa8: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d7fa8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d7fac: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d7facu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d7fb0: 0x106001ad  beqz        $v1, . + 4 + (0x1AD << 2)
    ctx->pc = 0x4D7FB0u;
    {
        const bool branch_taken_0x4d7fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7FB0u;
        // 0x4d7fb4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7fb0) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7FB8u;
    // 0x4d7fb8: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d7fb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d7fbc: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4D7FBCu;
    {
        const bool branch_taken_0x4d7fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d7fbc) {
            ctx->pc = 0x4D7FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D7FBCu;
            // 0x4d7fc0: 0x85a20000  lh          $v0, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D7F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d7f80;
        }
    }
    ctx->pc = 0x4D7FC4u;
    // 0x4d7fc4: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x4D7FC4u;
    {
        const bool branch_taken_0x4d7fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7FC4u;
        // 0x4d7fc8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7fc4) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D7FCCu;
label_4d7fcc:
    // 0x4d7fcc: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d7fccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d7fd0: 0x104001a5  beqz        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x4D7FD0u;
    {
        const bool branch_taken_0x4d7fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7FD0u;
        // 0x4d7fd4: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7fd0) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7FD8u;
    // 0x4d7fd8: 0x104001a3  beqz        $v0, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x4D7FD8u;
    {
        const bool branch_taken_0x4d7fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D7FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D7FD8u;
        // 0x4d7fdc: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d7fd8) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D7FE0u;
    // 0x4d7fe0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d7fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d7fe4: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x4d7fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_4d7fe8:
    // 0x4d7fe8: 0xe2fc3  sra         $a1, $t6, 31
    ctx->pc = 0x4d7fe8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d7fec: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4d7fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d7ff0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d7ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d7ff4: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x4d7ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4d7ff8: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4d7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4d7ffc: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x4d7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x4d8000: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x4d8000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4d8004: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d8004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d8008: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d8008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d800c: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x4d800cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x4d8010: 0x1c61024  and         $v0, $t6, $a2
    ctx->pc = 0x4d8010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d8014: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4d8014u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4d8018: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d8018u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d801c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d801cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8020: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d8020u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8024: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8024u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8028: 0x1060018f  beqz        $v1, . + 4 + (0x18F << 2)
    ctx->pc = 0x4D8028u;
    {
        const bool branch_taken_0x4d8028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8028u;
        // 0x4d802c: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8028) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8030u;
    // 0x4d8030: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d8030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8034: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4D8034u;
    {
        const bool branch_taken_0x4d8034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8034) {
            ctx->pc = 0x4D8038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8034u;
            // 0x4d8038: 0x91a20000  lbu         $v0, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D7FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d7fe8;
        }
    }
    ctx->pc = 0x4D803Cu;
    // 0x4d803c: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x4D803Cu;
    {
        const bool branch_taken_0x4d803c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D803Cu;
        // 0x4d8040: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d803c) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8044u;
label_4d8044:
    // 0x4d8044: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d8044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8048: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x4D8048u;
    {
        const bool branch_taken_0x4d8048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8048u;
        // 0x4d804c: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8048) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8050u;
    // 0x4d8050: 0x10400185  beqz        $v0, . + 4 + (0x185 << 2)
    ctx->pc = 0x4D8050u;
    {
        const bool branch_taken_0x4d8050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8050u;
        // 0x4d8054: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8050) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8058u;
    // 0x4d8058: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d8058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d805c: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4d805cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4d8060:
    // 0x4d8060: 0xe2fc3  sra         $a1, $t6, 31
    ctx->pc = 0x4d8060u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d8064: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4d8064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8068: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d8068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d806c: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x4d806cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4d8070: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x4d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x4d8074: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d8074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d8078: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x4d8078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4d807c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4d807cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4d8080: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4d8080u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4d8084: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x4d8084u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x4d8088: 0x1c61024  and         $v0, $t6, $a2
    ctx->pc = 0x4d8088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d808c: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d808cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d8090: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d8090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8094: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d8094u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8098: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8098u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d809c: 0x10600172  beqz        $v1, . + 4 + (0x172 << 2)
    ctx->pc = 0x4D809Cu;
    {
        const bool branch_taken_0x4d809c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D809Cu;
        // 0x4d80a0: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d809c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D80A4u;
    // 0x4d80a4: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d80a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d80a8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4D80A8u;
    {
        const bool branch_taken_0x4d80a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d80a8) {
            ctx->pc = 0x4D80ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D80A8u;
            // 0x4d80ac: 0x85a20000  lh          $v0, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d8060;
        }
    }
    ctx->pc = 0x4D80B0u;
    // 0x4d80b0: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x4D80B0u;
    {
        const bool branch_taken_0x4d80b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D80B0u;
        // 0x4d80b4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d80b0) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D80B8u;
label_4d80b8:
    // 0x4d80b8: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d80b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d80bc: 0x1040016a  beqz        $v0, . + 4 + (0x16A << 2)
    ctx->pc = 0x4D80BCu;
    {
        const bool branch_taken_0x4d80bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D80BCu;
        // 0x4d80c0: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d80bc) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D80C4u;
    // 0x4d80c4: 0x10400168  beqz        $v0, . + 4 + (0x168 << 2)
    ctx->pc = 0x4D80C4u;
    {
        const bool branch_taken_0x4d80c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D80C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D80C4u;
        // 0x4d80c8: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d80c4) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D80CCu;
    // 0x4d80cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d80ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d80d0: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x4d80d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d80d4: 0x0  nop
    ctx->pc = 0x4d80d4u;
    // NOP
label_4d80d8:
    // 0x4d80d8: 0xe27c3  sra         $a0, $t6, 31
    ctx->pc = 0x4d80d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d80dc: 0x91a50001  lbu         $a1, 0x1($t5)
    ctx->pc = 0x4d80dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x4d80e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4d80e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d80e4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4d80e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4d80e8: 0x1c61824  and         $v1, $t6, $a2
    ctx->pc = 0x4d80e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d80ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d80f0: 0x797021  addu        $t6, $v1, $t9
    ctx->pc = 0x4d80f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x4d80f4: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x4d80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x4d80f8: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x4d80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x4d80fc: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d80fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4d8100: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4d8100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8104: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d8104u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8108: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d810c: 0x10600156  beqz        $v1, . + 4 + (0x156 << 2)
    ctx->pc = 0x4D810Cu;
    {
        const bool branch_taken_0x4d810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D810Cu;
        // 0x4d8110: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d810c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8114u;
    // 0x4d8114: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d8114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8118: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4D8118u;
    {
        const bool branch_taken_0x4d8118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8118) {
            ctx->pc = 0x4D811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8118u;
            // 0x4d811c: 0x91a20000  lbu         $v0, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D80D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d80d8;
        }
    }
    ctx->pc = 0x4D8120u;
    // 0x4d8120: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x4D8120u;
    {
        const bool branch_taken_0x4d8120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8120u;
        // 0x4d8124: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8120) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8128u;
label_4d8128:
    // 0x4d8128: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d8128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d812c: 0x1040014e  beqz        $v0, . + 4 + (0x14E << 2)
    ctx->pc = 0x4D812Cu;
    {
        const bool branch_taken_0x4d812c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D812Cu;
        // 0x4d8130: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d812c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8134u;
    // 0x4d8134: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x4D8134u;
    {
        const bool branch_taken_0x4d8134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8134u;
        // 0x4d8138: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8134) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D813Cu;
    // 0x4d813c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d813cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d8140: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4d8140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d8144: 0x0  nop
    ctx->pc = 0x4d8144u;
    // NOP
label_4d8148:
    // 0x4d8148: 0xe27c3  sra         $a0, $t6, 31
    ctx->pc = 0x4d8148u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d814c: 0x85a50002  lh          $a1, 0x2($t5)
    ctx->pc = 0x4d814cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x4d8150: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4d8150u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d8154: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4d8154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4d8158: 0x1c61824  and         $v1, $t6, $a2
    ctx->pc = 0x4d8158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d815c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4d815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4d8160: 0x797021  addu        $t6, $v1, $t9
    ctx->pc = 0x4d8160u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x4d8164: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x4d8164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x4d8168: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4d8168u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4d816c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4d816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d8170: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d8170u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8174: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8174u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8178: 0x1060013b  beqz        $v1, . + 4 + (0x13B << 2)
    ctx->pc = 0x4D8178u;
    {
        const bool branch_taken_0x4d8178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8178u;
        // 0x4d817c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8178) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8180u;
    // 0x4d8180: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d8180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8184: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4D8184u;
    {
        const bool branch_taken_0x4d8184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8184) {
            ctx->pc = 0x4D8188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8184u;
            // 0x4d8188: 0x85a20000  lh          $v0, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d8148;
        }
    }
    ctx->pc = 0x4D818Cu;
    // 0x4d818c: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x4D818Cu;
    {
        const bool branch_taken_0x4d818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D818Cu;
        // 0x4d8190: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d818c) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8194u;
label_4d8194:
    // 0x4d8194: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d8194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8198: 0x10400133  beqz        $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x4D8198u;
    {
        const bool branch_taken_0x4d8198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8198u;
        // 0x4d819c: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8198) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D81A0u;
    // 0x4d81a0: 0x10400132  beqz        $v0, . + 4 + (0x132 << 2)
    ctx->pc = 0x4D81A0u;
    {
        const bool branch_taken_0x4d81a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D81A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D81A0u;
        // 0x4d81a4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d81a0) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D81A8u;
    // 0x4d81a8: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x4d81a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x4d81ac: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d81acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d81b0: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x4d81b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d81b4: 0x0  nop
    ctx->pc = 0x4d81b4u;
    // NOP
label_4d81b8:
    // 0x4d81b8: 0xe37c3  sra         $a2, $t6, 31
    ctx->pc = 0x4d81b8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d81bc: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4d81bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d81c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d81c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d81c4: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4d81c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4d81c8: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x4d81c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4d81cc: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x4d81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x4d81d0: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x4d81d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4d81d4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d81d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d81d8: 0x1c71824  and         $v1, $t6, $a3
    ctx->pc = 0x4d81d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 7));
    // 0x4d81dc: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4d81dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4d81e0: 0x797021  addu        $t6, $v1, $t9
    ctx->pc = 0x4d81e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x4d81e4: 0x91a20001  lbu         $v0, 0x1($t5)
    ctx->pc = 0x4d81e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x4d81e8: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4d81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4d81ec: 0x214c0  sll         $v0, $v0, 19
    ctx->pc = 0x4d81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
    // 0x4d81f0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d81f4: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x4d81f4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x4d81f8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d81fc: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d81fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8200: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8204: 0x10600118  beqz        $v1, . + 4 + (0x118 << 2)
    ctx->pc = 0x4D8204u;
    {
        const bool branch_taken_0x4d8204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8204u;
        // 0x4d8208: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8204) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D820Cu;
    // 0x4d820c: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d820cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8210: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4D8210u;
    {
        const bool branch_taken_0x4d8210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8210) {
            ctx->pc = 0x4D8214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8210u;
            // 0x4d8214: 0x91a20000  lbu         $v0, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D81B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d81b8;
        }
    }
    ctx->pc = 0x4D8218u;
    // 0x4d8218: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x4D8218u;
    {
        const bool branch_taken_0x4d8218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8218u;
        // 0x4d821c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8218) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8220u;
label_4d8220:
    // 0x4d8220: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d8220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8224: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x4D8224u;
    {
        const bool branch_taken_0x4d8224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8224u;
        // 0x4d8228: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8224) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D822Cu;
    // 0x4d822c: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x4D822Cu;
    {
        const bool branch_taken_0x4d822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D822Cu;
        // 0x4d8230: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d822c) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8234u;
    // 0x4d8234: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x4d8234u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x4d8238: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d8238u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d823c: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4d823cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4d8240:
    // 0x4d8240: 0xe37c3  sra         $a2, $t6, 31
    ctx->pc = 0x4d8240u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d8244: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4d8244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8248: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d8248u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d824c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x4d824cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x4d8250: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x4d8250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4d8254: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4d8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4d8258: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x4d8258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4d825c: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4d825cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4d8260: 0x1c71824  and         $v1, $t6, $a3
    ctx->pc = 0x4d8260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & GPR_U64(ctx, 7));
    // 0x4d8264: 0x797021  addu        $t6, $v1, $t9
    ctx->pc = 0x4d8264u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x4d8268: 0x85a20002  lh          $v0, 0x2($t5)
    ctx->pc = 0x4d8268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x4d826c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x4d826cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x4d8270: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d8270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d8274: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x4d8274u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x4d8278: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d8278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d827c: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d827cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8280: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8280u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8284: 0x106000f8  beqz        $v1, . + 4 + (0xF8 << 2)
    ctx->pc = 0x4D8284u;
    {
        const bool branch_taken_0x4d8284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8284u;
        // 0x4d8288: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8284) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D828Cu;
    // 0x4d828c: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d828cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8290: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4D8290u;
    {
        const bool branch_taken_0x4d8290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8290) {
            ctx->pc = 0x4D8294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8290u;
            // 0x4d8294: 0x85a20000  lh          $v0, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d8240;
        }
    }
    ctx->pc = 0x4D8298u;
    // 0x4d8298: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x4D8298u;
    {
        const bool branch_taken_0x4d8298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D829Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8298u;
        // 0x4d829c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8298) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D82A0u;
label_4d82a0:
    // 0x4d82a0: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d82a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d82a4: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x4D82A4u;
    {
        const bool branch_taken_0x4d82a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D82A4u;
        // 0x4d82a8: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d82a4) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D82ACu;
    // 0x4d82ac: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x4D82ACu;
    {
        const bool branch_taken_0x4d82ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D82ACu;
        // 0x4d82b0: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d82ac) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D82B4u;
    // 0x4d82b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d82b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d82b8: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x4d82b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d82bc: 0x0  nop
    ctx->pc = 0x4d82bcu;
    // NOP
label_4d82c0:
    // 0x4d82c0: 0xe27c3  sra         $a0, $t6, 31
    ctx->pc = 0x4d82c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d82c4: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4d82c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d82c8: 0x1c61024  and         $v0, $t6, $a2
    ctx->pc = 0x4d82c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d82cc: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x4d82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x4d82d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4d82d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4d82d4: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x4d82d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4d82d8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x4d82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x4d82dc: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d82dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d82e0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4d82e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4d82e4: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4d82e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4d82e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4d82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4d82ec: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d82ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d82f0: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d82f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d82f4: 0x106000dc  beqz        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x4D82F4u;
    {
        const bool branch_taken_0x4d82f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D82F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D82F4u;
        // 0x4d82f8: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d82f4) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D82FCu;
    // 0x4d82fc: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d82fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8300: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4D8300u;
    {
        const bool branch_taken_0x4d8300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8300) {
            ctx->pc = 0x4D8304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8300u;
            // 0x4d8304: 0x91a30000  lbu         $v1, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D82C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d82c0;
        }
    }
    ctx->pc = 0x4D8308u;
    // 0x4d8308: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x4D8308u;
    {
        const bool branch_taken_0x4d8308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8308u;
        // 0x4d830c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8308) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8310u;
label_4d8310:
    // 0x4d8310: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d8310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8314: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x4D8314u;
    {
        const bool branch_taken_0x4d8314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8314u;
        // 0x4d8318: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8314) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D831Cu;
    // 0x4d831c: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x4D831Cu;
    {
        const bool branch_taken_0x4d831c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D831Cu;
        // 0x4d8320: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d831c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8324u;
    // 0x4d8324: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d8324u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d8328: 0x85a50000  lh          $a1, 0x0($t5)
    ctx->pc = 0x4d8328u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d832c: 0x0  nop
    ctx->pc = 0x4d832cu;
    // NOP
label_4d8330:
    // 0x4d8330: 0xe1fc3  sra         $v1, $t6, 31
    ctx->pc = 0x4d8330u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d8334: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4d8334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8338: 0x1c61024  and         $v0, $t6, $a2
    ctx->pc = 0x4d8338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d833c: 0xb12818  mult        $a1, $a1, $s1
    ctx->pc = 0x4d833cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4d8340: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d8340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4d8344: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4d8344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x4d8348: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d8348u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d834c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4d834cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4d8350: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4d8350u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4d8354: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d8354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d8358: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d8358u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d835c: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d835cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8360: 0x106000c1  beqz        $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x4D8360u;
    {
        const bool branch_taken_0x4d8360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8360u;
        // 0x4d8364: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8360) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8368u;
    // 0x4d8368: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d8368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d836c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4D836Cu;
    {
        const bool branch_taken_0x4d836c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d836c) {
            ctx->pc = 0x4D8370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D836Cu;
            // 0x4d8370: 0x85a50000  lh          $a1, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d8330;
        }
    }
    ctx->pc = 0x4D8374u;
    // 0x4d8374: 0x100000bd  b           . + 4 + (0xBD << 2)
    ctx->pc = 0x4D8374u;
    {
        const bool branch_taken_0x4d8374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8374u;
        // 0x4d8378: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8374) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D837Cu;
label_4d837c:
    // 0x4d837c: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d837cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8380: 0x104000b9  beqz        $v0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x4D8380u;
    {
        const bool branch_taken_0x4d8380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8380u;
        // 0x4d8384: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8380) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8388u;
    // 0x4d8388: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x4D8388u;
    {
        const bool branch_taken_0x4d8388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8388u;
        // 0x4d838c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8388) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8390u;
    // 0x4d8390: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x4d8390u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x4d8394: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d8394u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d8398: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x4d8398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d839c: 0x0  nop
    ctx->pc = 0x4d839cu;
    // NOP
label_4d83a0:
    // 0x4d83a0: 0xe37c3  sra         $a2, $t6, 31
    ctx->pc = 0x4d83a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d83a4: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4d83a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d83a8: 0x1c71024  and         $v0, $t6, $a3
    ctx->pc = 0x4d83a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 7));
    // 0x4d83ac: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x4d83acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x4d83b0: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d83b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d83b4: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x4d83b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4d83b8: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x4d83b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4d83bc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d83bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d83c0: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x4d83c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4d83c4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4d83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4d83c8: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4d83c8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4d83cc: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x4d83ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d83d0: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4d83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4d83d4: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x4d83d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d83d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d83dc: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x4d83dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x4d83e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d83e4: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d83e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d83e8: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d83e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d83ec: 0x1060009e  beqz        $v1, . + 4 + (0x9E << 2)
    ctx->pc = 0x4D83ECu;
    {
        const bool branch_taken_0x4d83ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D83ECu;
        // 0x4d83f0: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d83ec) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D83F4u;
    // 0x4d83f4: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d83f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d83f8: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4D83F8u;
    {
        const bool branch_taken_0x4d83f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d83f8) {
            ctx->pc = 0x4D83FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D83F8u;
            // 0x4d83fc: 0x91a30000  lbu         $v1, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D83A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d83a0;
        }
    }
    ctx->pc = 0x4D8400u;
    // 0x4d8400: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x4D8400u;
    {
        const bool branch_taken_0x4d8400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8400u;
        // 0x4d8404: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8400) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8408u;
label_4d8408:
    // 0x4d8408: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d8408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d840c: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x4D840Cu;
    {
        const bool branch_taken_0x4d840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D840Cu;
        // 0x4d8410: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d840c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8414u;
    // 0x4d8414: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x4D8414u;
    {
        const bool branch_taken_0x4d8414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8414u;
        // 0x4d8418: 0x3c187fff  lui         $t8, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8414) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D841Cu;
    // 0x4d841c: 0x3718ffff  ori         $t8, $t8, 0xFFFF
    ctx->pc = 0x4d841cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)65535);
    // 0x4d8420: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x4d8420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4d8424: 0x0  nop
    ctx->pc = 0x4d8424u;
    // NOP
label_4d8428:
    // 0x4d8428: 0xe2fc3  sra         $a1, $t6, 31
    ctx->pc = 0x4d8428u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d842c: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x4d842cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8430: 0x1d81024  and         $v0, $t6, $t8
    ctx->pc = 0x4d8430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 24));
    // 0x4d8434: 0x926018  mult        $t4, $a0, $s2
    ctx->pc = 0x4d8434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4d8438: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x4d8438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4d843c: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x4d843cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4d8440: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d8440u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d8444: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x4d8444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4d8448: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d8448u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d844c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x4d844cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x4d8450: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x4d8450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4d8454: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x4d8454u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x4d8458: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x4d8458u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x4d845c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d845cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8460: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d8460u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8464: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8468: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x4D8468u;
    {
        const bool branch_taken_0x4d8468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8468u;
        // 0x4d846c: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8468) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8470u;
    // 0x4d8470: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d8470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8474: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4D8474u;
    {
        const bool branch_taken_0x4d8474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8474) {
            ctx->pc = 0x4D8478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8474u;
            // 0x4d8478: 0x85a40000  lh          $a0, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d8428;
        }
    }
    ctx->pc = 0x4D847Cu;
    // 0x4d847c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x4D847Cu;
    {
        const bool branch_taken_0x4d847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D847Cu;
        // 0x4d8480: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d847c) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8484u;
label_4d8484:
    // 0x4d8484: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x4d8484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x4d8488: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8488u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d848c: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x4D848Cu;
    {
        const bool branch_taken_0x4d848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D848Cu;
        // 0x4d8490: 0x239c0  sll         $a3, $v0, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d848c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8494u;
    // 0x4d8494: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d8494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8498: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x4D8498u;
    {
        const bool branch_taken_0x4d8498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8498u;
        // 0x4d849c: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8498) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D84A0u;
    // 0x4d84a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d84a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d84a4: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x4d84a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_4d84a8:
    // 0x4d84a8: 0xe2fc3  sra         $a1, $t6, 31
    ctx->pc = 0x4d84a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d84ac: 0x91a40001  lbu         $a0, 0x1($t5)
    ctx->pc = 0x4d84acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x4d84b0: 0x1c61024  and         $v0, $t6, $a2
    ctx->pc = 0x4d84b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d84b4: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x4d84b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4d84b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d84b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d84bc: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x4d84bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4d84c0: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x4d84c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4d84c4: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d84c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d84c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4d84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d84cc: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4d84ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4d84d0: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d84d4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d84d8: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d84d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d84dc: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d84dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d84e0: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x4D84E0u;
    {
        const bool branch_taken_0x4d84e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D84E0u;
        // 0x4d84e4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d84e0) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D84E8u;
    // 0x4d84e8: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d84e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d84ec: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4D84ECu;
    {
        const bool branch_taken_0x4d84ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d84ec) {
            ctx->pc = 0x4D84F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D84ECu;
            // 0x4d84f0: 0x91a30000  lbu         $v1, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D84A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d84a8;
        }
    }
    ctx->pc = 0x4D84F4u;
    // 0x4d84f4: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x4D84F4u;
    {
        const bool branch_taken_0x4d84f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D84F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D84F4u;
        // 0x4d84f8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d84f4) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D84FCu;
label_4d84fc:
    // 0x4d84fc: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d84fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8500: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x4D8500u;
    {
        const bool branch_taken_0x4d8500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8500u;
        // 0x4d8504: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8500) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8508u;
    // 0x4d8508: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x4D8508u;
    {
        const bool branch_taken_0x4d8508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8508u;
        // 0x4d850c: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8508) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8510u;
    // 0x4d8510: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d8510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d8514: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4d8514u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4d8518:
    // 0x4d8518: 0xe2fc3  sra         $a1, $t6, 31
    ctx->pc = 0x4d8518u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d851c: 0x85a40002  lh          $a0, 0x2($t5)
    ctx->pc = 0x4d851cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x4d8520: 0x1c61024  and         $v0, $t6, $a2
    ctx->pc = 0x4d8520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 6));
    // 0x4d8524: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x4d8524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4d8528: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4d8528u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4d852c: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x4d852cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4d8530: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x4d8530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4d8534: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d8534u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d8538: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4d8538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d853c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d853cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d8540: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d8540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4d8544: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d8544u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8548: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8548u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d854c: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x4D854Cu;
    {
        const bool branch_taken_0x4d854c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D854Cu;
        // 0x4d8550: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d854c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8554u;
    // 0x4d8554: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d8554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8558: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4D8558u;
    {
        const bool branch_taken_0x4d8558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8558) {
            ctx->pc = 0x4D855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8558u;
            // 0x4d855c: 0x85a30000  lh          $v1, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d8518;
        }
    }
    ctx->pc = 0x4D8560u;
    // 0x4d8560: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4D8560u;
    {
        const bool branch_taken_0x4d8560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8560u;
        // 0x4d8564: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8560) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8568u;
label_4d8568:
    // 0x4d8568: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d8568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d856c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x4D856Cu;
    {
        const bool branch_taken_0x4d856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D856Cu;
        // 0x4d8570: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d856c) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D8574u;
    // 0x4d8574: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x4D8574u;
    {
        const bool branch_taken_0x4d8574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8574u;
        // 0x4d8578: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8574) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D857Cu;
    // 0x4d857c: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x4d857cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x4d8580: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d8580u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d8584: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x4d8584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_4d8588:
    // 0x4d8588: 0xe37c3  sra         $a2, $t6, 31
    ctx->pc = 0x4d8588u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d858c: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4d858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8590: 0x1c71024  and         $v0, $t6, $a3
    ctx->pc = 0x4d8590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 7));
    // 0x4d8594: 0x2463ff80  addiu       $v1, $v1, -0x80
    ctx->pc = 0x4d8594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967168));
    // 0x4d8598: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d8598u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d859c: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x4d859cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4d85a0: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x4d85a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4d85a4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d85a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d85a8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x4d85a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4d85ac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4d85acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4d85b0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4d85b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4d85b4: 0x91a20001  lbu         $v0, 0x1($t5)
    ctx->pc = 0x4d85b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x4d85b8: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4d85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x4d85bc: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x4d85bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d85c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d85c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d85c4: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x4d85c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x4d85c8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d85c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d85cc: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d85ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d85d0: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d85d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d85d4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x4D85D4u;
    {
        const bool branch_taken_0x4d85d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D85D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D85D4u;
        // 0x4d85d8: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d85d4) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D85DCu;
    // 0x4d85dc: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d85dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d85e0: 0x5440ffe9  bnel        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4D85E0u;
    {
        const bool branch_taken_0x4d85e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d85e0) {
            ctx->pc = 0x4D85E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D85E0u;
            // 0x4d85e4: 0x91a30000  lbu         $v1, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d8588;
        }
    }
    ctx->pc = 0x4D85E8u;
    // 0x4d85e8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4D85E8u;
    {
        const bool branch_taken_0x4d85e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D85ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D85E8u;
        // 0x4d85ec: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d85e8) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D85F0u;
label_4d85f0:
    // 0x4d85f0: 0x1a8102b  sltu        $v0, $t5, $t0
    ctx->pc = 0x4d85f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d85f4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x4D85F4u;
    {
        const bool branch_taken_0x4d85f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D85F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D85F4u;
        // 0x4d85f8: 0x14f102b  sltu        $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d85f4) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D85FCu;
    // 0x4d85fc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4D85FCu;
    {
        const bool branch_taken_0x4d85fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D85FCu;
        // 0x4d8600: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d85fc) {
            ctx->pc = 0x4D866Cu;
            goto label_4d866c;
        }
    }
    ctx->pc = 0x4D8604u;
    // 0x4d8604: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x4d8604u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x4d8608: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4d8608u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4d860c: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x4d860cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4d8610:
    // 0x4d8610: 0xe37c3  sra         $a2, $t6, 31
    ctx->pc = 0x4d8610u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 14), 31));
    // 0x4d8614: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4d8614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d8618: 0x1c71024  and         $v0, $t6, $a3
    ctx->pc = 0x4d8618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 7));
    // 0x4d861c: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x4d861cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4d8620: 0x597021  addu        $t6, $v0, $t9
    ctx->pc = 0x4d8620u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x4d8624: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x4d8624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x4d8628: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4d8628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4d862c: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x4d862cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x4d8630: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4d8630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4d8634: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4d8634u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4d8638: 0x85a20002  lh          $v0, 0x2($t5)
    ctx->pc = 0x4d8638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x4d863c: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x4d863cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4d8640: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4d8640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4d8644: 0xad450004  sw          $a1, 0x4($t2)
    ctx->pc = 0x4d8644u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 5));
    // 0x4d8648: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4d8648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4d864c: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x4d864cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x4d8650: 0x1a8182b  sltu        $v1, $t5, $t0
    ctx->pc = 0x4d8650u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4d8654: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4D8654u;
    {
        const bool branch_taken_0x4d8654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8654u;
        // 0x4d8658: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8654) {
            ctx->pc = 0x4D8668u;
            goto label_4d8668;
        }
    }
    ctx->pc = 0x4D865Cu;
    // 0x4d865c: 0x14f102b  sltu        $v0, $t2, $t7
    ctx->pc = 0x4d865cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x4d8660: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4D8660u;
    {
        const bool branch_taken_0x4d8660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d8660) {
            ctx->pc = 0x4D8664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D8660u;
            // 0x4d8664: 0x85a40000  lh          $a0, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D8610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d8610;
        }
    }
    ctx->pc = 0x4D8668u;
label_4d8668:
    // 0x4d8668: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4d8668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4d866c:
    // 0x4d866c: 0x10d182b  sltu        $v1, $t0, $t5
    ctx->pc = 0x4d866cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x4d8670: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4D8670u;
    {
        const bool branch_taken_0x4d8670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D8674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D8670u;
        // 0x4d8674: 0x1c27024  and         $t6, $t6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d8670) {
            ctx->pc = 0x4D8680u;
            goto label_4d8680;
        }
    }
    ctx->pc = 0x4D8678u;
    // 0x4d8678: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x4d8678u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d867c: 0x35ce0001  ori         $t6, $t6, 0x1
    ctx->pc = 0x4d867cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)1);
label_4d8680:
    // 0x4d8680: 0xae8a0000  sw          $t2, 0x0($s4)
    ctx->pc = 0x4d8680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 10));
    // 0x4d8684: 0xaead0000  sw          $t5, 0x0($s5)
    ctx->pc = 0x4d8684u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 13));
    // 0x4d8688: 0xae6e0008  sw          $t6, 0x8($s3)
    ctx->pc = 0x4d8688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 14));
    // 0x4d868c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d868cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d8690: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d8690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d8694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d8694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d8698: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d8698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d869c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d869cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d86a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d86a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d86a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4D86A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D86A4u;
        // 0x4d86a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D86A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D86ACu;
    // 0x4d86ac: 0x0  nop
    ctx->pc = 0x4d86acu;
    // NOP
    ctx->pc = 0x4d86b0u;
}
