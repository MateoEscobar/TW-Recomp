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

// Function: sub_00231090
// Address: 0x231090 - 0x231174
void sub_00231090_0x231090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231090_0x231090");
#endif

    switch (ctx->pc) {
        case 0x231104u: goto label_231104;
        default: break;
    }

    ctx->pc = 0x231090u;

    // 0x231090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x231090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x231094: 0x2ca2002d  sltiu       $v0, $a1, 0x2D
    ctx->pc = 0x231094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
    // 0x231098: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x231098u;
    {
        const bool branch_taken_0x231098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231098u;
        // 0x23109c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231098) {
            ctx->pc = 0x231184u;
            return;
        }
    }
    ctx->pc = 0x2310A0u;
    // 0x2310a0: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2310a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x2310a4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2310a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2310a8: 0x2442c170  addiu       $v0, $v0, -0x3E90
    ctx->pc = 0x2310a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951280));
    // 0x2310ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2310acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2310b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2310b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2310b4: 0x800008  jr          $a0
    ctx->pc = 0x2310B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2310BCu: goto label_2310bc;
            case 0x2310C4u: goto label_2310c4;
            case 0x2310CCu: goto label_2310cc;
            case 0x2310D4u: goto label_2310d4;
            case 0x2310DCu: goto label_2310dc;
            case 0x2310E4u: goto label_2310e4;
            case 0x2310ECu: goto label_2310ec;
            case 0x2310F4u: goto label_2310f4;
            case 0x23111Cu: goto label_23111c;
            case 0x231124u: goto label_231124;
            case 0x23112Cu: goto label_23112c;
            case 0x231134u: goto label_231134;
            case 0x23113Cu: goto label_23113c;
            case 0x231144u: goto label_231144;
            case 0x23114Cu: goto label_23114c;
            case 0x231154u: goto label_231154;
            case 0x23115Cu: goto label_23115c;
            case 0x231164u: goto label_231164;
            case 0x23116Cu: goto label_23116c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2310B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2310BCu;
label_2310bc:
    // 0x2310bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2310BCu;
    {
        const bool branch_taken_0x2310bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310BCu;
        // 0x2310c0: 0x24020039  addiu       $v0, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310bc) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x2310C4u;
label_2310c4:
    // 0x2310c4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2310C4u;
    {
        const bool branch_taken_0x2310c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310C4u;
        // 0x2310c8: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310c4) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x2310CCu;
label_2310cc:
    // 0x2310cc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2310CCu;
    {
        const bool branch_taken_0x2310cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310CCu;
        // 0x2310d0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310cc) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x2310D4u;
label_2310d4:
    // 0x2310d4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2310D4u;
    {
        const bool branch_taken_0x2310d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310D4u;
        // 0x2310d8: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310d4) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x2310DCu;
label_2310dc:
    // 0x2310dc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2310DCu;
    {
        const bool branch_taken_0x2310dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310DCu;
        // 0x2310e0: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310dc) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x2310E4u;
label_2310e4:
    // 0x2310e4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2310E4u;
    {
        const bool branch_taken_0x2310e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310E4u;
        // 0x2310e8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310e4) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x2310ECu;
label_2310ec:
    // 0x2310ec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2310ECu;
    {
        const bool branch_taken_0x2310ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310ECu;
        // 0x2310f0: 0x24020036  addiu       $v0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310ec) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x2310F4u;
label_2310f4:
    // 0x2310f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2310f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2310f8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2310f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2310fc: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2310FCu;
    SET_GPR_U32(ctx, 31, 0x231104u);
    ctx->pc = 0x231100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2310FCu;
    // 0x231100: 0x2484b8a8  addiu       $a0, $a0, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2310FCu, 0x231104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231104u;
label_231104:
    // 0x231104: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x231104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x231108: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x231108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x23110c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x23110cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x231110: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x231110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x231114: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x231114u;
    {
        const bool branch_taken_0x231114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231114u;
        // 0x231118: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231114) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x23111Cu;
label_23111c:
    // 0x23111c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x23111Cu;
    {
        const bool branch_taken_0x23111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23111Cu;
        // 0x231120: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23111c) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x231124u;
label_231124:
    // 0x231124: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x231124u;
    {
        const bool branch_taken_0x231124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231124u;
        // 0x231128: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231124) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x23112Cu;
label_23112c:
    // 0x23112c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x23112Cu;
    {
        const bool branch_taken_0x23112c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23112Cu;
        // 0x231130: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23112c) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x231134u;
label_231134:
    // 0x231134: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x231134u;
    {
        const bool branch_taken_0x231134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231134u;
        // 0x231138: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231134) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x23113Cu;
label_23113c:
    // 0x23113c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23113Cu;
    {
        const bool branch_taken_0x23113c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23113Cu;
        // 0x231140: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23113c) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x231144u;
label_231144:
    // 0x231144: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x231144u;
    {
        const bool branch_taken_0x231144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231144u;
        // 0x231148: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231144) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x23114Cu;
label_23114c:
    // 0x23114c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23114Cu;
    {
        const bool branch_taken_0x23114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23114Cu;
        // 0x231150: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23114c) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x231154u;
label_231154:
    // 0x231154: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x231154u;
    {
        const bool branch_taken_0x231154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231154u;
        // 0x231158: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231154) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x23115Cu;
label_23115c:
    // 0x23115c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23115Cu;
    {
        const bool branch_taken_0x23115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23115Cu;
        // 0x231160: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23115c) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x231164u;
label_231164:
    // 0x231164: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x231164u;
    {
        const bool branch_taken_0x231164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231164u;
        // 0x231168: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231164) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x23116Cu;
label_23116c:
    // 0x23116c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23116Cu;
    {
        const bool branch_taken_0x23116c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23116Cu;
        // 0x231170: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23116c) {
            ctx->pc = 0x231188u;
            return;
        }
    }
    ctx->pc = 0x231174u;
}
