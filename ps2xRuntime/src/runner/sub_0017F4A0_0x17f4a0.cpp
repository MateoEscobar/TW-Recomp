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

// Function: sub_0017F4A0
// Address: 0x17f4a0 - 0x17f608
void sub_0017F4A0_0x17f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F4A0_0x17f4a0");
#endif

    switch (ctx->pc) {
        case 0x17f4a0u: goto label_17f4a0;
        case 0x17f4a4u: goto label_17f4a4;
        case 0x17f4a8u: goto label_17f4a8;
        case 0x17f4acu: goto label_17f4ac;
        case 0x17f4b0u: goto label_17f4b0;
        case 0x17f4b4u: goto label_17f4b4;
        case 0x17f4b8u: goto label_17f4b8;
        case 0x17f4bcu: goto label_17f4bc;
        case 0x17f4c0u: goto label_17f4c0;
        case 0x17f4c4u: goto label_17f4c4;
        case 0x17f4c8u: goto label_17f4c8;
        case 0x17f4ccu: goto label_17f4cc;
        case 0x17f4d0u: goto label_17f4d0;
        case 0x17f4d4u: goto label_17f4d4;
        case 0x17f4d8u: goto label_17f4d8;
        case 0x17f4dcu: goto label_17f4dc;
        case 0x17f4e0u: goto label_17f4e0;
        case 0x17f4e4u: goto label_17f4e4;
        case 0x17f4e8u: goto label_17f4e8;
        case 0x17f4ecu: goto label_17f4ec;
        case 0x17f4f0u: goto label_17f4f0;
        case 0x17f4f4u: goto label_17f4f4;
        case 0x17f4f8u: goto label_17f4f8;
        case 0x17f4fcu: goto label_17f4fc;
        case 0x17f500u: goto label_17f500;
        case 0x17f504u: goto label_17f504;
        case 0x17f508u: goto label_17f508;
        case 0x17f50cu: goto label_17f50c;
        case 0x17f510u: goto label_17f510;
        case 0x17f514u: goto label_17f514;
        case 0x17f518u: goto label_17f518;
        case 0x17f51cu: goto label_17f51c;
        case 0x17f520u: goto label_17f520;
        case 0x17f524u: goto label_17f524;
        case 0x17f528u: goto label_17f528;
        case 0x17f52cu: goto label_17f52c;
        case 0x17f530u: goto label_17f530;
        case 0x17f534u: goto label_17f534;
        case 0x17f538u: goto label_17f538;
        case 0x17f53cu: goto label_17f53c;
        case 0x17f540u: goto label_17f540;
        case 0x17f544u: goto label_17f544;
        case 0x17f548u: goto label_17f548;
        case 0x17f54cu: goto label_17f54c;
        case 0x17f550u: goto label_17f550;
        case 0x17f554u: goto label_17f554;
        case 0x17f558u: goto label_17f558;
        case 0x17f55cu: goto label_17f55c;
        case 0x17f560u: goto label_17f560;
        case 0x17f564u: goto label_17f564;
        case 0x17f568u: goto label_17f568;
        case 0x17f56cu: goto label_17f56c;
        case 0x17f570u: goto label_17f570;
        case 0x17f574u: goto label_17f574;
        case 0x17f578u: goto label_17f578;
        case 0x17f57cu: goto label_17f57c;
        case 0x17f580u: goto label_17f580;
        case 0x17f584u: goto label_17f584;
        case 0x17f588u: goto label_17f588;
        case 0x17f58cu: goto label_17f58c;
        case 0x17f590u: goto label_17f590;
        case 0x17f594u: goto label_17f594;
        case 0x17f598u: goto label_17f598;
        case 0x17f59cu: goto label_17f59c;
        case 0x17f5a0u: goto label_17f5a0;
        case 0x17f5a4u: goto label_17f5a4;
        case 0x17f5a8u: goto label_17f5a8;
        case 0x17f5acu: goto label_17f5ac;
        case 0x17f5b0u: goto label_17f5b0;
        case 0x17f5b4u: goto label_17f5b4;
        case 0x17f5b8u: goto label_17f5b8;
        case 0x17f5bcu: goto label_17f5bc;
        case 0x17f5c0u: goto label_17f5c0;
        case 0x17f5c4u: goto label_17f5c4;
        case 0x17f5c8u: goto label_17f5c8;
        case 0x17f5ccu: goto label_17f5cc;
        case 0x17f5d0u: goto label_17f5d0;
        case 0x17f5d4u: goto label_17f5d4;
        case 0x17f5d8u: goto label_17f5d8;
        case 0x17f5dcu: goto label_17f5dc;
        case 0x17f5e0u: goto label_17f5e0;
        case 0x17f5e4u: goto label_17f5e4;
        case 0x17f5e8u: goto label_17f5e8;
        case 0x17f5ecu: goto label_17f5ec;
        case 0x17f5f0u: goto label_17f5f0;
        case 0x17f5f4u: goto label_17f5f4;
        case 0x17f5f8u: goto label_17f5f8;
        case 0x17f5fcu: goto label_17f5fc;
        case 0x17f600u: goto label_17f600;
        case 0x17f604u: goto label_17f604;
        default: break;
    }

    ctx->pc = 0x17f4a0u;

label_17f4a0:
    // 0x17f4a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_17f4a4:
    // 0x17f4a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f4a8:
    // 0x17f4a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_17f4ac:
    // 0x17f4ac: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_17f4b0:
    // 0x17f4b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17f4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_17f4b4:
    // 0x17f4b4: 0x24428cc8  addiu       $v0, $v0, -0x7338
    ctx->pc = 0x17f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937800));
label_17f4b8:
    // 0x17f4b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17f4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_17f4bc:
    // 0x17f4bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17f4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17f4c0:
    // 0x17f4c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17f4c4:
    // 0x17f4c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17f4c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17f4c8:
    // 0x17f4c8: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x17f4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_17f4cc:
    // 0x17f4cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17f4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17f4d0:
    // 0x17f4d0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x17f4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_17f4d4:
    // 0x17f4d4: 0x24a58358  addiu       $a1, $a1, -0x7CA8
    ctx->pc = 0x17f4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935384));
label_17f4d8:
    // 0x17f4d8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x17f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_17f4dc:
    // 0x17f4dc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_17f4e0:
    // 0x17f4e0: 0xc11a7d2  jal         func_469F48
label_17f4e4:
    if (ctx->pc == 0x17F4E4u) {
        ctx->pc = 0x17F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F4E0u;
        // 0x17f4e4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F4E8u;
        goto label_17f4e8;
    }
    ctx->pc = 0x17F4E0u;
    SET_GPR_U32(ctx, 31, 0x17F4E8u);
    ctx->pc = 0x17F4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F4E0u;
    // 0x17f4e4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x17F4E0u, 0x17F4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4E8u;
label_17f4e8:
    // 0x17f4e8: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x17f4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17f4ec:
    // 0x17f4ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17f4f0:
    // 0x17f4f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f4f4:
    // 0x17f4f4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_17f4f8:
    // 0x17f4f8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x17f4f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_17f4fc:
    // 0x17f4fc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x17f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_17f500:
    // 0x17f500: 0x60f809  jalr        $v1
label_17f504:
    if (ctx->pc == 0x17F504u) {
        ctx->pc = 0x17F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F500u;
        // 0x17f504: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F508u;
        goto label_17f508;
    }
    ctx->pc = 0x17F500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17F508u);
        ctx->pc = 0x17F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F500u;
        // 0x17f504: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F500u, 0x17F508u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F508u;
label_17f508:
    // 0x17f508: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_17f50c:
    // 0x17f50c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17f510:
    // 0x17f510: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17f514:
    // 0x17f514: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x17f514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_17f518:
    // 0x17f518: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_17f51c:
    // 0x17f51c: 0x60f809  jalr        $v1
label_17f520:
    if (ctx->pc == 0x17F520u) {
        ctx->pc = 0x17F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F51Cu;
        // 0x17f520: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F524u;
        goto label_17f524;
    }
    ctx->pc = 0x17F51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17F524u);
        ctx->pc = 0x17F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F51Cu;
        // 0x17f520: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F51Cu, 0x17F524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F524u;
label_17f524:
    // 0x17f524: 0xc11a4fc  jal         func_4693F0
label_17f528:
    if (ctx->pc == 0x17F528u) {
        ctx->pc = 0x17F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F524u;
        // 0x17f528: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F52Cu;
        goto label_17f52c;
    }
    ctx->pc = 0x17F524u;
    SET_GPR_U32(ctx, 31, 0x17F52Cu);
    ctx->pc = 0x17F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F524u;
    // 0x17f528: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4693F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693F0u, 0x17F524u, 0x17F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F52Cu;
label_17f52c:
    // 0x17f52c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x17f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_17f530:
    // 0x17f530: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x17f530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17f534:
    // 0x17f534: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17f534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17f538:
    // 0x17f538: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x17f538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_17f53c:
    // 0x17f53c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x17f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17f540:
    // 0x17f540: 0x60f809  jalr        $v1
label_17f544:
    if (ctx->pc == 0x17F544u) {
        ctx->pc = 0x17F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F540u;
        // 0x17f544: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F548u;
        goto label_17f548;
    }
    ctx->pc = 0x17F540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17F548u);
        ctx->pc = 0x17F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F540u;
        // 0x17f544: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F540u, 0x17F548u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F548u;
label_17f548:
    // 0x17f548: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17f54c:
    // 0x17f54c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17f54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f550:
    // 0x17f550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17f550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17f554:
    // 0x17f554: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17f554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_17f558:
    // 0x17f558: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x17f558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_17f55c:
    // 0x17f55c: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x17f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_17f560:
    // 0x17f560: 0x60f809  jalr        $v1
label_17f564:
    if (ctx->pc == 0x17F564u) {
        ctx->pc = 0x17F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F560u;
        // 0x17f564: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F568u;
        goto label_17f568;
    }
    ctx->pc = 0x17F560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17F568u);
        ctx->pc = 0x17F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F560u;
        // 0x17f564: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F560u, 0x17F568u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F568u;
label_17f568:
    // 0x17f568: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x17f568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17f56c:
    // 0x17f56c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_17f570:
    // 0x17f570: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x17f570u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_17f574:
    // 0x17f574: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x17f574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_17f578:
    // 0x17f578: 0x40f809  jalr        $v0
label_17f57c:
    if (ctx->pc == 0x17F57Cu) {
        ctx->pc = 0x17F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F578u;
        // 0x17f57c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F580u;
        goto label_17f580;
    }
    ctx->pc = 0x17F578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17F580u);
        ctx->pc = 0x17F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F578u;
        // 0x17f57c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F578u, 0x17F580u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F580u;
label_17f580:
    // 0x17f580: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x17f580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_17f584:
    // 0x17f584: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x17f584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17f588:
    // 0x17f588: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17f58c:
    // 0x17f58c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x17f58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_17f590:
    // 0x17f590: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x17f590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_17f594:
    // 0x17f594: 0x60f809  jalr        $v1
label_17f598:
    if (ctx->pc == 0x17F598u) {
        ctx->pc = 0x17F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F594u;
        // 0x17f598: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F59Cu;
        goto label_17f59c;
    }
    ctx->pc = 0x17F594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17F59Cu);
        ctx->pc = 0x17F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F594u;
        // 0x17f598: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F594u, 0x17F59Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F59Cu;
label_17f59c:
    // 0x17f59c: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17f5a0:
    // 0x17f5a0: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x17f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_17f5a4:
    // 0x17f5a4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_17f5a8:
    // 0x17f5a8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x17f5a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_17f5ac:
    // 0x17f5ac: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x17f5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_17f5b0:
    // 0x17f5b0: 0x60f809  jalr        $v1
label_17f5b4:
    if (ctx->pc == 0x17F5B4u) {
        ctx->pc = 0x17F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5B0u;
        // 0x17f5b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F5B8u;
        goto label_17f5b8;
    }
    ctx->pc = 0x17F5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17F5B8u);
        ctx->pc = 0x17F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5B0u;
        // 0x17f5b4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F5B0u, 0x17F5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17F5B8u;
label_17f5b8:
    // 0x17f5b8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x17f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_17f5bc:
    // 0x17f5bc: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x17f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_17f5c0:
    // 0x17f5c0: 0x24a52408  addiu       $a1, $a1, 0x2408
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9224));
label_17f5c4:
    // 0x17f5c4: 0xc1378f6  jal         func_4DE3D8
label_17f5c8:
    if (ctx->pc == 0x17F5C8u) {
        ctx->pc = 0x17F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5C4u;
        // 0x17f5c8: 0x24060115  addiu       $a2, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F5CCu;
        goto label_17f5cc;
    }
    ctx->pc = 0x17F5C4u;
    SET_GPR_U32(ctx, 31, 0x17F5CCu);
    ctx->pc = 0x17F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5C4u;
    // 0x17f5c8: 0x24060115  addiu       $a2, $zero, 0x115 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE3D8u, 0x17F5C4u, 0x17F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5CCu;
label_17f5cc:
    // 0x17f5cc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_17f5d0:
    // 0x17f5d0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x17f5d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_17f5d4:
    // 0x17f5d4: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x17f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_17f5d8:
    // 0x17f5d8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x17f5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_17f5dc:
    // 0x17f5dc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_17f5e0:
    if (ctx->pc == 0x17F5E0u) {
        ctx->pc = 0x17F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5DCu;
        // 0x17f5e0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F5E4u;
        goto label_17f5e4;
    }
    ctx->pc = 0x17F5DCu;
    {
        const bool branch_taken_0x17f5dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5DCu;
        // 0x17f5e0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5dc) {
            ctx->pc = 0x17F5ECu;
            goto label_17f5ec;
        }
    }
    ctx->pc = 0x17F5E4u;
label_17f5e4:
    // 0x17f5e4: 0xc10b208  jal         func_42C820
label_17f5e8:
    if (ctx->pc == 0x17F5E8u) {
        ctx->pc = 0x17F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5E4u;
        // 0x17f5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F5ECu;
        goto label_17f5ec;
    }
    ctx->pc = 0x17F5E4u;
    SET_GPR_U32(ctx, 31, 0x17F5ECu);
    ctx->pc = 0x17F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F5E4u;
    // 0x17f5e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x17F5E4u, 0x17F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F5ECu;
label_17f5ec:
    // 0x17f5ec: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17f5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17f5f0:
    // 0x17f5f0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17f5f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17f5f4:
    // 0x17f5f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17f5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17f5f8:
    // 0x17f5f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17f5fc:
    // 0x17f5fc: 0x3e00008  jr          $ra
label_17f600:
    if (ctx->pc == 0x17F600u) {
        ctx->pc = 0x17F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5FCu;
        // 0x17f600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17F604u;
        goto label_17f604;
    }
    ctx->pc = 0x17F5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F5FCu;
        // 0x17f600: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F604u;
label_17f604:
    // 0x17f604: 0x0  nop
    ctx->pc = 0x17f604u;
    // NOP
    ctx->pc = 0x17f608u;
}
