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

// Function: sub_001AB930
// Address: 0x1ab930 - 0x1aba58
void sub_001AB930_0x1ab930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB930_0x1ab930");
#endif

    switch (ctx->pc) {
        case 0x1ab930u: goto label_1ab930;
        case 0x1ab934u: goto label_1ab934;
        case 0x1ab938u: goto label_1ab938;
        case 0x1ab93cu: goto label_1ab93c;
        case 0x1ab940u: goto label_1ab940;
        case 0x1ab944u: goto label_1ab944;
        case 0x1ab948u: goto label_1ab948;
        case 0x1ab94cu: goto label_1ab94c;
        case 0x1ab950u: goto label_1ab950;
        case 0x1ab954u: goto label_1ab954;
        case 0x1ab958u: goto label_1ab958;
        case 0x1ab95cu: goto label_1ab95c;
        case 0x1ab960u: goto label_1ab960;
        case 0x1ab964u: goto label_1ab964;
        case 0x1ab968u: goto label_1ab968;
        case 0x1ab96cu: goto label_1ab96c;
        case 0x1ab970u: goto label_1ab970;
        case 0x1ab974u: goto label_1ab974;
        case 0x1ab978u: goto label_1ab978;
        case 0x1ab97cu: goto label_1ab97c;
        case 0x1ab980u: goto label_1ab980;
        case 0x1ab984u: goto label_1ab984;
        case 0x1ab988u: goto label_1ab988;
        case 0x1ab98cu: goto label_1ab98c;
        case 0x1ab990u: goto label_1ab990;
        case 0x1ab994u: goto label_1ab994;
        case 0x1ab998u: goto label_1ab998;
        case 0x1ab99cu: goto label_1ab99c;
        case 0x1ab9a0u: goto label_1ab9a0;
        case 0x1ab9a4u: goto label_1ab9a4;
        case 0x1ab9a8u: goto label_1ab9a8;
        case 0x1ab9acu: goto label_1ab9ac;
        case 0x1ab9b0u: goto label_1ab9b0;
        case 0x1ab9b4u: goto label_1ab9b4;
        case 0x1ab9b8u: goto label_1ab9b8;
        case 0x1ab9bcu: goto label_1ab9bc;
        case 0x1ab9c0u: goto label_1ab9c0;
        case 0x1ab9c4u: goto label_1ab9c4;
        case 0x1ab9c8u: goto label_1ab9c8;
        case 0x1ab9ccu: goto label_1ab9cc;
        case 0x1ab9d0u: goto label_1ab9d0;
        case 0x1ab9d4u: goto label_1ab9d4;
        case 0x1ab9d8u: goto label_1ab9d8;
        case 0x1ab9dcu: goto label_1ab9dc;
        case 0x1ab9e0u: goto label_1ab9e0;
        case 0x1ab9e4u: goto label_1ab9e4;
        case 0x1ab9e8u: goto label_1ab9e8;
        case 0x1ab9ecu: goto label_1ab9ec;
        case 0x1ab9f0u: goto label_1ab9f0;
        case 0x1ab9f4u: goto label_1ab9f4;
        case 0x1ab9f8u: goto label_1ab9f8;
        case 0x1ab9fcu: goto label_1ab9fc;
        case 0x1aba00u: goto label_1aba00;
        case 0x1aba04u: goto label_1aba04;
        case 0x1aba08u: goto label_1aba08;
        case 0x1aba0cu: goto label_1aba0c;
        case 0x1aba10u: goto label_1aba10;
        case 0x1aba14u: goto label_1aba14;
        case 0x1aba18u: goto label_1aba18;
        case 0x1aba1cu: goto label_1aba1c;
        case 0x1aba20u: goto label_1aba20;
        case 0x1aba24u: goto label_1aba24;
        case 0x1aba28u: goto label_1aba28;
        case 0x1aba2cu: goto label_1aba2c;
        case 0x1aba30u: goto label_1aba30;
        case 0x1aba34u: goto label_1aba34;
        case 0x1aba38u: goto label_1aba38;
        case 0x1aba3cu: goto label_1aba3c;
        case 0x1aba40u: goto label_1aba40;
        case 0x1aba44u: goto label_1aba44;
        case 0x1aba48u: goto label_1aba48;
        case 0x1aba4cu: goto label_1aba4c;
        case 0x1aba50u: goto label_1aba50;
        case 0x1aba54u: goto label_1aba54;
        default: break;
    }

    ctx->pc = 0x1ab930u;

label_1ab930:
    // 0x1ab930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ab930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1ab934:
    // 0x1ab934: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ab934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1ab938:
    // 0x1ab938: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ab938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1ab93c:
    // 0x1ab93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ab93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ab940:
    // 0x1ab940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ab940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ab944:
    // 0x1ab944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ab948:
    // 0x1ab948: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab94c:
    // 0x1ab94c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1ab94cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1ab950:
    // 0x1ab950: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1ab950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1ab954:
    // 0x1ab954: 0x40f809  jalr        $v0
label_1ab958:
    if (ctx->pc == 0x1AB958u) {
        ctx->pc = 0x1AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB954u;
        // 0x1ab958: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB95Cu;
        goto label_1ab95c;
    }
    ctx->pc = 0x1AB954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB95Cu);
        ctx->pc = 0x1AB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB954u;
        // 0x1ab958: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB954u, 0x1AB95Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB95Cu;
label_1ab95c:
    // 0x1ab95c: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
label_1ab960:
    if (ctx->pc == 0x1AB960u) {
        ctx->pc = 0x1AB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB95Cu;
        // 0x1ab960: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB964u;
        goto label_1ab964;
    }
    ctx->pc = 0x1AB95Cu;
    {
        const bool branch_taken_0x1ab95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab95c) {
            ctx->pc = 0x1AB960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB95Cu;
            // 0x1ab960: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABA44u;
            goto label_1aba44;
        }
    }
    ctx->pc = 0x1AB964u;
label_1ab964:
    // 0x1ab964: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x1ab964u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ab968:
    // 0x1ab968: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
label_1ab96c:
    if (ctx->pc == 0x1AB96Cu) {
        ctx->pc = 0x1AB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB968u;
        // 0x1ab96c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB970u;
        goto label_1ab970;
    }
    ctx->pc = 0x1AB968u;
    {
        const bool branch_taken_0x1ab968 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB968u;
        // 0x1ab96c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab968) {
            ctx->pc = 0x1AB9BCu;
            goto label_1ab9bc;
        }
    }
    ctx->pc = 0x1AB970u;
label_1ab970:
    // 0x1ab970: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1ab970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1ab974:
    // 0x1ab974: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1ab974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_1ab978:
    // 0x1ab978: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1ab978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1ab97c:
    // 0x1ab97c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ab97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1ab980:
    // 0x1ab980: 0x40f809  jalr        $v0
label_1ab984:
    if (ctx->pc == 0x1AB984u) {
        ctx->pc = 0x1AB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB980u;
        // 0x1ab984: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB988u;
        goto label_1ab988;
    }
    ctx->pc = 0x1AB980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AB988u);
        ctx->pc = 0x1AB984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB980u;
        // 0x1ab984: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB980u, 0x1AB988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB988u;
label_1ab988:
    // 0x1ab988: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1ab988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ab98c:
    // 0x1ab98c: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1ab98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1ab990:
    // 0x1ab990: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ab990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1ab994:
    // 0x1ab994: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1ab994u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_1ab998:
    // 0x1ab998: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1ab998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1ab99c:
    // 0x1ab99c: 0x60f809  jalr        $v1
label_1ab9a0:
    if (ctx->pc == 0x1AB9A0u) {
        ctx->pc = 0x1AB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB99Cu;
        // 0x1ab9a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9A4u;
        goto label_1ab9a4;
    }
    ctx->pc = 0x1AB99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB9A4u);
        ctx->pc = 0x1AB9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB99Cu;
        // 0x1ab9a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB99Cu, 0x1AB9A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB9A4u;
label_1ab9a4:
    // 0x1ab9a4: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x1ab9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1ab9a8:
    // 0x1ab9a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ab9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ab9ac:
    // 0x1ab9ac: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1ab9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1ab9b0:
    // 0x1ab9b0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1ab9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1ab9b4:
    // 0x1ab9b4: 0x60f809  jalr        $v1
label_1ab9b8:
    if (ctx->pc == 0x1AB9B8u) {
        ctx->pc = 0x1AB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9B4u;
        // 0x1ab9b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9BCu;
        goto label_1ab9bc;
    }
    ctx->pc = 0x1AB9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB9BCu);
        ctx->pc = 0x1AB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9B4u;
        // 0x1ab9b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB9B4u, 0x1AB9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB9BCu;
label_1ab9bc:
    // 0x1ab9bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab9c0:
    // 0x1ab9c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ab9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ab9c4:
    // 0x1ab9c4: 0x84450070  lh          $a1, 0x70($v0)
    ctx->pc = 0x1ab9c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1ab9c8:
    // 0x1ab9c8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1ab9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1ab9cc:
    // 0x1ab9cc: 0x60f809  jalr        $v1
label_1ab9d0:
    if (ctx->pc == 0x1AB9D0u) {
        ctx->pc = 0x1AB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9CCu;
        // 0x1ab9d0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AB9D4u;
        goto label_1ab9d4;
    }
    ctx->pc = 0x1AB9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AB9D4u);
        ctx->pc = 0x1AB9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9CCu;
        // 0x1ab9d0: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB9CCu, 0x1AB9D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AB9D4u;
label_1ab9d4:
    // 0x1ab9d4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1ab9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ab9d8:
    // 0x1ab9d8: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1ab9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ab9dc:
    // 0x1ab9dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ab9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ab9e0:
    // 0x1ab9e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ab9e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ab9e4:
    // 0x1ab9e4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1ab9e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1ab9e8:
    // 0x1ab9e8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x1ab9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab9ec:
    // 0x1ab9ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ab9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab9f0:
    // 0x1ab9f0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1ab9f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1ab9f4:
    // 0x1ab9f4: 0x24520040  addiu       $s2, $v0, 0x40
    ctx->pc = 0x1ab9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1ab9f8:
    // 0x1ab9f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ab9f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1ab9fc:
    // 0x1ab9fc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1ab9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_1aba00:
    // 0x1aba00: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x1aba00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1aba04:
    // 0x1aba04: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1aba04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1aba08:
    // 0x1aba08: 0x8c4500b4  lw          $a1, 0xB4($v0)
    ctx->pc = 0x1aba08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1aba0c:
    // 0x1aba0c: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x1aba0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1aba10:
    // 0x1aba10: 0xa0f809  jalr        $a1
label_1aba14:
    if (ctx->pc == 0x1ABA14u) {
        ctx->pc = 0x1ABA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA10u;
        // 0x1aba14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA18u;
        goto label_1aba18;
    }
    ctx->pc = 0x1ABA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1ABA18u);
        ctx->pc = 0x1ABA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA10u;
        // 0x1aba14: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA10u, 0x1ABA18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABA18u;
label_1aba18:
    // 0x1aba18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1aba18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1aba1c:
    // 0x1aba1c: 0x0  nop
    ctx->pc = 0x1aba1cu;
    // NOP
label_1aba20:
    // 0x1aba20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aba20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1aba24:
    // 0x1aba24: 0x0  nop
    ctx->pc = 0x1aba24u;
    // NOP
label_1aba28:
    // 0x1aba28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1aba2c:
    if (ctx->pc == 0x1ABA2Cu) {
        ctx->pc = 0x1ABA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA28u;
        // 0x1aba2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA30u;
        goto label_1aba30;
    }
    ctx->pc = 0x1ABA28u;
    {
        const bool branch_taken_0x1aba28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA28u;
        // 0x1aba2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba28) {
            ctx->pc = 0x1ABA34u;
            goto label_1aba34;
        }
    }
    ctx->pc = 0x1ABA30u;
label_1aba30:
    // 0x1aba30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba34:
    // 0x1aba34: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1aba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1aba38:
    // 0x1aba38: 0x40f809  jalr        $v0
label_1aba3c:
    if (ctx->pc == 0x1ABA3Cu) {
        ctx->pc = 0x1ABA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA38u;
        // 0x1aba3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA40u;
        goto label_1aba40;
    }
    ctx->pc = 0x1ABA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ABA40u);
        ctx->pc = 0x1ABA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA38u;
        // 0x1aba3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA38u, 0x1ABA40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ABA40u;
label_1aba40:
    // 0x1aba40: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1aba40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1aba44:
    // 0x1aba44: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1aba44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1aba48:
    // 0x1aba48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1aba48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aba4c:
    // 0x1aba4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aba4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aba50:
    // 0x1aba50: 0x3e00008  jr          $ra
label_1aba54:
    if (ctx->pc == 0x1ABA54u) {
        ctx->pc = 0x1ABA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA50u;
        // 0x1aba54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ABA58u;
        goto label_fallthrough_0x1aba50;
    }
    ctx->pc = 0x1ABA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA50u;
        // 0x1aba54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aba50:
    ctx->pc = 0x1ABA58u;
}
