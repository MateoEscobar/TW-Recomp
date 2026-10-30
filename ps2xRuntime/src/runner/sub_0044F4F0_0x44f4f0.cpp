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

// Function: sub_0044F4F0
// Address: 0x44f4f0 - 0x44f650
void sub_0044F4F0_0x44f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044F4F0_0x44f4f0");
#endif

    ctx->pc = 0x44f4f0u;

    // 0x44f4f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x44f4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44f4f4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x44f4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x44f4f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x44F4F8u;
    {
        const bool branch_taken_0x44f4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F4F8u;
        // 0x44f4fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f4f8) {
            ctx->pc = 0x44F504u;
            goto label_44f504;
        }
    }
    ctx->pc = 0x44F500u;
    // 0x44f500: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x44f500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_44f504:
    // 0x44f504: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x44f504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x44f508: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F508u;
    {
        const bool branch_taken_0x44f508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F508u;
        // 0x44f50c: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f508) {
            ctx->pc = 0x44F52Cu;
            goto label_44f52c;
        }
    }
    ctx->pc = 0x44F510u;
    // 0x44f510: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f514: 0x8c82e78c  lw          $v0, -0x1874($a0)
    ctx->pc = 0x44f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961036)));
    // 0x44f518: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f51c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x44f51cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f520: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x44f520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x44f524: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44f524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x44f528: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44f528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44f52c:
    // 0x44f52c: 0x30a20010  andi        $v0, $a1, 0x10
    ctx->pc = 0x44f52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x44f530: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F530u;
    {
        const bool branch_taken_0x44f530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F530u;
        // 0x44f534: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f530) {
            ctx->pc = 0x44F554u;
            goto label_44f554;
        }
    }
    ctx->pc = 0x44F538u;
    // 0x44f538: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f53c: 0x8c82e790  lw          $v0, -0x1870($a0)
    ctx->pc = 0x44f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961040)));
    // 0x44f540: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f544: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x44f544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f548: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x44f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x44f54c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44f54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x44f550: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44f550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44f554:
    // 0x44f554: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x44f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x44f558: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F558u;
    {
        const bool branch_taken_0x44f558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F558u;
        // 0x44f55c: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f558) {
            ctx->pc = 0x44F57Cu;
            goto label_44f57c;
        }
    }
    ctx->pc = 0x44F560u;
    // 0x44f560: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f564: 0x8c82e794  lw          $v0, -0x186C($a0)
    ctx->pc = 0x44f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961044)));
    // 0x44f568: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f56c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x44f56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f570: 0x2442004f  addiu       $v0, $v0, 0x4F
    ctx->pc = 0x44f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x44f574: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44f574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x44f578: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44f578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44f57c:
    // 0x44f57c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x44f57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x44f580: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F580u;
    {
        const bool branch_taken_0x44f580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F580u;
        // 0x44f584: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f580) {
            ctx->pc = 0x44F5A4u;
            goto label_44f5a4;
        }
    }
    ctx->pc = 0x44F588u;
    // 0x44f588: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f58c: 0x8c82e798  lw          $v0, -0x1868($a0)
    ctx->pc = 0x44f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961048)));
    // 0x44f590: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f594: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x44f594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f598: 0x2442004f  addiu       $v0, $v0, 0x4F
    ctx->pc = 0x44f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 79));
    // 0x44f59c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44f59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x44f5a0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44f5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44f5a4:
    // 0x44f5a4: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x44f5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x44f5a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F5A8u;
    {
        const bool branch_taken_0x44f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F5A8u;
        // 0x44f5ac: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f5a8) {
            ctx->pc = 0x44F5CCu;
            goto label_44f5cc;
        }
    }
    ctx->pc = 0x44F5B0u;
    // 0x44f5b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f5b4: 0x8c82e79c  lw          $v0, -0x1864($a0)
    ctx->pc = 0x44f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961052)));
    // 0x44f5b8: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f5bc: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x44f5bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f5c0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x44f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x44f5c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x44f5c8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44f5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44f5cc:
    // 0x44f5cc: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x44f5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x44f5d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F5D0u;
    {
        const bool branch_taken_0x44f5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F5D0u;
        // 0x44f5d4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f5d0) {
            ctx->pc = 0x44F5F4u;
            goto label_44f5f4;
        }
    }
    ctx->pc = 0x44F5D8u;
    // 0x44f5d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f5dc: 0x8c82e7a0  lw          $v0, -0x1860($a0)
    ctx->pc = 0x44f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961056)));
    // 0x44f5e0: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f5e4: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x44f5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f5e8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x44f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x44f5ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44f5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x44f5f0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44f5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44f5f4:
    // 0x44f5f4: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x44f5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x44f5f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F5F8u;
    {
        const bool branch_taken_0x44f5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F5F8u;
        // 0x44f5fc: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f5f8) {
            ctx->pc = 0x44F61Cu;
            goto label_44f61c;
        }
    }
    ctx->pc = 0x44F600u;
    // 0x44f600: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f604: 0x8c82e7a4  lw          $v0, -0x185C($a0)
    ctx->pc = 0x44f604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961060)));
    // 0x44f608: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f60c: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x44f60cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f610: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x44f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x44f614: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44f614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x44f618: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44f618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44f61c:
    // 0x44f61c: 0x30a20100  andi        $v0, $a1, 0x100
    ctx->pc = 0x44f61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x44f620: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44F620u;
    {
        const bool branch_taken_0x44f620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F620u;
        // 0x44f624: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44f620) {
            ctx->pc = 0x44F644u;
            goto label_44f644;
        }
    }
    ctx->pc = 0x44F628u;
    // 0x44f628: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x44f628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x44f62c: 0x8c82e7a8  lw          $v0, -0x1858($a0)
    ctx->pc = 0x44f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961064)));
    // 0x44f630: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x44f630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x44f634: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x44f634u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x44f638: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x44f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x44f63c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x44f63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x44f640: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x44f640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_44f644:
    // 0x44f644: 0x3e00008  jr          $ra
    ctx->pc = 0x44F644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44F644u;
        // 0x44f648: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44F644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44F64Cu;
    // 0x44f64c: 0x0  nop
    ctx->pc = 0x44f64cu;
    // NOP
    ctx->pc = 0x44f650u;
}
